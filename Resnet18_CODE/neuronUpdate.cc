#include "definitionsInternal.h"
#include "supportCode.h"

struct MergedNeuronUpdateGroup0
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Vmem;
    unsigned int* nSpk;
    float* inSynInSyn0;
    float* inSynInSyn1;
    unsigned int numNeurons;
    scalar Vthr;
    
}
;
struct MergedNeuronUpdateGroup1
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Vmem;
    unsigned int* nSpk;
    float* inSynInSyn0;
    float* inSynInSyn1;
    float* inSynInSyn2;
    unsigned int numNeurons;
    scalar Vthr;
    
}
;
struct MergedNeuronUpdateGroup2
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    curandState* rng;
    scalar* input;
    unsigned int numNeurons;
    
}
;
struct MergedNeuronUpdateGroup3
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
__device__ __constant__ MergedNeuronSpikeQueueUpdateGroup1 d_mergedNeuronSpikeQueueUpdateGroup1[21];
void pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(unsigned int idx, unsigned int* spkCnt) {
    MergedNeuronSpikeQueueUpdateGroup1 group = {spkCnt, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronSpikeQueueUpdateGroup1, &group, sizeof(MergedNeuronSpikeQueueUpdateGroup1), idx * sizeof(MergedNeuronSpikeQueueUpdateGroup1)));
}
__device__ __constant__ MergedNeuronUpdateGroup0 d_mergedNeuronUpdateGroup0[4];
void pushMergedNeuronUpdateGroup0ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, float* inSynInSyn1, unsigned int numNeurons, scalar Vthr) {
    MergedNeuronUpdateGroup0 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, inSynInSyn1, numNeurons, Vthr, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &group, sizeof(MergedNeuronUpdateGroup0), idx * sizeof(MergedNeuronUpdateGroup0)));
}
__device__ __constant__ MergedNeuronUpdateGroup1 d_mergedNeuronUpdateGroup1[7];
void pushMergedNeuronUpdateGroup1ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, float* inSynInSyn1, float* inSynInSyn2, unsigned int numNeurons, scalar Vthr) {
    MergedNeuronUpdateGroup1 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, inSynInSyn1, inSynInSyn2, numNeurons, Vthr, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &group, sizeof(MergedNeuronUpdateGroup1), idx * sizeof(MergedNeuronUpdateGroup1)));
}
__device__ __constant__ MergedNeuronUpdateGroup2 d_mergedNeuronUpdateGroup2[1];
void pushMergedNeuronUpdateGroup2ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, curandState* rng, scalar* input, unsigned int numNeurons) {
    MergedNeuronUpdateGroup2 group = {spkCnt, spk, rng, input, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup2, &group, sizeof(MergedNeuronUpdateGroup2), idx * sizeof(MergedNeuronUpdateGroup2)));
}
__device__ __constant__ MergedNeuronUpdateGroup3 d_mergedNeuronUpdateGroup3[10];
void pushMergedNeuronUpdateGroup3ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, unsigned int numNeurons, scalar Vthr) {
    MergedNeuronUpdateGroup3 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, numNeurons, Vthr, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &group, sizeof(MergedNeuronUpdateGroup3), idx * sizeof(MergedNeuronUpdateGroup3)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID0[] = {0, 2304, 4352, 10752, };
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID1[] = {13952, 16256, 18560, 20608, 22656, 25856, 29056, };
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID2[] = {29120, };
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID3[] = {32192, 34496, 36800, 38848, 40896, 47296, 53696, 60096, 63296, 66496, };

extern "C" __global__ void neuronSpikeQueueUpdateKernel() {
    const unsigned int id = 32 * blockIdx.x + threadIdx.x;
    if(id < 1) {
        struct MergedNeuronSpikeQueueUpdateGroup0 *group = &d_mergedNeuronSpikeQueueUpdateGroup0[id - 0]; 
        group->spkCnt[0] = 0;
    }
    if(id >= 1 && id < 22) {
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
    if(id < 13952) {
        unsigned int lo = 0;
        unsigned int hi = 4;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedNeuronUpdateGroupStartID0[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedNeuronUpdateGroup0 *group = &d_mergedNeuronUpdateGroup0[lo - 1]; 
        const unsigned int groupStartID = d_mergedNeuronUpdateGroupStartID0[lo - 1];
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
             {
                // pull inSyn values in a coalesced access
                float linSyn = group->inSynInSyn1[lid];
                Isyn += linSyn; linSyn = 0;
                
                group->inSynInSyn1[lid] = linSyn;
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
    // merged1
    if(id >= 13952 && id < 29120) {
        unsigned int lo = 0;
        unsigned int hi = 7;
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
             {
                // pull inSyn values in a coalesced access
                float linSyn = group->inSynInSyn1[lid];
                Isyn += linSyn; linSyn = 0;
                
                group->inSynInSyn1[lid] = linSyn;
            }
             {
                // pull inSyn values in a coalesced access
                float linSyn = group->inSynInSyn2[lid];
                Isyn += linSyn; linSyn = 0;
                
                group->inSynInSyn2[lid] = linSyn;
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
    // merged2
    if(id >= 29120 && id < 32192) {
        struct MergedNeuronUpdateGroup2 *group = &d_mergedNeuronUpdateGroup2[0]; 
        const unsigned int lid = id - 29120;
        
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
    // merged3
    if(id >= 32192 && id < 132032) {
        unsigned int lo = 0;
        unsigned int hi = 10;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedNeuronUpdateGroupStartID3[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedNeuronUpdateGroup3 *group = &d_mergedNeuronUpdateGroup3[lo - 1]; 
        const unsigned int groupStartID = d_mergedNeuronUpdateGroupStartID3[lo - 1];
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
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_10_nrn, sizeof(Vthrconv2d_10_nrn), (sizeof(MergedNeuronUpdateGroup1) * (0)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_11_nrn, sizeof(Vthrconv2d_11_nrn), (sizeof(MergedNeuronUpdateGroup3) * (0)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_12_nrn, sizeof(Vthrconv2d_12_nrn), (sizeof(MergedNeuronUpdateGroup1) * (1)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &Vthrconv2d_13_nrn, sizeof(Vthrconv2d_13_nrn), (sizeof(MergedNeuronUpdateGroup0) * (0)) + offsetof(MergedNeuronUpdateGroup0, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_14_nrn, sizeof(Vthrconv2d_14_nrn), (sizeof(MergedNeuronUpdateGroup3) * (1)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_15_nrn, sizeof(Vthrconv2d_15_nrn), (sizeof(MergedNeuronUpdateGroup1) * (2)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_16_nrn, sizeof(Vthrconv2d_16_nrn), (sizeof(MergedNeuronUpdateGroup3) * (2)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_17_nrn, sizeof(Vthrconv2d_17_nrn), (sizeof(MergedNeuronUpdateGroup1) * (3)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &Vthrconv2d_18_nrn, sizeof(Vthrconv2d_18_nrn), (sizeof(MergedNeuronUpdateGroup0) * (1)) + offsetof(MergedNeuronUpdateGroup0, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_19_nrn, sizeof(Vthrconv2d_19_nrn), (sizeof(MergedNeuronUpdateGroup3) * (3)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_1_nrn, sizeof(Vthrconv2d_1_nrn), (sizeof(MergedNeuronUpdateGroup3) * (4)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_2_nrn, sizeof(Vthrconv2d_2_nrn), (sizeof(MergedNeuronUpdateGroup3) * (5)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &Vthrconv2d_3_nrn, sizeof(Vthrconv2d_3_nrn), (sizeof(MergedNeuronUpdateGroup0) * (2)) + offsetof(MergedNeuronUpdateGroup0, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_4_nrn, sizeof(Vthrconv2d_4_nrn), (sizeof(MergedNeuronUpdateGroup3) * (6)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_5_nrn, sizeof(Vthrconv2d_5_nrn), (sizeof(MergedNeuronUpdateGroup1) * (4)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_6_nrn, sizeof(Vthrconv2d_6_nrn), (sizeof(MergedNeuronUpdateGroup3) * (7)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrconv2d_7_nrn, sizeof(Vthrconv2d_7_nrn), (sizeof(MergedNeuronUpdateGroup1) * (5)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &Vthrconv2d_8_nrn, sizeof(Vthrconv2d_8_nrn), (sizeof(MergedNeuronUpdateGroup0) * (3)) + offsetof(MergedNeuronUpdateGroup0, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_9_nrn, sizeof(Vthrconv2d_9_nrn), (sizeof(MergedNeuronUpdateGroup3) * (8)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup3, &Vthrconv2d_nrn, sizeof(Vthrconv2d_nrn), (sizeof(MergedNeuronUpdateGroup3) * (9)) + offsetof(MergedNeuronUpdateGroup3, Vthr)));
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &Vthrdense_nrn, sizeof(Vthrdense_nrn), (sizeof(MergedNeuronUpdateGroup1) * (6)) + offsetof(MergedNeuronUpdateGroup1, Vthr)));
     {
        const dim3 threads(32, 1);
        const dim3 grid(1, 1);
        neuronSpikeQueueUpdateKernel<<<grid, threads>>>();
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
    }
     {
        CHECK_CUDA_ERRORS(cudaEventRecord(neuronUpdateStart));
        const dim3 threads(64, 1);
        const dim3 grid(2063, 1);
        updateNeuronsKernel<<<grid, threads>>>(t);
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
        CHECK_CUDA_ERRORS(cudaEventRecord(neuronUpdateStop));
    }
}
