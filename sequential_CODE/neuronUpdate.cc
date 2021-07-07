#include "definitionsInternal.h"
#include "supportCode.h"

struct MergedNeuronUpdateGroup0
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* input;
    scalar* Vmem;
    unsigned int numNeurons;
    
}
;
struct MergedNeuronUpdateGroup1
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Fx;
    scalar* Vmem;
    float* inSynInSyn0;
    unsigned int numNeurons;
    scalar alpha;
    scalar upstreamAlpha;
    scalar scale;
    scalar upstreamScale;
    
}
;
struct MergedNeuronUpdateGroup2
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Fx;
    scalar* Vmem;
    float* inSynInSyn0;
    unsigned int numNeurons;
    
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
void pushMergedNeuronUpdateGroup0ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* input, scalar* Vmem, unsigned int numNeurons) {
    MergedNeuronUpdateGroup0 group = {spkCnt, spk, input, Vmem, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup0, &group, sizeof(MergedNeuronUpdateGroup0), idx * sizeof(MergedNeuronUpdateGroup0)));
}
__device__ __constant__ MergedNeuronUpdateGroup1 d_mergedNeuronUpdateGroup1[12];
void pushMergedNeuronUpdateGroup1ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Fx, scalar* Vmem, float* inSynInSyn0, unsigned int numNeurons, scalar alpha, scalar upstreamAlpha, scalar scale, scalar upstreamScale) {
    MergedNeuronUpdateGroup1 group = {spkCnt, spk, Fx, Vmem, inSynInSyn0, numNeurons, alpha, upstreamAlpha, scale, upstreamScale, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup1, &group, sizeof(MergedNeuronUpdateGroup1), idx * sizeof(MergedNeuronUpdateGroup1)));
}
__device__ __constant__ MergedNeuronUpdateGroup2 d_mergedNeuronUpdateGroup2[1];
void pushMergedNeuronUpdateGroup2ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Fx, scalar* Vmem, float* inSynInSyn0, unsigned int numNeurons) {
    MergedNeuronUpdateGroup2 group = {spkCnt, spk, Fx, Vmem, inSynInSyn0, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronUpdateGroup2, &group, sizeof(MergedNeuronUpdateGroup2), idx * sizeof(MergedNeuronUpdateGroup2)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID0[] = {0, };
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID1[] = {3072, 68608, 101376, 134144, 150528, 166912, 175104, 183296, 185344, 187392, 191488, 191552, };
__device__ __constant__ unsigned int d_mergedNeuronUpdateGroupStartID2[] = {195648, };

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
            scalar lVmem = group->Vmem[lid];
            
            // test whether spike condition was fulfilled previously
            // calculate membrane potential
            
            // Convert K to integer
            const int halfK = (int)(1.00000000000000000e+01f) / 2;
            
            // Get timestep within presentation
            const int pipeTimestep = (int)(t / DT);
            
            // If this is the first timestep, apply input
            if(pipeTimestep == 0) {
                lVmem = linput;
            }
            
            // Split timestep into interleaved positive and negative
            const int halfPipetimestep = pipeTimestep / 2;
            const bool positive = (pipeTimestep % 2) == 0;
            const scalar hT = (3.12500000000000000e-02f) * (1 << (halfK - (1 + halfPipetimestep)));
            
            // test for and register a true spike
            if (
            (positive && lVmem >= hT) || (!positive && lVmem < -hT)
            ) {
                const unsigned int spkIdx = atomicAdd(&shSpkCount, 1);
                shSpk[spkIdx] = lid;
                // spike reset code
                
                if(positive) {
                    lVmem -= hT;
                }
                else {
                    lVmem += hT;
                }
                
            }
            group->Vmem[lid] = lVmem;
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
    if(id >= 3072 && id < 195648) {
        unsigned int lo = 0;
        unsigned int hi = 12;
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
            scalar lFx = group->Fx[lid];
            scalar lVmem = group->Vmem[lid];
            
            float Isyn = 0;
             {
                // pull inSyn values in a coalesced access
                float linSyn = group->inSynInSyn0[lid];
                Isyn += linSyn; linSyn = 0;
                
                group->inSynInSyn0[lid] = linSyn;
            }
            // test whether spike condition was fulfilled previously
            // calculate membrane potential
            
            // Convert K to integer
            const int kInt = (int)(1.00000000000000000e+01f);
            
            // Get timestep within presentation
            const int pipeTimestep = (int)(t / DT);
            
            // Calculate magic constants. For RelU hT=h=T
            // **NOTE** d uses last timestep as that was when spike was SENT
            const scalar hT = group->scale * (1 << (kInt - (1 + pipeTimestep)));
            const scalar d = group->upstreamScale * (1 << ((kInt - pipeTimestep) % kInt));
            
            // Accumulate input
            // **NOTE** needs to be before applying input as spikes from LAST timestep must be processed
            lFx += (Isyn * d);
            
            // If this is the first timestep, apply input
            if(pipeTimestep == 0) {
                lVmem = lFx;
                lFx = 0.0f;
            }
            
            // test for and register a true spike
            if (
            lVmem >= hT
            ) {
                const unsigned int spkIdx = atomicAdd(&shSpkCount, 1);
                shSpk[spkIdx] = lid;
                // spike reset code
                
                lVmem -= hT;
                
            }
            group->Fx[lid] = lFx;
            group->Vmem[lid] = lVmem;
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
    if(id >= 195648 && id < 261184) {
        struct MergedNeuronUpdateGroup2 *group = &d_mergedNeuronUpdateGroup2[0]; 
        const unsigned int lid = id - 195648;
        
        if(lid < group->numNeurons) {
            scalar lFx = group->Fx[lid];
            scalar lVmem = group->Vmem[lid];
            
            float Isyn = 0;
             {
                // pull inSyn values in a coalesced access
                float linSyn = group->inSynInSyn0[lid];
                Isyn += linSyn; linSyn = 0;
                
                group->inSynInSyn0[lid] = linSyn;
            }
            // test whether spike condition was fulfilled previously
            // calculate membrane potential
            
            // Convert K to integer
            const int kInt = (int)(1.00000000000000000e+01f);
            
            // Get timestep within presentation
            const int pipeTimestep = (int)(t / DT);
            
            // Calculate magic constants. For RelU hT=h=T
            const scalar hT = (2.92968750000000000e-03f) * (1 << (kInt - (1 + pipeTimestep)));
            
            // Split timestep into interleaved positive and negative
            // **NOTE** sign is flipped compared to input model as we want sign of PREVIOUS timestep
            const scalar dSign = ((pipeTimestep % 2) == 0) ? -1.0f : 1.0f;
            const scalar d = dSign * (3.12500000000000000e-02f) * (1 << (((kInt - pipeTimestep) % kInt) / 2));
            
            // Accumulate input
            // **NOTE** needs to be before applying input as spikes from LAST timestep must be processed
            lFx += (Isyn * d);
            
            // If this is the first timestep, apply input
            if(pipeTimestep == 0) {
                lVmem = lFx;
                lFx = 0.0f;
            }
            
            // test for and register a true spike
            if (
            lVmem >= hT
            ) {
                const unsigned int spkIdx = atomicAdd(&shSpkCount, 1);
                shSpk[spkIdx] = lid;
                // spike reset code
                
                lVmem -= hT;
                
            }
            group->Fx[lid] = lFx;
            group->Vmem[lid] = lVmem;
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
