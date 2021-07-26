#include "definitionsInternal.h"
#include <iostream>
#include <random>
#include <cstdint>

struct MergedNeuronInitGroup0
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    unsigned int* spkCntEvnt;
    unsigned int* spkEvnt;
    scalar* input;
    unsigned int numNeurons;
    
}
;
struct MergedNeuronInitGroup1
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Vmem;
    unsigned int* nSpk;
    float* inSynInSyn0;
    unsigned int numNeurons;
    
}
;
__device__ __constant__ MergedNeuronInitGroup0 d_mergedNeuronInitGroup0[1];
void pushMergedNeuronInitGroup0ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, unsigned int* spkCntEvnt, unsigned int* spkEvnt, scalar* input, unsigned int numNeurons) {
    MergedNeuronInitGroup0 group = {spkCnt, spk, spkCntEvnt, spkEvnt, input, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronInitGroup0, &group, sizeof(MergedNeuronInitGroup0), idx * sizeof(MergedNeuronInitGroup0)));
}
__device__ __constant__ MergedNeuronInitGroup1 d_mergedNeuronInitGroup1[13];
void pushMergedNeuronInitGroup1ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, unsigned int numNeurons) {
    MergedNeuronInitGroup1 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronInitGroup1, &group, sizeof(MergedNeuronInitGroup1), idx * sizeof(MergedNeuronInitGroup1)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
__device__ unsigned int d_mergedNeuronInitGroupStartID0[] = {0, };
__device__ unsigned int d_mergedNeuronInitGroupStartID1[] = {3072, 68608, 101376, 134144, 150528, 166912, 175104, 183296, 185344, 187392, 252928, 257024, 257088, };

extern "C" __global__ void initializeKernel(unsigned long long deviceRNGSeed) {
    const unsigned int id = 64 * blockIdx.x + threadIdx.x;
    // ------------------------------------------------------------------------
    // Local neuron groups
    // merged0
    if(id < 3072) {
        struct MergedNeuronInitGroup0 *group = &d_mergedNeuronInitGroup0[0]; 
        const unsigned int lid = id - 0;
        // only do this for existing neurons
        if(lid < group->numNeurons) {
            if(lid == 0) {
                group->spkCnt[0] = 0;
            }
            if(lid == 0) {
                group->spkCntEvnt[0] = 0;
            }
            group->spk[lid] = 0;
            group->spkEvnt[lid] = 0;
             {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                group->input[lid] = initVal;
            }
            // current source variables
        }
    }
    // merged1
    if(id >= 3072 && id < 261184) {
        unsigned int lo = 0;
        unsigned int hi = 13;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedNeuronInitGroupStartID1[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedNeuronInitGroup1 *group = &d_mergedNeuronInitGroup1[lo - 1]; 
        const unsigned int groupStartID = d_mergedNeuronInitGroupStartID1[lo - 1];
        const unsigned int lid = id - groupStartID;
        // only do this for existing neurons
        if(lid < group->numNeurons) {
            if(lid == 0) {
                group->spkCnt[0] = 0;
            }
            group->spk[lid] = 0;
             {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                group->Vmem[lid] = initVal;
            }
             {
                unsigned int initVal;
                initVal = (0.00000000000000000e+00f);
                group->nSpk[lid] = initVal;
            }
             {
                group->inSynInSyn0[lid] = 0.000000f;
            }
            // current source variables
        }
    }
    
    // ------------------------------------------------------------------------
    // Custom update groups
    
    // ------------------------------------------------------------------------
    // Custom WU update groups with dense connectivity
    
    // ------------------------------------------------------------------------
    // Synapse groups with dense connectivity
    
    // ------------------------------------------------------------------------
    // Synapse groups with sparse connectivity
    
}
void initialize() {
    unsigned long long deviceRNGSeed = 0;
     {
        CHECK_CUDA_ERRORS(cudaEventRecord(initStart));
        const dim3 threads(64, 1);
        const dim3 grid(4081, 1);
        initializeKernel<<<grid, threads>>>(deviceRNGSeed);
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
        CHECK_CUDA_ERRORS(cudaEventRecord(initStop));
        CHECK_CUDA_ERRORS(cudaEventSynchronize(initStop));
        float tmp;
        CHECK_CUDA_ERRORS(cudaEventElapsedTime(&tmp, initStart, initStop));
        initTime += tmp / 1000.0;
    }
}

void initializeSparse() {
    copyStateToDevice(true);
    copyConnectivityToDevice(true);
    
}
