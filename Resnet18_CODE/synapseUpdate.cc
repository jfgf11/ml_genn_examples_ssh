#include "definitionsInternal.h"
#include "supportCode.h"

struct MergedPresynapticUpdateGroup0
 {
    scalar* kernelg;
    float* inSyn;
    unsigned int* srcSpkCnt;
    unsigned int* srcSpk;
    scalar conv_sw;
    unsigned int kernelSize3;
    unsigned int kernelSize1;
    unsigned int kernelSize0;
    scalar conv_oc;
    scalar conv_ow;
    scalar conv_oh;
    scalar conv_padw;
    scalar conv_padh;
    unsigned int rowStride;
    scalar conv_sh;
    scalar conv_kw;
    scalar conv_kh;
    unsigned int numTrgNeurons;
    unsigned int numSrcNeurons;
    
}
;
struct MergedPresynapticUpdateGroup1
 {
    scalar* kernelg;
    float* inSyn;
    unsigned int* srcSpkCnt;
    unsigned int* srcSpk;
    scalar conv_padw;
    unsigned int kernelSize3;
    unsigned int kernelSize2;
    unsigned int kernelSize1;
    unsigned int kernelSize0;
    scalar conv_oc;
    scalar conv_ow;
    scalar conv_oh;
    scalar conv_ic;
    scalar conv_iw;
    unsigned int rowStride;
    scalar conv_padh;
    scalar conv_sw;
    scalar conv_sh;
    scalar conv_kw;
    scalar conv_kh;
    unsigned int numTrgNeurons;
    unsigned int numSrcNeurons;
    
}
;
struct MergedPresynapticUpdateGroup2
 {
    float* inSyn;
    unsigned int* srcSpkCnt;
    unsigned int* srcSpk;
    scalar* g;
    unsigned int rowStride;
    unsigned int numSrcNeurons;
    unsigned int numTrgNeurons;
    
}
;
__device__ __constant__ MergedPresynapticUpdateGroup0 d_mergedPresynapticUpdateGroup0[4];
void pushMergedPresynapticUpdateGroup0ToDevice(unsigned int idx, scalar* kernelg, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar conv_sw, unsigned int kernelSize3, unsigned int kernelSize1, unsigned int kernelSize0, scalar conv_oc, scalar conv_ow, scalar conv_oh, scalar conv_padw, scalar conv_padh, unsigned int rowStride, scalar conv_sh, scalar conv_kw, scalar conv_kh, unsigned int numTrgNeurons, unsigned int numSrcNeurons) {
    MergedPresynapticUpdateGroup0 group = {kernelg, inSyn, srcSpkCnt, srcSpk, conv_sw, kernelSize3, kernelSize1, kernelSize0, conv_oc, conv_ow, conv_oh, conv_padw, conv_padh, rowStride, conv_sh, conv_kw, conv_kh, numTrgNeurons, numSrcNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup0, &group, sizeof(MergedPresynapticUpdateGroup0), idx * sizeof(MergedPresynapticUpdateGroup0)));
}
__device__ __constant__ MergedPresynapticUpdateGroup1 d_mergedPresynapticUpdateGroup1[32];
void pushMergedPresynapticUpdateGroup1ToDevice(unsigned int idx, scalar* kernelg, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar conv_padw, unsigned int kernelSize3, unsigned int kernelSize2, unsigned int kernelSize1, unsigned int kernelSize0, scalar conv_oc, scalar conv_ow, scalar conv_oh, scalar conv_ic, scalar conv_iw, unsigned int rowStride, scalar conv_padh, scalar conv_sw, scalar conv_sh, scalar conv_kw, scalar conv_kh, unsigned int numTrgNeurons, unsigned int numSrcNeurons) {
    MergedPresynapticUpdateGroup1 group = {kernelg, inSyn, srcSpkCnt, srcSpk, conv_padw, kernelSize3, kernelSize2, kernelSize1, kernelSize0, conv_oc, conv_ow, conv_oh, conv_ic, conv_iw, rowStride, conv_padh, conv_sw, conv_sh, conv_kw, conv_kh, numTrgNeurons, numSrcNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup1, &group, sizeof(MergedPresynapticUpdateGroup1), idx * sizeof(MergedPresynapticUpdateGroup1)));
}
__device__ __constant__ MergedPresynapticUpdateGroup2 d_mergedPresynapticUpdateGroup2[3];
void pushMergedPresynapticUpdateGroup2ToDevice(unsigned int idx, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar* g, unsigned int rowStride, unsigned int numSrcNeurons, unsigned int numTrgNeurons) {
    MergedPresynapticUpdateGroup2 group = {inSyn, srcSpkCnt, srcSpk, g, rowStride, numSrcNeurons, numTrgNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup2, &group, sizeof(MergedPresynapticUpdateGroup2), idx * sizeof(MergedPresynapticUpdateGroup2)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
void pushMergedPresynapticUpdate0kernelgToDevice(unsigned int idx, scalar* value) {
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup0, &value, sizeof(value), (sizeof(MergedPresynapticUpdateGroup0) * (idx)) + offsetof(MergedPresynapticUpdateGroup0, kernelg)));
}

