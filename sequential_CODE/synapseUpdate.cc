#include "definitionsInternal.h"
#include "supportCode.h"

struct MergedPresynapticUpdateGroup0
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
struct MergedPresynapticUpdateGroup1
 {
    float* inSyn;
    unsigned int* srcSpkCnt;
    unsigned int* srcSpk;
    scalar* kernelg;
    unsigned int rowStride;
    unsigned int numSrcNeurons;
    unsigned int numTrgNeurons;
    scalar pool_ih;
    scalar pool_iw;
    scalar pool_ic;
    scalar conv_oh;
    scalar conv_ow;
    scalar conv_oc;
    unsigned int kernelSize2;
    unsigned int kernelSize3;
    
}
;
struct MergedPresynapticUpdateGroup2
 {
    float* inSyn;
    unsigned int* srcSpkCnt;
    unsigned int* srcSpk;
    scalar* weightsg;
    unsigned int rowStride;
    unsigned int numSrcNeurons;
    unsigned int numTrgNeurons;
    
}
;
struct MergedPresynapticUpdateGroup3
 {
    float* inSyn;
    unsigned int* srcSpkCnt;
    unsigned int* srcSpk;
    scalar* kernelg;
    unsigned int rowStride;
    unsigned int numSrcNeurons;
    unsigned int numTrgNeurons;
    scalar conv_iw;
    scalar conv_ic;
    scalar conv_oh;
    scalar conv_ow;
    scalar conv_oc;
    unsigned int kernelSize2;
    unsigned int kernelSize3;
    
}
;
__device__ __constant__ MergedPresynapticUpdateGroup0 d_mergedPresynapticUpdateGroup0[2];
void pushMergedPresynapticUpdateGroup0ToDevice(unsigned int idx, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar* g, unsigned int rowStride, unsigned int numSrcNeurons, unsigned int numTrgNeurons) {
    MergedPresynapticUpdateGroup0 group = {inSyn, srcSpkCnt, srcSpk, g, rowStride, numSrcNeurons, numTrgNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup0, &group, sizeof(MergedPresynapticUpdateGroup0), idx * sizeof(MergedPresynapticUpdateGroup0)));
}
__device__ __constant__ MergedPresynapticUpdateGroup1 d_mergedPresynapticUpdateGroup1[4];
void pushMergedPresynapticUpdateGroup1ToDevice(unsigned int idx, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar* kernelg, unsigned int rowStride, unsigned int numSrcNeurons, unsigned int numTrgNeurons, scalar pool_ih, scalar pool_iw, scalar pool_ic, scalar conv_oh, scalar conv_ow, scalar conv_oc, unsigned int kernelSize2, unsigned int kernelSize3) {
    MergedPresynapticUpdateGroup1 group = {inSyn, srcSpkCnt, srcSpk, kernelg, rowStride, numSrcNeurons, numTrgNeurons, pool_ih, pool_iw, pool_ic, conv_oh, conv_ow, conv_oc, kernelSize2, kernelSize3, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup1, &group, sizeof(MergedPresynapticUpdateGroup1), idx * sizeof(MergedPresynapticUpdateGroup1)));
}
__device__ __constant__ MergedPresynapticUpdateGroup2 d_mergedPresynapticUpdateGroup2[1];
void pushMergedPresynapticUpdateGroup2ToDevice(unsigned int idx, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar* weightsg, unsigned int rowStride, unsigned int numSrcNeurons, unsigned int numTrgNeurons) {
    MergedPresynapticUpdateGroup2 group = {inSyn, srcSpkCnt, srcSpk, weightsg, rowStride, numSrcNeurons, numTrgNeurons, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup2, &group, sizeof(MergedPresynapticUpdateGroup2), idx * sizeof(MergedPresynapticUpdateGroup2)));
}
__device__ __constant__ MergedPresynapticUpdateGroup3 d_mergedPresynapticUpdateGroup3[6];
void pushMergedPresynapticUpdateGroup3ToDevice(unsigned int idx, float* inSyn, unsigned int* srcSpkCnt, unsigned int* srcSpk, scalar* kernelg, unsigned int rowStride, unsigned int numSrcNeurons, unsigned int numTrgNeurons, scalar conv_iw, scalar conv_ic, scalar conv_oh, scalar conv_ow, scalar conv_oc, unsigned int kernelSize2, unsigned int kernelSize3) {
    MergedPresynapticUpdateGroup3 group = {inSyn, srcSpkCnt, srcSpk, kernelg, rowStride, numSrcNeurons, numTrgNeurons, conv_iw, conv_ic, conv_oh, conv_ow, conv_oc, kernelSize2, kernelSize3, };
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup3, &group, sizeof(MergedPresynapticUpdateGroup3), idx * sizeof(MergedPresynapticUpdateGroup3)));
}
// ------------------------------------------------------------------------
// merged extra global parameter functions
// ------------------------------------------------------------------------
void pushMergedPresynapticUpdate1kernelgToDevice(unsigned int idx, scalar* value) {
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup1, &value, sizeof(value), (sizeof(MergedPresynapticUpdateGroup1) * (idx)) + offsetof(MergedPresynapticUpdateGroup1, kernelg)));
}

