#include "definitionsInternal.h"
#include "supportCode.h"

struct MergedNeuronUpdateGroup0
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    curandState* rng;
    scalar* input;
    unsigned int numNeurons;
    
}
;
struct MergedNeuronUpdateGroup1
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Vmem;
    unsigned int* nSpk;
    float* inSynInSyn0;
    unsigned int numNeurons;
    scalar Vthr;
    
}
;
struct MergedNeuronSpikeQueueUpdateGroup0
 {
    unsigned int* spkCnt;
    
}
;
struct MergedNeuronSpikeQueueUpdateGroup1
 {
    unsigned int* spkCnt;
    
}
;
__device__ __constant__ MergedNeuronSpikeQueueUpdateGroup0 d_mergedNeuronSpikeQueueUpdateGroup0[1];
void pushMergedNeuronSpikeQueueUpdateGroup0ToDevice(unsigned int idx, unsigned int* spkCnt) {
    MergedNeuronSpikeQueueUpdateGroup0 group = {spkCnt, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronSpikeQueueUpdateGroup0, &group, sizeof(MergedNeuronSpikeQueueUpdateGroup0), idx * sizeof(MergedNeuronSpikeQueueUpdateGroup0)));
}
__device__ __constant__ MergedNeuronSpikeQueueUpdateGroup1 d_mergedNeuronSpikeQueueUpdateGroup1[13];
void pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(unsigned int idx, unsigned int* spkCnt) {
    MergedNeuronSpikeQueueUpdateGroup1 group = {spkCnt, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronSpikeQueueUpdateGroup1, &group, sizeof(MergedNeuronSpikeQueueUpdateGroup1), idx * sizeof(MergedNeuronSpikeQueueUpdateGroup1)));
}
__device__ __constant__ MergedNeuronUpdateGroup0 d_mergedNeuronUpdateGroup0[1];
void pushMergedNeuronUpdateGroup0ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, curandState* rng, scalar* input, unsigned int numNeurons) {
    MergedNeuronUpdateGroup0 group = {spkCnt, spk, rng, input, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &group, sizeof(MergedNeuronUpdateGroup0), idx * sizeof(MergedNeuronUpdateGroup0)));
}
__device__ __constant__ MergedNeuronUpdateGroup1 d_mergedNeuronUpdateGroup1[13];
void pushMergedNeuronUpdateGroup1ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, unsigned int numNeurons, scalar Vthr) {
    MergedNeuronUpdateGroup1 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, numNeurons, Vthr, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &group, sizeof(MergedNeuronUpdateGroup1), idx * sizeof(MergedNeuronUpdateGroup1)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID0[] = {0, };
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID1[] = {3072, 68608, 101376, 134144, 150528, 166912, 175104, 183296, 185344, 187392, 252928, 257024, 257088, };

extern "C" __global__ void neuronSpikeQueueUpdateKernel() {
    const unsigned int id = 32 * blockIdx.x + threadIdx.x;
    if(id < 1) {
        struct MergedNeuronSpikeQueueUpdateGroup0 *group = &d_mergedNeuronSpikeQueueUpdateGroup0[id - 0]; 
        group->spkCnt[0] = 0;
    }
    if(id >= 1 && id < 14) {
        struct MergedNeuronSpikeQueueUpdateGroup1 *group = &d_mergedNeuronSpikeQueueUpdateGroup1[id - 1]; 
        group->spkCnt[0] = 0;
    }
}

extern "C" __global__ void updateNeuronsKernel(float t)
 {
    const unsigned int id = 64 * blockIdx.x + threadIdx.x; 
    __shared__ unsigned int shSpk[64];
    __shared__ unsigned int shPosSpk;
    __shared__ unsigned int shSpkCount;
    if (threadIdx.x == 0) {
        shSpkCount = 0;
    }
    
    __syncthreads();
    // merged0
    if(id < 3072) {
        struct MergedNeuronUpdateGroup0 *group = &d_mergedNeuronUpdateGroup0[0]; 
        const unsigned int lid = id - 0;
        
        if(lid < group->numNeurons) {
            const scalar linput = group->input[lid];
            
            // test whether spike condition was fulfilled previously
            // calculate membrane potential
            
            const bool spike = curand_uniform(&group->rng[lid]) >= exp(-fabs(linput) * DT);
            
            // test for and register a true spike
            if (
            linput > 0.0f && spike
            ) {
                const unsigned int spkIdx = atomicAdd(&shSpkCount, 1);
                shSpk[spkIdx] = lid;
            }
        }
        __syncthreads();
        if(threadIdx.x == 0) {
            if (shSpkCount > 0) {
                shPosSpk = atomicAdd(&group->spkCnt[0], shSpkCount);
            }
        }
        __syncthreads();
        if(threadIdx.x < shSpkCount) {
            const unsigned int n = shSpk[threadIdx.x];
            group->spk[shPosSpk + threadIdx.x] = n;
        }
    }
    // merged1
    if(id >= 3072 && id < 261184) {
        unsigned int lo = 0;
        unsigned int hi = 13;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedNeuronUpdateGroupStartID1[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedNeuronUpdateGroup1 *group = &d_mergedNeuronUpdateGroup1[lo - 1]; 
        const unsigned int groupStartID = d_mergedNeuronUpdateGroupStartID1[lo - 1];
        const unsigned int lid = id - groupStartID;
        
        if(lid < group->numNeurons) {
            scalar lVmem = group->Vmem[lid];
            unsigned int lnSpk = group->nSpk[lid];
            
            float Isyn = 0;
             {
                // pull inSyn values in a coalesced access
                float linSyn = group->inSynInSyn0[lid];
                Isyn += linSyn; linSyn = 0;
                
                group->inSynInSyn0[lid] = linSyn;
            }
            // test whether spike condition was fulfilled previously
            // calculate membrane potential
            
            if (t == 0.0f) {
                // Reset state at t = 0
                lVmem = 0.0f;
                lnSpk = 0;
            }
            lVmem += Isyn * DT;
            
            // test for and register a true spike
            if (
            lVmem >= group->Vthr
            ) {
                const unsigned int spkIdx = atomicAdd(&shSpkCount, 1);
                shSpk[spkIdx] = lid;
                // spike reset code
                
                lVmem = 0.0f;
                lnSpk += 1;
                
            }
            group->Vmem[lid] = lVmem;
            group->nSpk[lid] = lnSpk;
        }
        __syncthreads();
        if(threadIdx.x == 0) {
            if (shSpkCount > 0) {
                shPosSpk = atomicAdd(&group->spkCnt[0], shSpkCount);
            }
        }
        __syncthreads();
        if(threadIdx.x < shSpkCount) {
            const unsigned int n = shSpk[threadIdx.x];
            group->spk[shPosSpk + threadIdx.x] = n;
        }
    }
}
void updateNeurons(float t) {
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_1_nrn, sizeof(Vthrconv2d_1_nrn), (sizeof(MergedNeuronUpdateGroup1) * (0)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_2_nrn, sizeof(Vthrconv2d_2_nrn), (sizeof(MergedNeuronUpdateGroup1) * (1)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_3_nrn, sizeof(Vthrconv2d_3_nrn), (sizeof(MergedNeuronUpdateGroup1) * (2)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_4_nrn, sizeof(Vthrconv2d_4_nrn), (sizeof(MergedNeuronUpdateGroup1) * (3)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_5_nrn, sizeof(Vthrconv2d_5_nrn), (sizeof(MergedNeuronUpdateGroup1) * (4)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_6_nrn, sizeof(Vthrconv2d_6_nrn), (sizeof(MergedNeuronUpdateGroup1) * (5)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_7_nrn, sizeof(Vthrconv2d_7_nrn), (sizeof(MergedNeuronUpdateGroup1) * (6)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_8_nrn, sizeof(Vthrconv2d_8_nrn), (sizeof(MergedNeuronUpdateGroup1) * (7)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_9_nrn, sizeof(Vthrconv2d_9_nrn), (sizeof(MergedNeuronUpdateGroup1) * (8)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_nrn, sizeof(Vthrconv2d_nrn), (sizeof(MergedNeuronUpdateGroup1) * (9)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrdense_1_nrn, sizeof(Vthrdense_1_nrn), (sizeof(MergedNeuronUpdateGroup1) * (10)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrdense_2_nrn, sizeof(Vthrdense_2_nrn), (sizeof(MergedNeuronUpdateGroup1) * (11)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrdense_nrn, sizeof(Vthrdense_nrn), (sizeof(MergedNeuronUpdateGroup1) * (12)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
     {
        const dim3 threads(32, 1);
        const dim3 grid(1, 1);
        neuronSpikeQueueUpdateKernel<<<grid, threads>>>();
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
    }
     {
        CHECK_CUDA_ERRORS(cudaEventRecord(neuronUpdateStart));
        const dim3 threads(64, 1);
        const dim3 grid(4081, 1);
        updateNeuronsKernel<<<grid, threads>>>(t);
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
        CHECK_CUDA_ERRORS(cudaEventRecord(neuronUpdateStop));
    }
}