void pushMergedPresynapticUpdate1kernelgToDevice(unsigned int idx, scalar* value) {
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup1, &value, sizeof(value), (sizeof(MergedPresynapticUpdateGroup1) * (idx)) + offsetof(MergedPresynapticUpdateGroup1, kernelg)));
}

__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID0[] = {0, 65536, 131072, 196608, };
__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID1[] = {262144, 264448, 266752, 269056, 271360, 273664, 275968, 278272, 280576, 282880, 285184, 287232, 289280, 291328, 293376, 299776, 306176, 312576, 318976, 325376, 331776, 338176, 341376, 344576, 347776, 350976, 354176, 357376, 360576, 363776, 366976, 370176, };
__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID2[] = {373248, 373312, 373376, };
extern "C" __global__ void updatePresynapticKernel(float t)
 {
    const unsigned int id = 64 * blockIdx.x + threadIdx.x; 
    __shared__ float shLg[64];
    __shared__ unsigned int shSpk[64];
    // merged0
    if(id < 262144) {
        unsigned int lo = 0;
        unsigned int hi = 4;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedPresynapticUpdateGroupStartID0[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedPresynapticUpdateGroup0 *group = &d_mergedPresynapticUpdateGroup0[lo - 1]; 
        const unsigned int groupStartID = d_mergedPresynapticUpdateGroupStartID0[lo - 1];
        const unsigned int lid = id - groupStartID;
         {
            const unsigned int spike = lid;
            if (spike < group->srcSpkCnt[0]) {
                const unsigned int preInd = group->srcSpk[spike];
                while(true) {
                    
                    // Stash all parameters in registers
                    // **NOTE** this means parameters from group structure only get converted from float->int once
                    // **NOTE** if they're actually constant, compiler is still likely to treat them as constants rather than allocating registers
                    const int pool_kh = (3.00000000000000000e+00f), pool_kw = (3.00000000000000000e+00f);
                    const int pool_sh = (3.00000000000000000e+00f), pool_sw = (3.00000000000000000e+00f);
                    const int pool_padh = (0.00000000000000000e+00f), pool_padw = (0.00000000000000000e+00f);
                    const int pool_ih = (3.20000000000000000e+01f), pool_iw = (3.20000000000000000e+01f), pool_ic = (6.40000000000000000e+01f);
                    const int conv_kh = group->conv_kh, conv_kw = group->conv_kw;
                    const int conv_sh = group->conv_sh, conv_sw = group->conv_sw;
                    const int conv_padh = group->conv_padh, conv_padw = group->conv_padw;
                    const int conv_ow = group->conv_ow, conv_oh = group->conv_oh, conv_oc = group->conv_oc;
                    
                    // Convert presynaptic neuron ID to row, column and channel in pool input
                    const int poolInRow = (preInd / pool_ic) / pool_iw;
                    const int poolInCol = (preInd / pool_ic) % pool_iw;
                    const int poolInChan = preInd % pool_ic;
                    
                    // Calculate corresponding pool output
                    const int poolOutRow = (poolInRow + pool_padh) / pool_sh;
                    const int poolStrideRow = poolOutRow * pool_sh - pool_padh;
                    const int poolCropKH = min(poolStrideRow + pool_kh, pool_ih) - max(poolStrideRow, 0);
                    const int poolOutCol = (poolInCol + pool_padw) / pool_sw;
                    const int poolStrideCol = poolOutCol * pool_sw - pool_padw;
                    const int poolCropKW = min(poolStrideCol + pool_kw, pool_iw) - max(poolStrideCol, 0);
                    
                    if ((poolInRow < (poolStrideRow + pool_kh)) && (poolInCol < (poolStrideCol + pool_kw))) {
                    
                        // Calculate range of output rows and columns which this pool output connects to
                        const int minOutRow = min(conv_oh, max(0, 1 + ((poolOutRow + conv_padh - conv_kh) / conv_sh)));
                        const int maxOutRow = min(conv_oh, max(0, 1 + ((poolOutRow + conv_padh) / conv_sh)));
                        const int minOutCol = min(conv_ow, max(0, 1 + ((poolOutCol + conv_padw - conv_kw) / conv_sw)));
                        const int maxOutCol = min(conv_ow, max(0, 1 + ((poolOutCol + conv_padw) / conv_sw)));
                    
                        // Loop through output rows, columns and channels
                        for(int convOutRow = minOutRow; convOutRow < maxOutRow; convOutRow++) {
                            const int strideRow = (convOutRow * conv_sh) - conv_padh;
                            const int kernRow = poolOutRow - strideRow;
                            for(int convOutCol = minOutCol; convOutCol < maxOutCol; convOutCol++) {
                                const int strideCol = (convOutCol * conv_sw) - conv_padw;
                                const int kernCol = poolOutCol - strideCol;
                                for(int outChan = 0; outChan < conv_oc; outChan++) {
                                    // Calculate postsynaptic index and add synapse
                                    const int idPost = ((convOutRow * conv_ow * conv_oc) +
                                                        (convOutCol * conv_oc) +
                                                        outChan);
                                    const unsigned int kernelInd = (kernRow * group->kernelSize1 * 64 * group->kernelSize3) + (kernCol * 64 * group->kernelSize3) + (poolInChan * group->kernelSize3) + (outChan);
                    scalar lg;
                     {
                        lg = group->kernelg[kernelInd];
                    }
                    atomicAdd(&group->inSyn[idPost], lg);
                    ;
                                }
                            }
                        }
                    }
                    
                    // End the row
                    break;
                    
                }
            }
        }
        
    }
    // merged1
    if(id >= 262144 && id < 373248) {
        unsigned int lo = 0;
        unsigned int hi = 32;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedPresynapticUpdateGroupStartID1[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedPresynapticUpdateGroup1 *group = &d_mergedPresynapticUpdateGroup1[lo - 1]; 
        const unsigned int groupStartID = d_mergedPresynapticUpdateGroupStartID1[lo - 1];
        const unsigned int lid = id - groupStartID;
         {
            const unsigned int spike = lid;
            if (spike < group->srcSpkCnt[0]) {
                const unsigned int preInd = group->srcSpk[spike];
                while(true) {
                    
                    // Stash all parameters in registers
                    // **NOTE** this means parameters from group structure only get converted from float->int once
                    // **NOTE** if they're actually constant, compiler is still likely to treat them as constants rather than allocating registers
                    const int conv_kh = group->conv_kh, conv_kw = group->conv_kw;
                    const int conv_sh = group->conv_sh, conv_sw = group->conv_sw;
                    const int conv_padh = group->conv_padh, conv_padw = group->conv_padw;
                    const int conv_iw = group->conv_iw, conv_ic = group->conv_ic;
                    const int conv_ow = group->conv_ow, conv_oh = group->conv_oh, conv_oc = group->conv_oc;
                    
                    // Convert presynaptic neuron ID to row, column and channel in conv input
                    const int inRow = (preInd / conv_ic) / conv_iw;
                    const int inCol = (preInd / conv_ic) % conv_iw;
                    const int inChan = preInd % conv_ic;
                    
                    // Calculate range of output rows and columns which this presynaptic neuron connects to
                    const int minOutRow = min(conv_oh, max(0, 1 + ((inRow + conv_padh - conv_kh) / conv_sh)));
                    const int maxOutRow = min(conv_oh, max(0, 1 + ((inRow + conv_padh) / conv_sh)));
                    const int minOutCol = min(conv_ow, max(0, 1 + ((inCol + conv_padw - conv_kw) / conv_sw)));
                    const int maxOutCol = min(conv_ow, max(0, 1 + ((inCol + conv_padw) / conv_sw)));
                    
                    // Loop through output rows, columns and channels
                    for(int outRow = minOutRow; outRow != maxOutRow; outRow++) {
                        const int strideRow = (outRow * conv_sh) - conv_padh;
                        const int kernRow = inRow - strideRow;
                        for(int outCol = minOutCol; outCol < maxOutCol; outCol++) {
                            const int strideCol = (outCol * conv_sw) - conv_padw;
                            const int kernCol = inCol - strideCol;
                            for(int outChan = 0; outChan < conv_oc; outChan++) {
                                // Calculate postsynaptic index and add synapse
                                const int idPost = ((outRow * conv_ow * conv_oc) +
                                                    (outCol * conv_oc) +
                                                    outChan);
                                const unsigned int kernelInd = (kernRow * group->kernelSize1 * group->kernelSize2 * group->kernelSize3) + (kernCol * group->kernelSize2 * group->kernelSize3) + (inChan * group->kernelSize3) + (outChan);
                    scalar lg;
                     {
                        lg = group->kernelg[kernelInd];
                    }
                    atomicAdd(&group->inSyn[idPost], lg);
                    ;
                            }
                        }
                    }
                    
                    // End the row
                    break;
                    
                }
            }
        }
        
    }
    // merged2
    if(id >= 373248 && id < 373440) {
        unsigned int lo = 0;
        unsigned int hi = 3;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedPresynapticUpdateGroupStartID2[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedPresynapticUpdateGroup2 *group = &d_mergedPresynapticUpdateGroup2[lo - 1]; 
        const unsigned int groupStartID = d_mergedPresynapticUpdateGroupStartID2[lo - 1];
        const unsigned int lid = id - groupStartID;
        float linSyn = 0;
         {
            const unsigned int numSpikes = group->srcSpkCnt[0];
            const unsigned int numSpikeBlocks = (numSpikes + 64 - 1) / 64;
            for (unsigned int r = 0; r < numSpikeBlocks; r++) {
                const unsigned int numSpikesInBlock = (r == numSpikeBlocks - 1) ? ((numSpikes - 1) % 64) + 1 : 64;
                __syncthreads();
                if (threadIdx.x < numSpikesInBlock) {
                    const unsigned int spk = group->srcSpk[(r * 64) + threadIdx.x];
                    shSpk[threadIdx.x] = spk;
                }
                __syncthreads();
                // loop through all incoming spikes
                for (unsigned int j = 0; j < numSpikesInBlock; j++) {
                    // only work on existing neurons
                    if (lid < group->rowStride) {
                        const unsigned int synAddress = (shSpk[j] * group->rowStride) + lid;
                        linSyn += group->g[synAddress];
                    }
                }
            }
        }
        
        // only do this for existing neurons
        if (lid < group->numTrgNeurons) {
            group->inSyn[lid] += linSyn;
        }
    }
}
void updateSynapses(float t) {
     {
        CHECK_CUDA_ERRORS(cudaEventRecord(presynapticUpdateStart));
        const dim3 threads(64, 1);
        const dim3 grid(5835, 1);
        updatePresynapticKernel<<<grid, threads>>>(t);
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
        CHECK_CUDA_ERRORS(cudaEventRecord(presynapticUpdateStop));
    }
}