void pushMergedPresynapticUpdate2weightsgToDevice(unsigned int idx, scalar* value) {
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup2, &value, sizeof(value), (sizeof(MergedPresynapticUpdateGroup2) * (idx)) + offsetof(MergedPresynapticUpdateGroup2, weightsg)));
}

void pushMergedPresynapticUpdate3kernelgToDevice(unsigned int idx, scalar* value) {
    CHECK_CUDA_ERRORS(cudaMemcpyToSymbolAsync(d_mergedPresynapticUpdateGroup3, &value, sizeof(value), (sizeof(MergedPresynapticUpdateGroup3) * (idx)) + offsetof(MergedPresynapticUpdateGroup3, kernelg)));
}

__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID0[] = {0, 64, };
__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID1[] = {4160, 69696, 102464, 118848, };
__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID2[] = {127040, };
__device__ __constant__ unsigned int d_mergedPresynapticUpdateGroupStartID3[] = {131136, 163904, 180288, 188480, 190528, 193600, };
extern "C" __global__ void updatePresynapticKernel(float t)
 {
    const unsigned int id = 64 * blockIdx.x + threadIdx.x; 
    __shared__ unsigned int shSpk[64];
    // merged0
    if(id < 4160) {
        unsigned int lo = 0;
        unsigned int hi = 2;
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
    // merged1
    if(id >= 4160 && id < 127040) {
        unsigned int lo = 0;
        unsigned int hi = 4;
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
                    const int pool_kh = (2.00000000000000000e+00f), pool_kw = (2.00000000000000000e+00f);
                    const int pool_sh = (2.00000000000000000e+00f), pool_sw = (2.00000000000000000e+00f);
                    const int pool_padh = (0.00000000000000000e+00f), pool_padw = (0.00000000000000000e+00f);
                    const int pool_ih = group->pool_ih, pool_iw = group->pool_iw, pool_ic = group->pool_ic;
                    const int conv_kh = (3.00000000000000000e+00f), conv_kw = (3.00000000000000000e+00f);
                    const int conv_sh = (1.00000000000000000e+00f), conv_sw = (1.00000000000000000e+00f);
                    const int conv_padh = (1.00000000000000000e+00f), conv_padw = (1.00000000000000000e+00f);
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
                                    const unsigned int kernelInd = (kernRow * 3 * group->kernelSize2 * group->kernelSize3) + (kernCol * group->kernelSize2 * group->kernelSize3) + (poolInChan * group->kernelSize3) + (outChan);
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
    // merged2
    if(id >= 127040 && id < 131136) {
        struct MergedPresynapticUpdateGroup2 *group = &d_mergedPresynapticUpdateGroup2[0]; 
        const unsigned int lid = id - 127040;
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
                        scalar lg;
                         {
                            
                            const int pool_kh = (2.00000000000000000e+00), pool_kw = (2.00000000000000000e+00);
                            const int pool_sh = (2.00000000000000000e+00), pool_sw = (2.00000000000000000e+00);
                            const int pool_padh = (0.00000000000000000e+00), pool_padw = (0.00000000000000000e+00);
                            const int pool_ih = (2.00000000000000000e+00), pool_iw = (2.00000000000000000e+00), pool_ic = (5.12000000000000000e+02);
                            
                            // Convert presynaptic neuron ID to row, column and channel in pool input
                            const int poolInRow = (shSpk[j] / pool_ic) / pool_iw;
                            const int poolInCol = (shSpk[j] / pool_ic) % pool_iw;
                            const int poolInChan = shSpk[j] % pool_ic;
                            
                            // Calculate corresponding pool output
                            const int poolOutRow = (poolInRow + pool_padh) / pool_sh;
                            const int poolStrideRow = poolOutRow * pool_sh - pool_padh;
                            const int poolCropKH = min(poolStrideRow + pool_kh, pool_ih) - max(poolStrideRow, 0);
                            const int poolOutCol = (poolInCol + pool_padw) / pool_sw;
                            const int poolStrideCol = poolOutCol * pool_sw - pool_padw;
                            const int poolCropKW = min(poolStrideCol + pool_kw, pool_iw) - max(poolStrideCol, 0);
                            
                            lg = 0.0;
                            if ((poolInRow < (poolStrideRow + pool_kh)) && (poolInCol < (poolStrideCol + pool_kw))) {
                            
                                const int dense_iw = (1.00000000000000000e+00), dense_ic = (5.12000000000000000e+02);
                                const int dense_units = (4.09600000000000000e+03);
                            
                                const int dense_in_unit = poolOutRow * (dense_iw * dense_ic) + poolOutCol * (dense_ic) + poolInChan;
                                const int dense_out_unit = lid;
                            
                                lg = group->weightsg[
                                    dense_in_unit * (dense_units) +
                                    dense_out_unit
                                ] / (poolCropKH * poolCropKW);
                            }
                            
                        }
                        linSyn += lg;
                    }
                }
            }
        }
        
        // only do this for existing neurons
        if (lid < group->numTrgNeurons) {
            group->inSyn[lid] += linSyn;
        }
    }
    // merged3
    if(id >= 131136 && id < 259136) {
        unsigned int lo = 0;
        unsigned int hi = 6;
        while(lo < hi)
         {
            const unsigned int mid = (lo + hi) / 2;
            if(id < d_mergedPresynapticUpdateGroupStartID3[mid]) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        struct MergedPresynapticUpdateGroup3 *group = &d_mergedPresynapticUpdateGroup3[lo - 1]; 
        const unsigned int groupStartID = d_mergedPresynapticUpdateGroupStartID3[lo - 1];
        const unsigned int lid = id - groupStartID;
         {
            const unsigned int spike = lid;
            if (spike < group->srcSpkCnt[0]) {
                const unsigned int preInd = group->srcSpk[spike];
                while(true) {
                    
                    // Stash all parameters in registers
                    // **NOTE** this means parameters from group structure only get converted from float->int once
                    // **NOTE** if they're actually constant, compiler is still likely to treat them as constants rather than allocating registers
                    const int conv_kh = (3.00000000000000000e+00f), conv_kw = (3.00000000000000000e+00f);
                    const int conv_sh = (1.00000000000000000e+00f), conv_sw = (1.00000000000000000e+00f);
                    const int conv_padh = (1.00000000000000000e+00f), conv_padw = (1.00000000000000000e+00f);
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
                                const unsigned int kernelInd = (kernRow * 3 * group->kernelSize2 * group->kernelSize3) + (kernCol * group->kernelSize2 * group->kernelSize3) + (inChan * group->kernelSize3) + (outChan);
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
}
void updateSynapses(float t) {
     {
        CHECK_CUDA_ERRORS(cudaEventRecord(presynapticUpdateStart));
        const dim3 threads(64, 1);
        const dim3 grid(4049, 1);
        updatePresynapticKernel<<<grid, threads>>>(t);
        CHECK_CUDA_ERRORS(cudaPeekAtLastError());
        CHECK_CUDA_ERRORS(cudaEventRecord(presynapticUpdateStop));
    }
}
