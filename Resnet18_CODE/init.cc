#include "definitionsInternal.h"
#include <iostream>
#include <random>
#include <cstdint>

struct MergedNeuronInitGroup0
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    curandState* rng;
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
    float* inSynInSyn1;
    unsigned int numNeurons;
    
}
;
struct MergedNeuronInitGroup2
 {
    unsigned int* spkCnt;
    unsigned int* spk;
    scalar* Vmem;
    unsigned int* nSpk;
    float* inSynInSyn0;
    float* inSynInSyn1;
    float* inSynInSyn2;
    unsigned int numNeurons;
    
}
;
struct MergedNeuronInitGroup3
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
void pushMergedNeuronInitGroup0ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, curandState* rng, scalar* input, unsigned int numNeurons) {
    MergedNeuronInitGroup0 group = {spkCnt, spk, rng, input, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronInitGroup0, &group, sizeof(MergedNeuronInitGroup0), idx * sizeof(MergedNeuronInitGroup0)));
}
__device__ __constant__ MergedNeuronInitGroup1 d_mergedNeuronInitGroup1[4];
void pushMergedNeuronInitGroup1ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, float* inSynInSyn1, unsigned int numNeurons) {
    MergedNeuronInitGroup1 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, inSynInSyn1, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronInitGroup1, &group, sizeof(MergedNeuronInitGroup1), idx * sizeof(MergedNeuronInitGroup1)));
}
__device__ __constant__ MergedNeuronInitGroup2 d_mergedNeuronInitGroup2[7];
void pushMergedNeuronInitGroup2ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, float* inSynInSyn1, float* inSynInSyn2, unsigned int numNeurons) {
    MergedNeuronInitGroup2 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, inSynInSyn1, inSynInSyn2, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronInitGroup2, &group, sizeof(MergedNeuronInitGroup2), idx * sizeof(MergedNeuronInitGroup2)));
}
__device__ __constant__ MergedNeuronInitGroup3 d_mergedNeuronInitGroup3[10];
void pushMergedNeuronInitGroup3ToDevice(unsigned int idx, unsigned int* spkCnt, unsigned int* spk, scalar* Vmem, unsigned int* nSpk, float* inSynInSyn0, unsigned int numNeurons) {
    MergedNeuronInitGroup3 group = {spkCnt, spk, Vmem, nSpk, inSynInSyn0, numNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedNeuronInitGroup3, &group, sizeof(MergedNeuronInitGroup3), idx * sizeof(MergedNeuronInitGroup3)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
__device__ unsigned int d_mergedNeuronInitGroupStartID0[] = {0, };
__device__ unsigned int d_mergedNeuronInitGroupStartID1[] = {3072, 5376, 7424, 13824, };
__device__ unsigned int d_mergedNeuronInitGroupStartID2[] = {17024, 19328, 21632, 23680, 25728, 28928, 32128, };
__device__ unsigned int d_mergedNeuronInitGroupStartID3[] = {32192, 34496, 36800, 38848, 40896, 47296, 53696, 60096, 63296, 66496, };

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
            curand_init(deviceRNGSeed, id, 0, &group->rng[lid]);
            if(lid == 0) {
                group->spkCnt[0] = 0;
            }
            group->spk[lid] = 0;
             {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                group->input[lid] = initVal;
            }
            // current source variables
        }
    }
    // merged1
    if(id >= 3072 && id < 17024) {
        unsigned int lo = 0;
        unsigned int hi = 4;
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
             {
                group->inSynInSyn1[lid] = 0.000000f;
            }
            // current source variables
        }
    }
    // merged2
    if(id >= 17024 && id < 32192) {
        unsigned int lo = 0;
        unsigned int hi = 7;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedNeuronInitGroupStartID2[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedNeuronInitGroup2 *group = &d_mergedNeuronInitGroup2[lo - 1]; 
        const unsigned int groupStartID = d_mergedNeuronInitGroupStartID2[lo - 1];
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
             {
                group->inSynInSyn1[lid] = 0.000000f;
            }
             {
                group->inSynInSyn2[lid] = 0.000000f;
            }
            // current source variables
        }
    }
    // merged3
    if(id >= 32192 && id < 132032) {
        unsigned int lo = 0;
        unsigned int hi = 10;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedNeuronInitGroupStartID3[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedNeuronInitGroup3 *group = &d_mergedNeuronInitGroup3[lo - 1]; 
        const unsigned int groupStartID = d_mergedNeuronInitGroupStartID3[lo - 1];
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
        std::random_device seedSource;
        uint32_t *deviceRNGSeedWord = reinterpret_cast<uint32_t*>(&deviceRNGSeed);
        for(int i = 0; i < 2; i++) {
            deviceRNGSeedWord[i] = seedSource();
        }
    }
     {
        CHECK_CUDA_ERRORS(cudaEventRecord(initStart));
        const dim3 threads(64, 1);
        const dim3 grid(2063, 1);
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