#include "definitionsInternal.h"

extern "C" {
// ------------------------------------------------------------------------
// global variables
// ------------------------------------------------------------------------
unsigned long long iT;
float t;

// ------------------------------------------------------------------------
// timers
// ------------------------------------------------------------------------
double initTime = 0.0;
double initSparseTime = 0.0;
double neuronUpdateTime = 0.0;
double presynapticUpdateTime = 0.0;
double postsynapticUpdateTime = 0.0;
double synapseDynamicsTime = 0.0;
cudaEvent_t neuronUpdateStart;
cudaEvent_t neuronUpdateStop;
cudaEvent_t presynapticUpdateStart;
cudaEvent_t presynapticUpdateStop;
cudaEvent_t initStart;
cudaEvent_t initStop;

// ------------------------------------------------------------------------
// merged group arrays
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------
// local neuron groups
// ------------------------------------------------------------------------
unsigned int* glbSpkCntconv2d_10_nrn;
unsigned int* d_glbSpkCntconv2d_10_nrn;
unsigned int* glbSpkconv2d_10_nrn;
unsigned int* d_glbSpkconv2d_10_nrn;
scalar* Vmemconv2d_10_nrn;
scalar* d_Vmemconv2d_10_nrn;
unsigned int* nSpkconv2d_10_nrn;
unsigned int* d_nSpkconv2d_10_nrn;
scalar Vthrconv2d_10_nrn;
unsigned int* glbSpkCntconv2d_11_nrn;
unsigned int* d_glbSpkCntconv2d_11_nrn;
unsigned int* glbSpkconv2d_11_nrn;
unsigned int* d_glbSpkconv2d_11_nrn;
scalar* Vmemconv2d_11_nrn;
scalar* d_Vmemconv2d_11_nrn;
unsigned int* nSpkconv2d_11_nrn;
unsigned int* d_nSpkconv2d_11_nrn;
scalar Vthrconv2d_11_nrn;
unsigned int* glbSpkCntconv2d_12_nrn;
unsigned int* d_glbSpkCntconv2d_12_nrn;
unsigned int* glbSpkconv2d_12_nrn;
unsigned int* d_glbSpkconv2d_12_nrn;
scalar* Vmemconv2d_12_nrn;
scalar* d_Vmemconv2d_12_nrn;
unsigned int* nSpkconv2d_12_nrn;
unsigned int* d_nSpkconv2d_12_nrn;
scalar Vthrconv2d_12_nrn;
unsigned int* glbSpkCntconv2d_13_nrn;
unsigned int* d_glbSpkCntconv2d_13_nrn;
unsigned int* glbSpkconv2d_13_nrn;
unsigned int* d_glbSpkconv2d_13_nrn;
scalar* Vmemconv2d_13_nrn;
scalar* d_Vmemconv2d_13_nrn;
unsigned int* nSpkconv2d_13_nrn;
unsigned int* d_nSpkconv2d_13_nrn;
scalar Vthrconv2d_13_nrn;
unsigned int* glbSpkCntconv2d_14_nrn;
unsigned int* d_glbSpkCntconv2d_14_nrn;
unsigned int* glbSpkconv2d_14_nrn;
unsigned int* d_glbSpkconv2d_14_nrn;
scalar* Vmemconv2d_14_nrn;
scalar* d_Vmemconv2d_14_nrn;
unsigned int* nSpkconv2d_14_nrn;
unsigned int* d_nSpkconv2d_14_nrn;
scalar Vthrconv2d_14_nrn;
unsigned int* glbSpkCntconv2d_15_nrn;
unsigned int* d_glbSpkCntconv2d_15_nrn;
unsigned int* glbSpkconv2d_15_nrn;
unsigned int* d_glbSpkconv2d_15_nrn;
scalar* Vmemconv2d_15_nrn;
scalar* d_Vmemconv2d_15_nrn;
unsigned int* nSpkconv2d_15_nrn;
unsigned int* d_nSpkconv2d_15_nrn;
scalar Vthrconv2d_15_nrn;
unsigned int* glbSpkCntconv2d_16_nrn;
unsigned int* d_glbSpkCntconv2d_16_nrn;
unsigned int* glbSpkconv2d_16_nrn;
unsigned int* d_glbSpkconv2d_16_nrn;
scalar* Vmemconv2d_16_nrn;
scalar* d_Vmemconv2d_16_nrn;
unsigned int* nSpkconv2d_16_nrn;
unsigned int* d_nSpkconv2d_16_nrn;
scalar Vthrconv2d_16_nrn;
unsigned int* glbSpkCntconv2d_17_nrn;
unsigned int* d_glbSpkCntconv2d_17_nrn;
unsigned int* glbSpkconv2d_17_nrn;
unsigned int* d_glbSpkconv2d_17_nrn;
scalar* Vmemconv2d_17_nrn;
scalar* d_Vmemconv2d_17_nrn;
unsigned int* nSpkconv2d_17_nrn;
unsigned int* d_nSpkconv2d_17_nrn;
scalar Vthrconv2d_17_nrn;
unsigned int* glbSpkCntconv2d_18_nrn;
unsigned int* d_glbSpkCntconv2d_18_nrn;
unsigned int* glbSpkconv2d_18_nrn;
unsigned int* d_glbSpkconv2d_18_nrn;
scalar* Vmemconv2d_18_nrn;
scalar* d_Vmemconv2d_18_nrn;
unsigned int* nSpkconv2d_18_nrn;
unsigned int* d_nSpkconv2d_18_nrn;
scalar Vthrconv2d_18_nrn;
unsigned int* glbSpkCntconv2d_19_nrn;
unsigned int* d_glbSpkCntconv2d_19_nrn;
unsigned int* glbSpkconv2d_19_nrn;
unsigned int* d_glbSpkconv2d_19_nrn;
scalar* Vmemconv2d_19_nrn;
scalar* d_Vmemconv2d_19_nrn;
unsigned int* nSpkconv2d_19_nrn;
unsigned int* d_nSpkconv2d_19_nrn;
scalar Vthrconv2d_19_nrn;
unsigned int* glbSpkCntconv2d_1_nrn;
unsigned int* d_glbSpkCntconv2d_1_nrn;
unsigned int* glbSpkconv2d_1_nrn;
unsigned int* d_glbSpkconv2d_1_nrn;
scalar* Vmemconv2d_1_nrn;
scalar* d_Vmemconv2d_1_nrn;
unsigned int* nSpkconv2d_1_nrn;
unsigned int* d_nSpkconv2d_1_nrn;
scalar Vthrconv2d_1_nrn;
unsigned int* glbSpkCntconv2d_2_nrn;
unsigned int* d_glbSpkCntconv2d_2_nrn;
unsigned int* glbSpkconv2d_2_nrn;
unsigned int* d_glbSpkconv2d_2_nrn;
scalar* Vmemconv2d_2_nrn;
scalar* d_Vmemconv2d_2_nrn;
unsigned int* nSpkconv2d_2_nrn;
unsigned int* d_nSpkconv2d_2_nrn;
scalar Vthrconv2d_2_nrn;
unsigned int* glbSpkCntconv2d_3_nrn;
unsigned int* d_glbSpkCntconv2d_3_nrn;
unsigned int* glbSpkconv2d_3_nrn;
unsigned int* d_glbSpkconv2d_3_nrn;
scalar* Vmemconv2d_3_nrn;
scalar* d_Vmemconv2d_3_nrn;
unsigned int* nSpkconv2d_3_nrn;
unsigned int* d_nSpkconv2d_3_nrn;
scalar Vthrconv2d_3_nrn;
unsigned int* glbSpkCntconv2d_4_nrn;
unsigned int* d_glbSpkCntconv2d_4_nrn;
unsigned int* glbSpkconv2d_4_nrn;
unsigned int* d_glbSpkconv2d_4_nrn;
scalar* Vmemconv2d_4_nrn;
scalar* d_Vmemconv2d_4_nrn;
unsigned int* nSpkconv2d_4_nrn;
unsigned int* d_nSpkconv2d_4_nrn;
scalar Vthrconv2d_4_nrn;
unsigned int* glbSpkCntconv2d_5_nrn;
unsigned int* d_glbSpkCntconv2d_5_nrn;
unsigned int* glbSpkconv2d_5_nrn;
unsigned int* d_glbSpkconv2d_5_nrn;
scalar* Vmemconv2d_5_nrn;
scalar* d_Vmemconv2d_5_nrn;
unsigned int* nSpkconv2d_5_nrn;
unsigned int* d_nSpkconv2d_5_nrn;
scalar Vthrconv2d_5_nrn;
unsigned int* glbSpkCntconv2d_6_nrn;
unsigned int* d_glbSpkCntconv2d_6_nrn;
unsigned int* glbSpkconv2d_6_nrn;
unsigned int* d_glbSpkconv2d_6_nrn;
scalar* Vmemconv2d_6_nrn;
scalar* d_Vmemconv2d_6_nrn;
unsigned int* nSpkconv2d_6_nrn;
unsigned int* d_nSpkconv2d_6_nrn;
scalar Vthrconv2d_6_nrn;
unsigned int* glbSpkCntconv2d_7_nrn;
unsigned int* d_glbSpkCntconv2d_7_nrn;
unsigned int* glbSpkconv2d_7_nrn;
unsigned int* d_glbSpkconv2d_7_nrn;
scalar* Vmemconv2d_7_nrn;
scalar* d_Vmemconv2d_7_nrn;
unsigned int* nSpkconv2d_7_nrn;
unsigned int* d_nSpkconv2d_7_nrn;
scalar Vthrconv2d_7_nrn;
unsigned int* glbSpkCntconv2d_8_nrn;
unsigned int* d_glbSpkCntconv2d_8_nrn;
unsigned int* glbSpkconv2d_8_nrn;
unsigned int* d_glbSpkconv2d_8_nrn;
scalar* Vmemconv2d_8_nrn;
scalar* d_Vmemconv2d_8_nrn;
unsigned int* nSpkconv2d_8_nrn;
unsigned int* d_nSpkconv2d_8_nrn;
scalar Vthrconv2d_8_nrn;
unsigned int* glbSpkCntconv2d_9_nrn;
unsigned int* d_glbSpkCntconv2d_9_nrn;
unsigned int* glbSpkconv2d_9_nrn;
unsigned int* d_glbSpkconv2d_9_nrn;
scalar* Vmemconv2d_9_nrn;
scalar* d_Vmemconv2d_9_nrn;
unsigned int* nSpkconv2d_9_nrn;
unsigned int* d_nSpkconv2d_9_nrn;
scalar Vthrconv2d_9_nrn;
unsigned int* glbSpkCntconv2d_nrn;
unsigned int* d_glbSpkCntconv2d_nrn;
unsigned int* glbSpkconv2d_nrn;
unsigned int* d_glbSpkconv2d_nrn;
scalar* Vmemconv2d_nrn;
scalar* d_Vmemconv2d_nrn;
unsigned int* nSpkconv2d_nrn;
unsigned int* d_nSpkconv2d_nrn;
scalar Vthrconv2d_nrn;
unsigned int* glbSpkCntdense_nrn;
unsigned int* d_glbSpkCntdense_nrn;
unsigned int* glbSpkdense_nrn;
unsigned int* d_glbSpkdense_nrn;
scalar* Vmemdense_nrn;
scalar* d_Vmemdense_nrn;
unsigned int* nSpkdense_nrn;
unsigned int* d_nSpkdense_nrn;
scalar Vthrdense_nrn;
unsigned int* glbSpkCntinput_1_nrn;
unsigned int* d_glbSpkCntinput_1_nrn;
unsigned int* glbSpkinput_1_nrn;
unsigned int* d_glbSpkinput_1_nrn;
curandState* d_rnginput_1_nrn;
scalar* inputinput_1_nrn;
scalar* d_inputinput_1_nrn;

// ------------------------------------------------------------------------
// custom update variables
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// postsynaptic variables
// ------------------------------------------------------------------------
float* inSynconv2d_7_to_conv2d_10_syn;
float* d_inSynconv2d_7_to_conv2d_10_syn;
float* inSynconv2d_6_to_conv2d_10_syn;
float* d_inSynconv2d_6_to_conv2d_10_syn;
float* inSynconv2d_9_to_conv2d_10_syn;
float* d_inSynconv2d_9_to_conv2d_10_syn;
float* inSynconv2d_10_to_conv2d_11_syn;
float* d_inSynconv2d_10_to_conv2d_11_syn;
float* inSynconv2d_7_to_conv2d_12_syn;
float* d_inSynconv2d_7_to_conv2d_12_syn;
float* inSynconv2d_6_to_conv2d_12_syn;
float* d_inSynconv2d_6_to_conv2d_12_syn;
float* inSynconv2d_9_to_conv2d_12_syn;
float* d_inSynconv2d_9_to_conv2d_12_syn;
float* inSynconv2d_11_to_conv2d_13_syn;
float* d_inSynconv2d_11_to_conv2d_13_syn;
float* inSynconv2d_12_to_conv2d_13_syn;
float* d_inSynconv2d_12_to_conv2d_13_syn;
float* inSynconv2d_13_to_conv2d_14_syn;
float* d_inSynconv2d_13_to_conv2d_14_syn;
float* inSynconv2d_11_to_conv2d_15_syn;
float* d_inSynconv2d_11_to_conv2d_15_syn;
float* inSynconv2d_12_to_conv2d_15_syn;
float* d_inSynconv2d_12_to_conv2d_15_syn;
float* inSynconv2d_14_to_conv2d_15_syn;
float* d_inSynconv2d_14_to_conv2d_15_syn;
float* inSynconv2d_15_to_conv2d_16_syn;
float* d_inSynconv2d_15_to_conv2d_16_syn;
float* inSynconv2d_11_to_conv2d_17_syn;
float* d_inSynconv2d_11_to_conv2d_17_syn;
float* inSynconv2d_12_to_conv2d_17_syn;
float* d_inSynconv2d_12_to_conv2d_17_syn;
float* inSynconv2d_14_to_conv2d_17_syn;
float* d_inSynconv2d_14_to_conv2d_17_syn;
float* inSynconv2d_16_to_conv2d_18_syn;
float* d_inSynconv2d_16_to_conv2d_18_syn;
float* inSynconv2d_17_to_conv2d_18_syn;
float* d_inSynconv2d_17_to_conv2d_18_syn;
float* inSynconv2d_18_to_conv2d_19_syn;
float* d_inSynconv2d_18_to_conv2d_19_syn;
float* inSynconv2d_to_conv2d_1_syn;
float* d_inSynconv2d_to_conv2d_1_syn;
float* inSynconv2d_1_to_conv2d_2_syn;
float* d_inSynconv2d_1_to_conv2d_2_syn;
float* inSynconv2d_to_conv2d_3_syn;
float* d_inSynconv2d_to_conv2d_3_syn;
float* inSynconv2d_2_to_conv2d_3_syn;
float* d_inSynconv2d_2_to_conv2d_3_syn;
float* inSynconv2d_3_to_conv2d_4_syn;
float* d_inSynconv2d_3_to_conv2d_4_syn;
float* inSynconv2d_to_conv2d_5_syn;
float* d_inSynconv2d_to_conv2d_5_syn;
float* inSynconv2d_4_to_conv2d_5_syn;
float* d_inSynconv2d_4_to_conv2d_5_syn;
float* inSynconv2d_2_to_conv2d_5_syn;
float* d_inSynconv2d_2_to_conv2d_5_syn;
float* inSynconv2d_5_to_conv2d_6_syn;
float* d_inSynconv2d_5_to_conv2d_6_syn;
float* inSynconv2d_to_conv2d_7_syn;
float* d_inSynconv2d_to_conv2d_7_syn;
float* inSynconv2d_4_to_conv2d_7_syn;
float* d_inSynconv2d_4_to_conv2d_7_syn;
float* inSynconv2d_2_to_conv2d_7_syn;
float* d_inSynconv2d_2_to_conv2d_7_syn;
float* inSynconv2d_7_to_conv2d_8_syn;
float* d_inSynconv2d_7_to_conv2d_8_syn;
float* inSynconv2d_6_to_conv2d_8_syn;
float* d_inSynconv2d_6_to_conv2d_8_syn;
float* inSynconv2d_8_to_conv2d_9_syn;
float* d_inSynconv2d_8_to_conv2d_9_syn;
float* inSyninput_1_to_conv2d_syn;
float* d_inSyninput_1_to_conv2d_syn;
float* inSynconv2d_16_to_dense_syn;
float* d_inSynconv2d_16_to_dense_syn;
float* inSynconv2d_19_to_dense_syn;
float* d_inSynconv2d_19_to_dense_syn;
float* inSynconv2d_17_to_dense_syn;
float* d_inSynconv2d_17_to_dense_syn;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
scalar* kernelgconv2d_10_to_conv2d_11_syn;
scalar* d_kernelgconv2d_10_to_conv2d_11_syn;
scalar* kernelgconv2d_11_to_conv2d_13_syn;
scalar* d_kernelgconv2d_11_to_conv2d_13_syn;
scalar* kernelgconv2d_11_to_conv2d_15_syn;
scalar* d_kernelgconv2d_11_to_conv2d_15_syn;
scalar* kernelgconv2d_11_to_conv2d_17_syn;
scalar* d_kernelgconv2d_11_to_conv2d_17_syn;
scalar* kernelgconv2d_12_to_conv2d_13_syn;
scalar* d_kernelgconv2d_12_to_conv2d_13_syn;
scalar* kernelgconv2d_12_to_conv2d_15_syn;
scalar* d_kernelgconv2d_12_to_conv2d_15_syn;
scalar* kernelgconv2d_12_to_conv2d_17_syn;
scalar* d_kernelgconv2d_12_to_conv2d_17_syn;
scalar* kernelgconv2d_13_to_conv2d_14_syn;
scalar* d_kernelgconv2d_13_to_conv2d_14_syn;
scalar* kernelgconv2d_14_to_conv2d_15_syn;
scalar* d_kernelgconv2d_14_to_conv2d_15_syn;
scalar* kernelgconv2d_14_to_conv2d_17_syn;
scalar* d_kernelgconv2d_14_to_conv2d_17_syn;
scalar* kernelgconv2d_15_to_conv2d_16_syn;
scalar* d_kernelgconv2d_15_to_conv2d_16_syn;
scalar* kernelgconv2d_16_to_conv2d_18_syn;
scalar* d_kernelgconv2d_16_to_conv2d_18_syn;
scalar* gconv2d_16_to_dense_syn;
scalar* d_gconv2d_16_to_dense_syn;
scalar* kernelgconv2d_17_to_conv2d_18_syn;
scalar* d_kernelgconv2d_17_to_conv2d_18_syn;
scalar* gconv2d_17_to_dense_syn;
scalar* d_gconv2d_17_to_dense_syn;
scalar* kernelgconv2d_18_to_conv2d_19_syn;
scalar* d_kernelgconv2d_18_to_conv2d_19_syn;
scalar* gconv2d_19_to_dense_syn;
scalar* d_gconv2d_19_to_dense_syn;
scalar* kernelgconv2d_1_to_conv2d_2_syn;
scalar* d_kernelgconv2d_1_to_conv2d_2_syn;
scalar* kernelgconv2d_2_to_conv2d_3_syn;
scalar* d_kernelgconv2d_2_to_conv2d_3_syn;
scalar* kernelgconv2d_2_to_conv2d_5_syn;
scalar* d_kernelgconv2d_2_to_conv2d_5_syn;
scalar* kernelgconv2d_2_to_conv2d_7_syn;
scalar* d_kernelgconv2d_2_to_conv2d_7_syn;
scalar* kernelgconv2d_3_to_conv2d_4_syn;
scalar* d_kernelgconv2d_3_to_conv2d_4_syn;
scalar* kernelgconv2d_4_to_conv2d_5_syn;
scalar* d_kernelgconv2d_4_to_conv2d_5_syn;
scalar* kernelgconv2d_4_to_conv2d_7_syn;
scalar* d_kernelgconv2d_4_to_conv2d_7_syn;
scalar* kernelgconv2d_5_to_conv2d_6_syn;
scalar* d_kernelgconv2d_5_to_conv2d_6_syn;
scalar* kernelgconv2d_6_to_conv2d_10_syn;
scalar* d_kernelgconv2d_6_to_conv2d_10_syn;
scalar* kernelgconv2d_6_to_conv2d_12_syn;
scalar* d_kernelgconv2d_6_to_conv2d_12_syn;
scalar* kernelgconv2d_6_to_conv2d_8_syn;
scalar* d_kernelgconv2d_6_to_conv2d_8_syn;
scalar* kernelgconv2d_7_to_conv2d_10_syn;
scalar* d_kernelgconv2d_7_to_conv2d_10_syn;
scalar* kernelgconv2d_7_to_conv2d_12_syn;
scalar* d_kernelgconv2d_7_to_conv2d_12_syn;
scalar* kernelgconv2d_7_to_conv2d_8_syn;
scalar* d_kernelgconv2d_7_to_conv2d_8_syn;
scalar* kernelgconv2d_8_to_conv2d_9_syn;
scalar* d_kernelgconv2d_8_to_conv2d_9_syn;
scalar* kernelgconv2d_9_to_conv2d_10_syn;
scalar* d_kernelgconv2d_9_to_conv2d_10_syn;
scalar* kernelgconv2d_9_to_conv2d_12_syn;
scalar* d_kernelgconv2d_9_to_conv2d_12_syn;
scalar* kernelgconv2d_to_conv2d_1_syn;
scalar* d_kernelgconv2d_to_conv2d_1_syn;
scalar* kernelgconv2d_to_conv2d_3_syn;
scalar* d_kernelgconv2d_to_conv2d_3_syn;
scalar* kernelgconv2d_to_conv2d_5_syn;
scalar* d_kernelgconv2d_to_conv2d_5_syn;
scalar* kernelgconv2d_to_conv2d_7_syn;
scalar* d_kernelgconv2d_to_conv2d_7_syn;
scalar* kernelginput_1_to_conv2d_syn;
scalar* d_kernelginput_1_to_conv2d_syn;

}  // extern "C"
// ------------------------------------------------------------------------
// extra global params
// ------------------------------------------------------------------------
void allocatekernelgconv2d_10_to_conv2d_11_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_10_to_conv2d_11_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_10_to_conv2d_11_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(0, d_kernelgconv2d_10_to_conv2d_11_syn);
}
void freekernelgconv2d_10_to_conv2d_11_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_10_to_conv2d_11_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_10_to_conv2d_11_syn));
}
void pushkernelgconv2d_10_to_conv2d_11_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_10_to_conv2d_11_syn, kernelgconv2d_10_to_conv2d_11_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_10_to_conv2d_11_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_10_to_conv2d_11_syn, d_kernelgconv2d_10_to_conv2d_11_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_11_to_conv2d_13_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_11_to_conv2d_13_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_11_to_conv2d_13_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(1, d_kernelgconv2d_11_to_conv2d_13_syn);
}
void freekernelgconv2d_11_to_conv2d_13_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_11_to_conv2d_13_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_11_to_conv2d_13_syn));
}
void pushkernelgconv2d_11_to_conv2d_13_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_11_to_conv2d_13_syn, kernelgconv2d_11_to_conv2d_13_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_11_to_conv2d_13_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_11_to_conv2d_13_syn, d_kernelgconv2d_11_to_conv2d_13_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_11_to_conv2d_15_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_11_to_conv2d_15_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_11_to_conv2d_15_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(2, d_kernelgconv2d_11_to_conv2d_15_syn);
}
void freekernelgconv2d_11_to_conv2d_15_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_11_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_11_to_conv2d_15_syn));
}
void pushkernelgconv2d_11_to_conv2d_15_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_11_to_conv2d_15_syn, kernelgconv2d_11_to_conv2d_15_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_11_to_conv2d_15_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_11_to_conv2d_15_syn, d_kernelgconv2d_11_to_conv2d_15_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_11_to_conv2d_17_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_11_to_conv2d_17_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_11_to_conv2d_17_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(3, d_kernelgconv2d_11_to_conv2d_17_syn);
}
void freekernelgconv2d_11_to_conv2d_17_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_11_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_11_to_conv2d_17_syn));
}
void pushkernelgconv2d_11_to_conv2d_17_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_11_to_conv2d_17_syn, kernelgconv2d_11_to_conv2d_17_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_11_to_conv2d_17_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_11_to_conv2d_17_syn, d_kernelgconv2d_11_to_conv2d_17_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_12_to_conv2d_13_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_12_to_conv2d_13_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_12_to_conv2d_13_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(4, d_kernelgconv2d_12_to_conv2d_13_syn);
}
void freekernelgconv2d_12_to_conv2d_13_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_12_to_conv2d_13_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_12_to_conv2d_13_syn));
}
void pushkernelgconv2d_12_to_conv2d_13_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_12_to_conv2d_13_syn, kernelgconv2d_12_to_conv2d_13_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_12_to_conv2d_13_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_12_to_conv2d_13_syn, d_kernelgconv2d_12_to_conv2d_13_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_12_to_conv2d_15_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_12_to_conv2d_15_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_12_to_conv2d_15_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(5, d_kernelgconv2d_12_to_conv2d_15_syn);
}
void freekernelgconv2d_12_to_conv2d_15_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_12_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_12_to_conv2d_15_syn));
}
void pushkernelgconv2d_12_to_conv2d_15_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_12_to_conv2d_15_syn, kernelgconv2d_12_to_conv2d_15_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_12_to_conv2d_15_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_12_to_conv2d_15_syn, d_kernelgconv2d_12_to_conv2d_15_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_12_to_conv2d_17_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_12_to_conv2d_17_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_12_to_conv2d_17_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(6, d_kernelgconv2d_12_to_conv2d_17_syn);
}
void freekernelgconv2d_12_to_conv2d_17_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_12_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_12_to_conv2d_17_syn));
}
void pushkernelgconv2d_12_to_conv2d_17_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_12_to_conv2d_17_syn, kernelgconv2d_12_to_conv2d_17_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_12_to_conv2d_17_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_12_to_conv2d_17_syn, d_kernelgconv2d_12_to_conv2d_17_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_13_to_conv2d_14_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_13_to_conv2d_14_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_13_to_conv2d_14_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(7, d_kernelgconv2d_13_to_conv2d_14_syn);
}
void freekernelgconv2d_13_to_conv2d_14_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_13_to_conv2d_14_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_13_to_conv2d_14_syn));
}
void pushkernelgconv2d_13_to_conv2d_14_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_13_to_conv2d_14_syn, kernelgconv2d_13_to_conv2d_14_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_13_to_conv2d_14_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_13_to_conv2d_14_syn, d_kernelgconv2d_13_to_conv2d_14_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_14_to_conv2d_15_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_14_to_conv2d_15_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_14_to_conv2d_15_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(8, d_kernelgconv2d_14_to_conv2d_15_syn);
}
void freekernelgconv2d_14_to_conv2d_15_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_14_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_14_to_conv2d_15_syn));
}
void pushkernelgconv2d_14_to_conv2d_15_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_14_to_conv2d_15_syn, kernelgconv2d_14_to_conv2d_15_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_14_to_conv2d_15_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_14_to_conv2d_15_syn, d_kernelgconv2d_14_to_conv2d_15_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_14_to_conv2d_17_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_14_to_conv2d_17_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_14_to_conv2d_17_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(9, d_kernelgconv2d_14_to_conv2d_17_syn);
}
void freekernelgconv2d_14_to_conv2d_17_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_14_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_14_to_conv2d_17_syn));
}
void pushkernelgconv2d_14_to_conv2d_17_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_14_to_conv2d_17_syn, kernelgconv2d_14_to_conv2d_17_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_14_to_conv2d_17_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_14_to_conv2d_17_syn, d_kernelgconv2d_14_to_conv2d_17_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_15_to_conv2d_16_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_15_to_conv2d_16_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_15_to_conv2d_16_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(10, d_kernelgconv2d_15_to_conv2d_16_syn);
}
void freekernelgconv2d_15_to_conv2d_16_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_15_to_conv2d_16_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_15_to_conv2d_16_syn));
}
void pushkernelgconv2d_15_to_conv2d_16_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_15_to_conv2d_16_syn, kernelgconv2d_15_to_conv2d_16_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_15_to_conv2d_16_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_15_to_conv2d_16_syn, d_kernelgconv2d_15_to_conv2d_16_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_16_to_conv2d_18_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_16_to_conv2d_18_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_16_to_conv2d_18_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(11, d_kernelgconv2d_16_to_conv2d_18_syn);
}
void freekernelgconv2d_16_to_conv2d_18_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_16_to_conv2d_18_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_16_to_conv2d_18_syn));
}
void pushkernelgconv2d_16_to_conv2d_18_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_16_to_conv2d_18_syn, kernelgconv2d_16_to_conv2d_18_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_16_to_conv2d_18_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_16_to_conv2d_18_syn, d_kernelgconv2d_16_to_conv2d_18_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_17_to_conv2d_18_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_17_to_conv2d_18_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_17_to_conv2d_18_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(12, d_kernelgconv2d_17_to_conv2d_18_syn);
}
void freekernelgconv2d_17_to_conv2d_18_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_17_to_conv2d_18_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_17_to_conv2d_18_syn));
}
void pushkernelgconv2d_17_to_conv2d_18_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_17_to_conv2d_18_syn, kernelgconv2d_17_to_conv2d_18_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_17_to_conv2d_18_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_17_to_conv2d_18_syn, d_kernelgconv2d_17_to_conv2d_18_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_18_to_conv2d_19_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_18_to_conv2d_19_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_18_to_conv2d_19_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(13, d_kernelgconv2d_18_to_conv2d_19_syn);
}
void freekernelgconv2d_18_to_conv2d_19_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_18_to_conv2d_19_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_18_to_conv2d_19_syn));
}
void pushkernelgconv2d_18_to_conv2d_19_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_18_to_conv2d_19_syn, kernelgconv2d_18_to_conv2d_19_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_18_to_conv2d_19_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_18_to_conv2d_19_syn, d_kernelgconv2d_18_to_conv2d_19_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_1_to_conv2d_2_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_1_to_conv2d_2_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_1_to_conv2d_2_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(14, d_kernelgconv2d_1_to_conv2d_2_syn);
}
void freekernelgconv2d_1_to_conv2d_2_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_1_to_conv2d_2_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_1_to_conv2d_2_syn));
}
void pushkernelgconv2d_1_to_conv2d_2_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_1_to_conv2d_2_syn, kernelgconv2d_1_to_conv2d_2_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_1_to_conv2d_2_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_1_to_conv2d_2_syn, d_kernelgconv2d_1_to_conv2d_2_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_2_to_conv2d_3_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_2_to_conv2d_3_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_2_to_conv2d_3_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(15, d_kernelgconv2d_2_to_conv2d_3_syn);
}
void freekernelgconv2d_2_to_conv2d_3_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_2_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_2_to_conv2d_3_syn));
}
void pushkernelgconv2d_2_to_conv2d_3_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_2_to_conv2d_3_syn, kernelgconv2d_2_to_conv2d_3_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_2_to_conv2d_3_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_2_to_conv2d_3_syn, d_kernelgconv2d_2_to_conv2d_3_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_2_to_conv2d_5_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_2_to_conv2d_5_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_2_to_conv2d_5_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(16, d_kernelgconv2d_2_to_conv2d_5_syn);
}
void freekernelgconv2d_2_to_conv2d_5_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_2_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_2_to_conv2d_5_syn));
}
void pushkernelgconv2d_2_to_conv2d_5_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_2_to_conv2d_5_syn, kernelgconv2d_2_to_conv2d_5_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_2_to_conv2d_5_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_2_to_conv2d_5_syn, d_kernelgconv2d_2_to_conv2d_5_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_2_to_conv2d_7_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_2_to_conv2d_7_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_2_to_conv2d_7_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(17, d_kernelgconv2d_2_to_conv2d_7_syn);
}
void freekernelgconv2d_2_to_conv2d_7_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_2_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_2_to_conv2d_7_syn));
}
void pushkernelgconv2d_2_to_conv2d_7_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_2_to_conv2d_7_syn, kernelgconv2d_2_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_2_to_conv2d_7_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_2_to_conv2d_7_syn, d_kernelgconv2d_2_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_3_to_conv2d_4_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_3_to_conv2d_4_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_3_to_conv2d_4_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(18, d_kernelgconv2d_3_to_conv2d_4_syn);
}
void freekernelgconv2d_3_to_conv2d_4_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_3_to_conv2d_4_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_3_to_conv2d_4_syn));
}
void pushkernelgconv2d_3_to_conv2d_4_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_3_to_conv2d_4_syn, kernelgconv2d_3_to_conv2d_4_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_3_to_conv2d_4_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_3_to_conv2d_4_syn, d_kernelgconv2d_3_to_conv2d_4_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_4_to_conv2d_5_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_4_to_conv2d_5_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_4_to_conv2d_5_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(19, d_kernelgconv2d_4_to_conv2d_5_syn);
}
void freekernelgconv2d_4_to_conv2d_5_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_4_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_4_to_conv2d_5_syn));
}
void pushkernelgconv2d_4_to_conv2d_5_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_4_to_conv2d_5_syn, kernelgconv2d_4_to_conv2d_5_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_4_to_conv2d_5_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_4_to_conv2d_5_syn, d_kernelgconv2d_4_to_conv2d_5_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_4_to_conv2d_7_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_4_to_conv2d_7_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_4_to_conv2d_7_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(20, d_kernelgconv2d_4_to_conv2d_7_syn);
}
void freekernelgconv2d_4_to_conv2d_7_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_4_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_4_to_conv2d_7_syn));
}
void pushkernelgconv2d_4_to_conv2d_7_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_4_to_conv2d_7_syn, kernelgconv2d_4_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_4_to_conv2d_7_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_4_to_conv2d_7_syn, d_kernelgconv2d_4_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_5_to_conv2d_6_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_5_to_conv2d_6_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_5_to_conv2d_6_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(21, d_kernelgconv2d_5_to_conv2d_6_syn);
}
void freekernelgconv2d_5_to_conv2d_6_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_5_to_conv2d_6_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_5_to_conv2d_6_syn));
}
void pushkernelgconv2d_5_to_conv2d_6_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_5_to_conv2d_6_syn, kernelgconv2d_5_to_conv2d_6_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_5_to_conv2d_6_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_5_to_conv2d_6_syn, d_kernelgconv2d_5_to_conv2d_6_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_6_to_conv2d_10_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_6_to_conv2d_10_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_6_to_conv2d_10_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(22, d_kernelgconv2d_6_to_conv2d_10_syn);
}
void freekernelgconv2d_6_to_conv2d_10_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_6_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_6_to_conv2d_10_syn));
}
void pushkernelgconv2d_6_to_conv2d_10_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_6_to_conv2d_10_syn, kernelgconv2d_6_to_conv2d_10_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_6_to_conv2d_10_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_6_to_conv2d_10_syn, d_kernelgconv2d_6_to_conv2d_10_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_6_to_conv2d_12_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_6_to_conv2d_12_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_6_to_conv2d_12_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(23, d_kernelgconv2d_6_to_conv2d_12_syn);
}
void freekernelgconv2d_6_to_conv2d_12_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_6_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_6_to_conv2d_12_syn));
}
void pushkernelgconv2d_6_to_conv2d_12_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_6_to_conv2d_12_syn, kernelgconv2d_6_to_conv2d_12_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_6_to_conv2d_12_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_6_to_conv2d_12_syn, d_kernelgconv2d_6_to_conv2d_12_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_6_to_conv2d_8_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_6_to_conv2d_8_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_6_to_conv2d_8_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(24, d_kernelgconv2d_6_to_conv2d_8_syn);
}
void freekernelgconv2d_6_to_conv2d_8_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_6_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_6_to_conv2d_8_syn));
}
void pushkernelgconv2d_6_to_conv2d_8_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_6_to_conv2d_8_syn, kernelgconv2d_6_to_conv2d_8_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_6_to_conv2d_8_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_6_to_conv2d_8_syn, d_kernelgconv2d_6_to_conv2d_8_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_7_to_conv2d_10_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_7_to_conv2d_10_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_7_to_conv2d_10_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(25, d_kernelgconv2d_7_to_conv2d_10_syn);
}
void freekernelgconv2d_7_to_conv2d_10_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_7_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_7_to_conv2d_10_syn));
}
void pushkernelgconv2d_7_to_conv2d_10_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_7_to_conv2d_10_syn, kernelgconv2d_7_to_conv2d_10_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_7_to_conv2d_10_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_7_to_conv2d_10_syn, d_kernelgconv2d_7_to_conv2d_10_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_7_to_conv2d_12_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_7_to_conv2d_12_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_7_to_conv2d_12_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(26, d_kernelgconv2d_7_to_conv2d_12_syn);
}
void freekernelgconv2d_7_to_conv2d_12_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_7_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_7_to_conv2d_12_syn));
}
void pushkernelgconv2d_7_to_conv2d_12_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_7_to_conv2d_12_syn, kernelgconv2d_7_to_conv2d_12_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_7_to_conv2d_12_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_7_to_conv2d_12_syn, d_kernelgconv2d_7_to_conv2d_12_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_7_to_conv2d_8_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_7_to_conv2d_8_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_7_to_conv2d_8_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(27, d_kernelgconv2d_7_to_conv2d_8_syn);
}
void freekernelgconv2d_7_to_conv2d_8_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_7_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_7_to_conv2d_8_syn));
}
void pushkernelgconv2d_7_to_conv2d_8_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_7_to_conv2d_8_syn, kernelgconv2d_7_to_conv2d_8_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_7_to_conv2d_8_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_7_to_conv2d_8_syn, d_kernelgconv2d_7_to_conv2d_8_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_8_to_conv2d_9_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_8_to_conv2d_9_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_8_to_conv2d_9_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(28, d_kernelgconv2d_8_to_conv2d_9_syn);
}
void freekernelgconv2d_8_to_conv2d_9_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_8_to_conv2d_9_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_8_to_conv2d_9_syn));
}
void pushkernelgconv2d_8_to_conv2d_9_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_8_to_conv2d_9_syn, kernelgconv2d_8_to_conv2d_9_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_8_to_conv2d_9_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_8_to_conv2d_9_syn, d_kernelgconv2d_8_to_conv2d_9_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_9_to_conv2d_10_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_9_to_conv2d_10_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_9_to_conv2d_10_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(29, d_kernelgconv2d_9_to_conv2d_10_syn);
}
void freekernelgconv2d_9_to_conv2d_10_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_9_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_9_to_conv2d_10_syn));
}
void pushkernelgconv2d_9_to_conv2d_10_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_9_to_conv2d_10_syn, kernelgconv2d_9_to_conv2d_10_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_9_to_conv2d_10_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_9_to_conv2d_10_syn, d_kernelgconv2d_9_to_conv2d_10_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_9_to_conv2d_12_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_9_to_conv2d_12_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_9_to_conv2d_12_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(30, d_kernelgconv2d_9_to_conv2d_12_syn);
}
void freekernelgconv2d_9_to_conv2d_12_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_9_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_9_to_conv2d_12_syn));
}
void pushkernelgconv2d_9_to_conv2d_12_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_9_to_conv2d_12_syn, kernelgconv2d_9_to_conv2d_12_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_9_to_conv2d_12_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_9_to_conv2d_12_syn, d_kernelgconv2d_9_to_conv2d_12_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_to_conv2d_1_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_to_conv2d_1_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_to_conv2d_1_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate0kernelgToDevice(0, d_kernelgconv2d_to_conv2d_1_syn);
}
void freekernelgconv2d_to_conv2d_1_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_to_conv2d_1_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_to_conv2d_1_syn));
}
void pushkernelgconv2d_to_conv2d_1_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_to_conv2d_1_syn, kernelgconv2d_to_conv2d_1_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_to_conv2d_1_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_to_conv2d_1_syn, d_kernelgconv2d_to_conv2d_1_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_to_conv2d_3_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_to_conv2d_3_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_to_conv2d_3_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate0kernelgToDevice(1, d_kernelgconv2d_to_conv2d_3_syn);
}
void freekernelgconv2d_to_conv2d_3_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_to_conv2d_3_syn));
}
void pushkernelgconv2d_to_conv2d_3_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_to_conv2d_3_syn, kernelgconv2d_to_conv2d_3_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_to_conv2d_3_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_to_conv2d_3_syn, d_kernelgconv2d_to_conv2d_3_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_to_conv2d_5_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_to_conv2d_5_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_to_conv2d_5_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate0kernelgToDevice(2, d_kernelgconv2d_to_conv2d_5_syn);
}
void freekernelgconv2d_to_conv2d_5_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_to_conv2d_5_syn));
}
void pushkernelgconv2d_to_conv2d_5_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_to_conv2d_5_syn, kernelgconv2d_to_conv2d_5_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_to_conv2d_5_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_to_conv2d_5_syn, d_kernelgconv2d_to_conv2d_5_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_to_conv2d_7_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_to_conv2d_7_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_to_conv2d_7_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate0kernelgToDevice(3, d_kernelgconv2d_to_conv2d_7_syn);
}
void freekernelgconv2d_to_conv2d_7_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_to_conv2d_7_syn));
}
void pushkernelgconv2d_to_conv2d_7_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_to_conv2d_7_syn, kernelgconv2d_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_to_conv2d_7_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_to_conv2d_7_syn, d_kernelgconv2d_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelginput_1_to_conv2d_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelginput_1_to_conv2d_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelginput_1_to_conv2d_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(31, d_kernelginput_1_to_conv2d_syn);
}
void freekernelginput_1_to_conv2d_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelginput_1_to_conv2d_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelginput_1_to_conv2d_syn));
}
void pushkernelginput_1_to_conv2d_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelginput_1_to_conv2d_syn, kernelginput_1_to_conv2d_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelginput_1_to_conv2d_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelginput_1_to_conv2d_syn, d_kernelginput_1_to_conv2d_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}

// ------------------------------------------------------------------------
// copying things to device
// ------------------------------------------------------------------------
void pushconv2d_10_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_10_nrn, glbSpkCntconv2d_10_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_10_nrn, glbSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_10_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_10_nrn, glbSpkCntconv2d_10_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_10_nrn, glbSpkconv2d_10_nrn, glbSpkCntconv2d_10_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_10_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_10_nrn, Vmemconv2d_10_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_10_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_10_nrn, Vmemconv2d_10_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_10_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_10_nrn, nSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_10_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_10_nrn, nSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_10_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_10_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_10_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_11_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_11_nrn, glbSpkCntconv2d_11_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_11_nrn, glbSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_11_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_11_nrn, glbSpkCntconv2d_11_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_11_nrn, glbSpkconv2d_11_nrn, glbSpkCntconv2d_11_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_11_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_11_nrn, Vmemconv2d_11_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_11_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_11_nrn, Vmemconv2d_11_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_11_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_11_nrn, nSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_11_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_11_nrn, nSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_11_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_11_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_11_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_12_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_12_nrn, glbSpkCntconv2d_12_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_12_nrn, glbSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_12_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_12_nrn, glbSpkCntconv2d_12_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_12_nrn, glbSpkconv2d_12_nrn, glbSpkCntconv2d_12_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_12_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_12_nrn, Vmemconv2d_12_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_12_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_12_nrn, Vmemconv2d_12_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_12_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_12_nrn, nSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_12_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_12_nrn, nSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_12_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_12_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_12_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_13_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_13_nrn, glbSpkCntconv2d_13_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_13_nrn, glbSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_13_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_13_nrn, glbSpkCntconv2d_13_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_13_nrn, glbSpkconv2d_13_nrn, glbSpkCntconv2d_13_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_13_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_13_nrn, Vmemconv2d_13_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_13_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_13_nrn, Vmemconv2d_13_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_13_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_13_nrn, nSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_13_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_13_nrn, nSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_13_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_13_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_13_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_14_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_14_nrn, glbSpkCntconv2d_14_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_14_nrn, glbSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_14_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_14_nrn, glbSpkCntconv2d_14_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_14_nrn, glbSpkconv2d_14_nrn, glbSpkCntconv2d_14_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_14_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_14_nrn, Vmemconv2d_14_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_14_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_14_nrn, Vmemconv2d_14_nrn, 2304 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_14_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_14_nrn, nSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_14_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_14_nrn, nSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_14_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_14_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_14_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_15_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_15_nrn, glbSpkCntconv2d_15_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_15_nrn, glbSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_15_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_15_nrn, glbSpkCntconv2d_15_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_15_nrn, glbSpkconv2d_15_nrn, glbSpkCntconv2d_15_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_15_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_15_nrn, Vmemconv2d_15_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_15_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_15_nrn, Vmemconv2d_15_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_15_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_15_nrn, nSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_15_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_15_nrn, nSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_15_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_15_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_15_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_16_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_16_nrn, glbSpkCntconv2d_16_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_16_nrn, glbSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_16_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_16_nrn, glbSpkCntconv2d_16_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_16_nrn, glbSpkconv2d_16_nrn, glbSpkCntconv2d_16_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_16_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_16_nrn, Vmemconv2d_16_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_16_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_16_nrn, Vmemconv2d_16_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_16_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_16_nrn, nSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_16_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_16_nrn, nSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_16_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_16_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_16_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_17_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_17_nrn, glbSpkCntconv2d_17_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_17_nrn, glbSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_17_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_17_nrn, glbSpkCntconv2d_17_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_17_nrn, glbSpkconv2d_17_nrn, glbSpkCntconv2d_17_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_17_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_17_nrn, Vmemconv2d_17_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_17_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_17_nrn, Vmemconv2d_17_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_17_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_17_nrn, nSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_17_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_17_nrn, nSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_17_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_17_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_17_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_18_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_18_nrn, glbSpkCntconv2d_18_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_18_nrn, glbSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_18_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_18_nrn, glbSpkCntconv2d_18_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_18_nrn, glbSpkconv2d_18_nrn, glbSpkCntconv2d_18_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_18_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_18_nrn, Vmemconv2d_18_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_18_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_18_nrn, Vmemconv2d_18_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_18_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_18_nrn, nSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_18_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_18_nrn, nSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_18_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_18_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_18_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_19_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_19_nrn, glbSpkCntconv2d_19_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_19_nrn, glbSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_19_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_19_nrn, glbSpkCntconv2d_19_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_19_nrn, glbSpkconv2d_19_nrn, glbSpkCntconv2d_19_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_19_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_19_nrn, Vmemconv2d_19_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_19_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_19_nrn, Vmemconv2d_19_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_19_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_19_nrn, nSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_19_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_19_nrn, nSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_19_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_19_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_19_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_1_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_1_nrn, glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_1_nrn, glbSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_1_nrn, glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_1_nrn, glbSpkconv2d_1_nrn, glbSpkCntconv2d_1_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_1_nrn, Vmemconv2d_1_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_1_nrn, Vmemconv2d_1_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_1_nrn, nSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_1_nrn, nSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_1_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_1_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_1_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_2_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_2_nrn, glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_2_nrn, glbSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_2_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_2_nrn, glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_2_nrn, glbSpkconv2d_2_nrn, glbSpkCntconv2d_2_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_2_nrn, Vmemconv2d_2_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_2_nrn, Vmemconv2d_2_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_2_nrn, nSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_2_nrn, nSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_2_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_2_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_2_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_3_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_3_nrn, glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_3_nrn, glbSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_3_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_3_nrn, glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_3_nrn, glbSpkconv2d_3_nrn, glbSpkCntconv2d_3_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_3_nrn, Vmemconv2d_3_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_3_nrn, Vmemconv2d_3_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_3_nrn, nSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_3_nrn, nSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_3_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_3_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_3_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_4_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_4_nrn, glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_4_nrn, glbSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_4_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_4_nrn, glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_4_nrn, glbSpkconv2d_4_nrn, glbSpkCntconv2d_4_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_4_nrn, Vmemconv2d_4_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_4_nrn, Vmemconv2d_4_nrn, 6400 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_4_nrn, nSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_4_nrn, nSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_4_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_4_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_4_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_5_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_5_nrn, glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_5_nrn, glbSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_5_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_5_nrn, glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_5_nrn, glbSpkconv2d_5_nrn, glbSpkCntconv2d_5_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_5_nrn, Vmemconv2d_5_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_5_nrn, Vmemconv2d_5_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_5_nrn, nSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_5_nrn, nSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_5_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_5_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_5_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_6_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_6_nrn, glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_6_nrn, glbSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_6_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_6_nrn, glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_6_nrn, glbSpkconv2d_6_nrn, glbSpkCntconv2d_6_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_6_nrn, Vmemconv2d_6_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_6_nrn, Vmemconv2d_6_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_6_nrn, nSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_6_nrn, nSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_6_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_6_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_6_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_7_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_7_nrn, glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_7_nrn, glbSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_7_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_7_nrn, glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_7_nrn, glbSpkconv2d_7_nrn, glbSpkCntconv2d_7_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_7_nrn, Vmemconv2d_7_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_7_nrn, Vmemconv2d_7_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_7_nrn, nSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_7_nrn, nSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_7_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_7_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_7_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_8_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_8_nrn, glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_8_nrn, glbSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_8_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_8_nrn, glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_8_nrn, glbSpkconv2d_8_nrn, glbSpkCntconv2d_8_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_8_nrn, Vmemconv2d_8_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_8_nrn, Vmemconv2d_8_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_8_nrn, nSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_8_nrn, nSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_8_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_8_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_8_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_9_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_9_nrn, glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_9_nrn, glbSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_9_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_9_nrn, glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_9_nrn, glbSpkconv2d_9_nrn, glbSpkCntconv2d_9_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_9_nrn, Vmemconv2d_9_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_9_nrn, Vmemconv2d_9_nrn, 3200 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_9_nrn, nSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_9_nrn, nSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_9_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_9_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_9_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_nrn, glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_nrn, glbSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_nrn, glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_nrn, glbSpkconv2d_nrn, glbSpkCntconv2d_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_nrn, Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_nrn, Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkconv2d_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_nrn, nSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkconv2d_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkconv2d_nrn, nSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushconv2d_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemconv2d_nrnToDevice(uninitialisedOnly);
    pushnSpkconv2d_nrnToDevice(uninitialisedOnly);
}

void pushdense_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_nrn, glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_nrn, glbSpkdense_nrn, 10 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushdense_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_nrn, glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_nrn, glbSpkdense_nrn, glbSpkCntdense_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushVmemdense_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_nrn, Vmemdense_nrn, 10 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemdense_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_nrn, Vmemdense_nrn, 10 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushnSpkdense_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkdense_nrn, nSpkdense_nrn, 10 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushCurrentnSpkdense_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_nSpkdense_nrn, nSpkdense_nrn, 10 * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushdense_nrnStateToDevice(bool uninitialisedOnly) {
    pushVmemdense_nrnToDevice(uninitialisedOnly);
    pushnSpkdense_nrnToDevice(uninitialisedOnly);
}

void pushinput_1_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntinput_1_nrn, glbSpkCntinput_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkinput_1_nrn, glbSpkinput_1_nrn, 3072 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushinput_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntinput_1_nrn, glbSpkCntinput_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkinput_1_nrn, glbSpkinput_1_nrn, glbSpkCntinput_1_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushinputinput_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inputinput_1_nrn, inputinput_1_nrn, 3072 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentinputinput_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_inputinput_1_nrn, inputinput_1_nrn, 3072 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinput_1_nrnStateToDevice(bool uninitialisedOnly) {
    pushinputinput_1_nrnToDevice(uninitialisedOnly);
}

void pushinSynconv2d_10_to_conv2d_11_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_10_to_conv2d_11_syn, inSynconv2d_10_to_conv2d_11_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_10_to_conv2d_11_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_10_to_conv2d_11_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_11_to_conv2d_13_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_11_to_conv2d_13_syn, inSynconv2d_11_to_conv2d_13_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_11_to_conv2d_13_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_11_to_conv2d_13_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_11_to_conv2d_15_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_11_to_conv2d_15_syn, inSynconv2d_11_to_conv2d_15_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_11_to_conv2d_15_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_11_to_conv2d_15_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_11_to_conv2d_17_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_11_to_conv2d_17_syn, inSynconv2d_11_to_conv2d_17_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_11_to_conv2d_17_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_11_to_conv2d_17_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_12_to_conv2d_13_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_12_to_conv2d_13_syn, inSynconv2d_12_to_conv2d_13_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_12_to_conv2d_13_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_12_to_conv2d_13_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_12_to_conv2d_15_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_12_to_conv2d_15_syn, inSynconv2d_12_to_conv2d_15_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_12_to_conv2d_15_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_12_to_conv2d_15_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_12_to_conv2d_17_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_12_to_conv2d_17_syn, inSynconv2d_12_to_conv2d_17_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_12_to_conv2d_17_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_12_to_conv2d_17_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_13_to_conv2d_14_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_13_to_conv2d_14_syn, inSynconv2d_13_to_conv2d_14_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_13_to_conv2d_14_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_13_to_conv2d_14_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_14_to_conv2d_15_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_14_to_conv2d_15_syn, inSynconv2d_14_to_conv2d_15_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_14_to_conv2d_15_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_14_to_conv2d_15_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_14_to_conv2d_17_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_14_to_conv2d_17_syn, inSynconv2d_14_to_conv2d_17_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_14_to_conv2d_17_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_14_to_conv2d_17_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_15_to_conv2d_16_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_15_to_conv2d_16_syn, inSynconv2d_15_to_conv2d_16_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_15_to_conv2d_16_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_15_to_conv2d_16_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_16_to_conv2d_18_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_16_to_conv2d_18_syn, inSynconv2d_16_to_conv2d_18_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_16_to_conv2d_18_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_16_to_conv2d_18_synToDevice(uninitialisedOnly);
}

void pushgconv2d_16_to_dense_synToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_gconv2d_16_to_dense_syn, gconv2d_16_to_dense_syn, 20480 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinSynconv2d_16_to_dense_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_16_to_dense_syn, inSynconv2d_16_to_dense_syn, 10 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_16_to_dense_synStateToDevice(bool uninitialisedOnly) {
    pushgconv2d_16_to_dense_synToDevice(uninitialisedOnly);
    pushinSynconv2d_16_to_dense_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_17_to_conv2d_18_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_17_to_conv2d_18_syn, inSynconv2d_17_to_conv2d_18_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_17_to_conv2d_18_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_17_to_conv2d_18_synToDevice(uninitialisedOnly);
}

void pushgconv2d_17_to_dense_synToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_gconv2d_17_to_dense_syn, gconv2d_17_to_dense_syn, 20480 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinSynconv2d_17_to_dense_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_17_to_dense_syn, inSynconv2d_17_to_dense_syn, 10 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_17_to_dense_synStateToDevice(bool uninitialisedOnly) {
    pushgconv2d_17_to_dense_synToDevice(uninitialisedOnly);
    pushinSynconv2d_17_to_dense_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_18_to_conv2d_19_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_18_to_conv2d_19_syn, inSynconv2d_18_to_conv2d_19_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_18_to_conv2d_19_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_18_to_conv2d_19_synToDevice(uninitialisedOnly);
}

void pushgconv2d_19_to_dense_synToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_gconv2d_19_to_dense_syn, gconv2d_19_to_dense_syn, 20480 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinSynconv2d_19_to_dense_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_19_to_dense_syn, inSynconv2d_19_to_dense_syn, 10 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_19_to_dense_synStateToDevice(bool uninitialisedOnly) {
    pushgconv2d_19_to_dense_synToDevice(uninitialisedOnly);
    pushinSynconv2d_19_to_dense_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_1_to_conv2d_2_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_1_to_conv2d_2_syn, inSynconv2d_1_to_conv2d_2_syn, 6400 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_1_to_conv2d_2_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_1_to_conv2d_2_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_2_to_conv2d_3_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_2_to_conv2d_3_syn, inSynconv2d_2_to_conv2d_3_syn, 6400 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_2_to_conv2d_3_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_2_to_conv2d_3_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_2_to_conv2d_5_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_2_to_conv2d_5_syn, inSynconv2d_2_to_conv2d_5_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_2_to_conv2d_5_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_2_to_conv2d_5_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_2_to_conv2d_7_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_2_to_conv2d_7_syn, inSynconv2d_2_to_conv2d_7_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_2_to_conv2d_7_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_2_to_conv2d_7_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_3_to_conv2d_4_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_3_to_conv2d_4_syn, inSynconv2d_3_to_conv2d_4_syn, 6400 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_3_to_conv2d_4_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_3_to_conv2d_4_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_4_to_conv2d_5_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_4_to_conv2d_5_syn, inSynconv2d_4_to_conv2d_5_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_4_to_conv2d_5_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_4_to_conv2d_5_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_4_to_conv2d_7_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_4_to_conv2d_7_syn, inSynconv2d_4_to_conv2d_7_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_4_to_conv2d_7_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_4_to_conv2d_7_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_5_to_conv2d_6_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_5_to_conv2d_6_syn, inSynconv2d_5_to_conv2d_6_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_5_to_conv2d_6_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_5_to_conv2d_6_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_6_to_conv2d_10_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_6_to_conv2d_10_syn, inSynconv2d_6_to_conv2d_10_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_6_to_conv2d_10_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_6_to_conv2d_10_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_6_to_conv2d_12_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_6_to_conv2d_12_syn, inSynconv2d_6_to_conv2d_12_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_6_to_conv2d_12_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_6_to_conv2d_12_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_6_to_conv2d_8_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_6_to_conv2d_8_syn, inSynconv2d_6_to_conv2d_8_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_6_to_conv2d_8_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_6_to_conv2d_8_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_7_to_conv2d_10_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_7_to_conv2d_10_syn, inSynconv2d_7_to_conv2d_10_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_7_to_conv2d_10_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_7_to_conv2d_10_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_7_to_conv2d_12_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_7_to_conv2d_12_syn, inSynconv2d_7_to_conv2d_12_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_7_to_conv2d_12_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_7_to_conv2d_12_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_7_to_conv2d_8_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_7_to_conv2d_8_syn, inSynconv2d_7_to_conv2d_8_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_7_to_conv2d_8_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_7_to_conv2d_8_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_8_to_conv2d_9_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_8_to_conv2d_9_syn, inSynconv2d_8_to_conv2d_9_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_8_to_conv2d_9_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_8_to_conv2d_9_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_9_to_conv2d_10_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_9_to_conv2d_10_syn, inSynconv2d_9_to_conv2d_10_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_9_to_conv2d_10_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_9_to_conv2d_10_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_9_to_conv2d_12_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_9_to_conv2d_12_syn, inSynconv2d_9_to_conv2d_12_syn, 2304 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_9_to_conv2d_12_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_9_to_conv2d_12_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_to_conv2d_1_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_to_conv2d_1_syn, inSynconv2d_to_conv2d_1_syn, 6400 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_to_conv2d_1_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_to_conv2d_1_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_to_conv2d_3_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_to_conv2d_3_syn, inSynconv2d_to_conv2d_3_syn, 6400 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_to_conv2d_3_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_to_conv2d_3_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_to_conv2d_5_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_to_conv2d_5_syn, inSynconv2d_to_conv2d_5_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_to_conv2d_5_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_to_conv2d_5_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_to_conv2d_7_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_to_conv2d_7_syn, inSynconv2d_to_conv2d_7_syn, 3200 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_to_conv2d_7_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_to_conv2d_7_synToDevice(uninitialisedOnly);
}

void pushinSyninput_1_to_conv2d_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSyninput_1_to_conv2d_syn, inSyninput_1_to_conv2d_syn, 65536 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushinput_1_to_conv2d_synStateToDevice(bool uninitialisedOnly) {
    pushinSyninput_1_to_conv2d_synToDevice(uninitialisedOnly);
}


// ------------------------------------------------------------------------
// copying things from device
// ------------------------------------------------------------------------
void pullconv2d_10_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_10_nrn, d_glbSpkCntconv2d_10_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_10_nrn, d_glbSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_10_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_10_nrn, d_glbSpkCntconv2d_10_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_10_nrn, d_glbSpkconv2d_10_nrn, glbSpkCntconv2d_10_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_10_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_10_nrn, d_Vmemconv2d_10_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_10_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_10_nrn, d_Vmemconv2d_10_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_10_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_10_nrn, d_nSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_10_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_10_nrn, d_nSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_10_nrnStateFromDevice() {
    pullVmemconv2d_10_nrnFromDevice();
    pullnSpkconv2d_10_nrnFromDevice();
}

void pullconv2d_11_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_11_nrn, d_glbSpkCntconv2d_11_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_11_nrn, d_glbSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_11_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_11_nrn, d_glbSpkCntconv2d_11_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_11_nrn, d_glbSpkconv2d_11_nrn, glbSpkCntconv2d_11_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_11_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_11_nrn, d_Vmemconv2d_11_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_11_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_11_nrn, d_Vmemconv2d_11_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_11_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_11_nrn, d_nSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_11_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_11_nrn, d_nSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_11_nrnStateFromDevice() {
    pullVmemconv2d_11_nrnFromDevice();
    pullnSpkconv2d_11_nrnFromDevice();
}

void pullconv2d_12_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_12_nrn, d_glbSpkCntconv2d_12_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_12_nrn, d_glbSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_12_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_12_nrn, d_glbSpkCntconv2d_12_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_12_nrn, d_glbSpkconv2d_12_nrn, glbSpkCntconv2d_12_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_12_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_12_nrn, d_Vmemconv2d_12_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_12_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_12_nrn, d_Vmemconv2d_12_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_12_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_12_nrn, d_nSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_12_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_12_nrn, d_nSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_12_nrnStateFromDevice() {
    pullVmemconv2d_12_nrnFromDevice();
    pullnSpkconv2d_12_nrnFromDevice();
}

void pullconv2d_13_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_13_nrn, d_glbSpkCntconv2d_13_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_13_nrn, d_glbSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_13_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_13_nrn, d_glbSpkCntconv2d_13_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_13_nrn, d_glbSpkconv2d_13_nrn, glbSpkCntconv2d_13_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_13_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_13_nrn, d_Vmemconv2d_13_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_13_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_13_nrn, d_Vmemconv2d_13_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_13_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_13_nrn, d_nSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_13_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_13_nrn, d_nSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_13_nrnStateFromDevice() {
    pullVmemconv2d_13_nrnFromDevice();
    pullnSpkconv2d_13_nrnFromDevice();
}

void pullconv2d_14_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_14_nrn, d_glbSpkCntconv2d_14_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_14_nrn, d_glbSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_14_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_14_nrn, d_glbSpkCntconv2d_14_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_14_nrn, d_glbSpkconv2d_14_nrn, glbSpkCntconv2d_14_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_14_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_14_nrn, d_Vmemconv2d_14_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_14_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_14_nrn, d_Vmemconv2d_14_nrn, 2304 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_14_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_14_nrn, d_nSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_14_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_14_nrn, d_nSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_14_nrnStateFromDevice() {
    pullVmemconv2d_14_nrnFromDevice();
    pullnSpkconv2d_14_nrnFromDevice();
}

void pullconv2d_15_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_15_nrn, d_glbSpkCntconv2d_15_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_15_nrn, d_glbSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_15_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_15_nrn, d_glbSpkCntconv2d_15_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_15_nrn, d_glbSpkconv2d_15_nrn, glbSpkCntconv2d_15_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_15_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_15_nrn, d_Vmemconv2d_15_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_15_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_15_nrn, d_Vmemconv2d_15_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_15_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_15_nrn, d_nSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_15_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_15_nrn, d_nSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_15_nrnStateFromDevice() {
    pullVmemconv2d_15_nrnFromDevice();
    pullnSpkconv2d_15_nrnFromDevice();
}

void pullconv2d_16_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_16_nrn, d_glbSpkCntconv2d_16_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_16_nrn, d_glbSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_16_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_16_nrn, d_glbSpkCntconv2d_16_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_16_nrn, d_glbSpkconv2d_16_nrn, glbSpkCntconv2d_16_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_16_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_16_nrn, d_Vmemconv2d_16_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_16_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_16_nrn, d_Vmemconv2d_16_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_16_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_16_nrn, d_nSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_16_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_16_nrn, d_nSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_16_nrnStateFromDevice() {
    pullVmemconv2d_16_nrnFromDevice();
    pullnSpkconv2d_16_nrnFromDevice();
}

void pullconv2d_17_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_17_nrn, d_glbSpkCntconv2d_17_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_17_nrn, d_glbSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_17_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_17_nrn, d_glbSpkCntconv2d_17_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_17_nrn, d_glbSpkconv2d_17_nrn, glbSpkCntconv2d_17_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_17_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_17_nrn, d_Vmemconv2d_17_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_17_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_17_nrn, d_Vmemconv2d_17_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_17_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_17_nrn, d_nSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_17_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_17_nrn, d_nSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_17_nrnStateFromDevice() {
    pullVmemconv2d_17_nrnFromDevice();
    pullnSpkconv2d_17_nrnFromDevice();
}

void pullconv2d_18_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_18_nrn, d_glbSpkCntconv2d_18_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_18_nrn, d_glbSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_18_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_18_nrn, d_glbSpkCntconv2d_18_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_18_nrn, d_glbSpkconv2d_18_nrn, glbSpkCntconv2d_18_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_18_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_18_nrn, d_Vmemconv2d_18_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_18_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_18_nrn, d_Vmemconv2d_18_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_18_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_18_nrn, d_nSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_18_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_18_nrn, d_nSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_18_nrnStateFromDevice() {
    pullVmemconv2d_18_nrnFromDevice();
    pullnSpkconv2d_18_nrnFromDevice();
}

void pullconv2d_19_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_19_nrn, d_glbSpkCntconv2d_19_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_19_nrn, d_glbSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_19_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_19_nrn, d_glbSpkCntconv2d_19_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_19_nrn, d_glbSpkconv2d_19_nrn, glbSpkCntconv2d_19_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_19_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_19_nrn, d_Vmemconv2d_19_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_19_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_19_nrn, d_Vmemconv2d_19_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_19_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_19_nrn, d_nSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_19_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_19_nrn, d_nSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_19_nrnStateFromDevice() {
    pullVmemconv2d_19_nrnFromDevice();
    pullnSpkconv2d_19_nrnFromDevice();
}

void pullconv2d_1_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_1_nrn, d_glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_1_nrn, d_glbSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_1_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_1_nrn, d_glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_1_nrn, d_glbSpkconv2d_1_nrn, glbSpkCntconv2d_1_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_1_nrn, d_Vmemconv2d_1_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_1_nrn, d_Vmemconv2d_1_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_1_nrn, d_nSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_1_nrn, d_nSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_1_nrnStateFromDevice() {
    pullVmemconv2d_1_nrnFromDevice();
    pullnSpkconv2d_1_nrnFromDevice();
}

void pullconv2d_2_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_2_nrn, d_glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_2_nrn, d_glbSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_2_nrn, d_glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_2_nrn, d_glbSpkconv2d_2_nrn, glbSpkCntconv2d_2_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_2_nrn, d_Vmemconv2d_2_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_2_nrn, d_Vmemconv2d_2_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_2_nrn, d_nSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_2_nrn, d_nSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_nrnStateFromDevice() {
    pullVmemconv2d_2_nrnFromDevice();
    pullnSpkconv2d_2_nrnFromDevice();
}

void pullconv2d_3_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_3_nrn, d_glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_3_nrn, d_glbSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_3_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_3_nrn, d_glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_3_nrn, d_glbSpkconv2d_3_nrn, glbSpkCntconv2d_3_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_3_nrn, d_Vmemconv2d_3_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_3_nrn, d_Vmemconv2d_3_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_3_nrn, d_nSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_3_nrn, d_nSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_3_nrnStateFromDevice() {
    pullVmemconv2d_3_nrnFromDevice();
    pullnSpkconv2d_3_nrnFromDevice();
}

void pullconv2d_4_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_4_nrn, d_glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_4_nrn, d_glbSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_4_nrn, d_glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_4_nrn, d_glbSpkconv2d_4_nrn, glbSpkCntconv2d_4_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_4_nrn, d_Vmemconv2d_4_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_4_nrn, d_Vmemconv2d_4_nrn, 6400 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_4_nrn, d_nSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_4_nrn, d_nSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_nrnStateFromDevice() {
    pullVmemconv2d_4_nrnFromDevice();
    pullnSpkconv2d_4_nrnFromDevice();
}

void pullconv2d_5_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_5_nrn, d_glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_5_nrn, d_glbSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_5_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_5_nrn, d_glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_5_nrn, d_glbSpkconv2d_5_nrn, glbSpkCntconv2d_5_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_5_nrn, d_Vmemconv2d_5_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_5_nrn, d_Vmemconv2d_5_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_5_nrn, d_nSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_5_nrn, d_nSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_5_nrnStateFromDevice() {
    pullVmemconv2d_5_nrnFromDevice();
    pullnSpkconv2d_5_nrnFromDevice();
}

void pullconv2d_6_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_6_nrn, d_glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_6_nrn, d_glbSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_6_nrn, d_glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_6_nrn, d_glbSpkconv2d_6_nrn, glbSpkCntconv2d_6_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_6_nrn, d_Vmemconv2d_6_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_6_nrn, d_Vmemconv2d_6_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_6_nrn, d_nSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_6_nrn, d_nSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_nrnStateFromDevice() {
    pullVmemconv2d_6_nrnFromDevice();
    pullnSpkconv2d_6_nrnFromDevice();
}

void pullconv2d_7_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_7_nrn, d_glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_7_nrn, d_glbSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_7_nrn, d_glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_7_nrn, d_glbSpkconv2d_7_nrn, glbSpkCntconv2d_7_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_7_nrn, d_Vmemconv2d_7_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_7_nrn, d_Vmemconv2d_7_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_7_nrn, d_nSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_7_nrn, d_nSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_nrnStateFromDevice() {
    pullVmemconv2d_7_nrnFromDevice();
    pullnSpkconv2d_7_nrnFromDevice();
}

void pullconv2d_8_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_8_nrn, d_glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_8_nrn, d_glbSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_8_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_8_nrn, d_glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_8_nrn, d_glbSpkconv2d_8_nrn, glbSpkCntconv2d_8_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_8_nrn, d_Vmemconv2d_8_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_8_nrn, d_Vmemconv2d_8_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_8_nrn, d_nSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_8_nrn, d_nSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_8_nrnStateFromDevice() {
    pullVmemconv2d_8_nrnFromDevice();
    pullnSpkconv2d_8_nrnFromDevice();
}

void pullconv2d_9_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_9_nrn, d_glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_9_nrn, d_glbSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_9_nrn, d_glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_9_nrn, d_glbSpkconv2d_9_nrn, glbSpkCntconv2d_9_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_9_nrn, d_Vmemconv2d_9_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_9_nrn, d_Vmemconv2d_9_nrn, 3200 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_9_nrn, d_nSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_9_nrn, d_nSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_nrnStateFromDevice() {
    pullVmemconv2d_9_nrnFromDevice();
    pullnSpkconv2d_9_nrnFromDevice();
}

void pullconv2d_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_nrn, d_glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_nrn, d_glbSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_nrn, d_glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_nrn, d_glbSpkconv2d_nrn, glbSpkCntconv2d_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_nrn, d_Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_nrn, d_Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_nrn, d_nSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkconv2d_nrn, d_nSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_nrnStateFromDevice() {
    pullVmemconv2d_nrnFromDevice();
    pullnSpkconv2d_nrnFromDevice();
}

void pulldense_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_nrn, d_glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_nrn, d_glbSpkdense_nrn, 10 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pulldense_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_nrn, d_glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_nrn, d_glbSpkdense_nrn, glbSpkCntdense_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullVmemdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_nrn, d_Vmemdense_nrn, 10 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_nrn, d_Vmemdense_nrn, 10 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullnSpkdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkdense_nrn, d_nSpkdense_nrn, 10 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullCurrentnSpkdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(nSpkdense_nrn, d_nSpkdense_nrn, 10 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pulldense_nrnStateFromDevice() {
    pullVmemdense_nrnFromDevice();
    pullnSpkdense_nrnFromDevice();
}

void pullinput_1_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntinput_1_nrn, d_glbSpkCntinput_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkinput_1_nrn, d_glbSpkinput_1_nrn, 3072 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullinput_1_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntinput_1_nrn, d_glbSpkCntinput_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkinput_1_nrn, d_glbSpkinput_1_nrn, glbSpkCntinput_1_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullinputinput_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inputinput_1_nrn, d_inputinput_1_nrn, 3072 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentinputinput_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inputinput_1_nrn, d_inputinput_1_nrn, 3072 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinput_1_nrnStateFromDevice() {
    pullinputinput_1_nrnFromDevice();
}

void pullinSynconv2d_10_to_conv2d_11_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_10_to_conv2d_11_syn, d_inSynconv2d_10_to_conv2d_11_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_10_to_conv2d_11_synStateFromDevice() {
    pullinSynconv2d_10_to_conv2d_11_synFromDevice();
}

void pullinSynconv2d_11_to_conv2d_13_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_11_to_conv2d_13_syn, d_inSynconv2d_11_to_conv2d_13_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_11_to_conv2d_13_synStateFromDevice() {
    pullinSynconv2d_11_to_conv2d_13_synFromDevice();
}

void pullinSynconv2d_11_to_conv2d_15_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_11_to_conv2d_15_syn, d_inSynconv2d_11_to_conv2d_15_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_11_to_conv2d_15_synStateFromDevice() {
    pullinSynconv2d_11_to_conv2d_15_synFromDevice();
}

void pullinSynconv2d_11_to_conv2d_17_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_11_to_conv2d_17_syn, d_inSynconv2d_11_to_conv2d_17_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_11_to_conv2d_17_synStateFromDevice() {
    pullinSynconv2d_11_to_conv2d_17_synFromDevice();
}

void pullinSynconv2d_12_to_conv2d_13_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_12_to_conv2d_13_syn, d_inSynconv2d_12_to_conv2d_13_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_12_to_conv2d_13_synStateFromDevice() {
    pullinSynconv2d_12_to_conv2d_13_synFromDevice();
}

void pullinSynconv2d_12_to_conv2d_15_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_12_to_conv2d_15_syn, d_inSynconv2d_12_to_conv2d_15_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_12_to_conv2d_15_synStateFromDevice() {
    pullinSynconv2d_12_to_conv2d_15_synFromDevice();
}

void pullinSynconv2d_12_to_conv2d_17_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_12_to_conv2d_17_syn, d_inSynconv2d_12_to_conv2d_17_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_12_to_conv2d_17_synStateFromDevice() {
    pullinSynconv2d_12_to_conv2d_17_synFromDevice();
}

void pullinSynconv2d_13_to_conv2d_14_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_13_to_conv2d_14_syn, d_inSynconv2d_13_to_conv2d_14_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_13_to_conv2d_14_synStateFromDevice() {
    pullinSynconv2d_13_to_conv2d_14_synFromDevice();
}

void pullinSynconv2d_14_to_conv2d_15_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_14_to_conv2d_15_syn, d_inSynconv2d_14_to_conv2d_15_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_14_to_conv2d_15_synStateFromDevice() {
    pullinSynconv2d_14_to_conv2d_15_synFromDevice();
}

void pullinSynconv2d_14_to_conv2d_17_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_14_to_conv2d_17_syn, d_inSynconv2d_14_to_conv2d_17_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_14_to_conv2d_17_synStateFromDevice() {
    pullinSynconv2d_14_to_conv2d_17_synFromDevice();
}

void pullinSynconv2d_15_to_conv2d_16_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_15_to_conv2d_16_syn, d_inSynconv2d_15_to_conv2d_16_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_15_to_conv2d_16_synStateFromDevice() {
    pullinSynconv2d_15_to_conv2d_16_synFromDevice();
}

void pullinSynconv2d_16_to_conv2d_18_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_16_to_conv2d_18_syn, d_inSynconv2d_16_to_conv2d_18_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_16_to_conv2d_18_synStateFromDevice() {
    pullinSynconv2d_16_to_conv2d_18_synFromDevice();
}

void pullgconv2d_16_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(gconv2d_16_to_dense_syn, d_gconv2d_16_to_dense_syn, 20480 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinSynconv2d_16_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_16_to_dense_syn, d_inSynconv2d_16_to_dense_syn, 10 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_16_to_dense_synStateFromDevice() {
    pullgconv2d_16_to_dense_synFromDevice();
    pullinSynconv2d_16_to_dense_synFromDevice();
}

void pullinSynconv2d_17_to_conv2d_18_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_17_to_conv2d_18_syn, d_inSynconv2d_17_to_conv2d_18_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_17_to_conv2d_18_synStateFromDevice() {
    pullinSynconv2d_17_to_conv2d_18_synFromDevice();
}

void pullgconv2d_17_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(gconv2d_17_to_dense_syn, d_gconv2d_17_to_dense_syn, 20480 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinSynconv2d_17_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_17_to_dense_syn, d_inSynconv2d_17_to_dense_syn, 10 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_17_to_dense_synStateFromDevice() {
    pullgconv2d_17_to_dense_synFromDevice();
    pullinSynconv2d_17_to_dense_synFromDevice();
}

void pullinSynconv2d_18_to_conv2d_19_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_18_to_conv2d_19_syn, d_inSynconv2d_18_to_conv2d_19_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_18_to_conv2d_19_synStateFromDevice() {
    pullinSynconv2d_18_to_conv2d_19_synFromDevice();
}

void pullgconv2d_19_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(gconv2d_19_to_dense_syn, d_gconv2d_19_to_dense_syn, 20480 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinSynconv2d_19_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_19_to_dense_syn, d_inSynconv2d_19_to_dense_syn, 10 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_19_to_dense_synStateFromDevice() {
    pullgconv2d_19_to_dense_synFromDevice();
    pullinSynconv2d_19_to_dense_synFromDevice();
}

void pullinSynconv2d_1_to_conv2d_2_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_1_to_conv2d_2_syn, d_inSynconv2d_1_to_conv2d_2_syn, 6400 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_1_to_conv2d_2_synStateFromDevice() {
    pullinSynconv2d_1_to_conv2d_2_synFromDevice();
}

void pullinSynconv2d_2_to_conv2d_3_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_2_to_conv2d_3_syn, d_inSynconv2d_2_to_conv2d_3_syn, 6400 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_to_conv2d_3_synStateFromDevice() {
    pullinSynconv2d_2_to_conv2d_3_synFromDevice();
}

void pullinSynconv2d_2_to_conv2d_5_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_2_to_conv2d_5_syn, d_inSynconv2d_2_to_conv2d_5_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_to_conv2d_5_synStateFromDevice() {
    pullinSynconv2d_2_to_conv2d_5_synFromDevice();
}

void pullinSynconv2d_2_to_conv2d_7_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_2_to_conv2d_7_syn, d_inSynconv2d_2_to_conv2d_7_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_to_conv2d_7_synStateFromDevice() {
    pullinSynconv2d_2_to_conv2d_7_synFromDevice();
}

void pullinSynconv2d_3_to_conv2d_4_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_3_to_conv2d_4_syn, d_inSynconv2d_3_to_conv2d_4_syn, 6400 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_3_to_conv2d_4_synStateFromDevice() {
    pullinSynconv2d_3_to_conv2d_4_synFromDevice();
}

void pullinSynconv2d_4_to_conv2d_5_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_4_to_conv2d_5_syn, d_inSynconv2d_4_to_conv2d_5_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_to_conv2d_5_synStateFromDevice() {
    pullinSynconv2d_4_to_conv2d_5_synFromDevice();
}

void pullinSynconv2d_4_to_conv2d_7_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_4_to_conv2d_7_syn, d_inSynconv2d_4_to_conv2d_7_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_to_conv2d_7_synStateFromDevice() {
    pullinSynconv2d_4_to_conv2d_7_synFromDevice();
}

void pullinSynconv2d_5_to_conv2d_6_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_5_to_conv2d_6_syn, d_inSynconv2d_5_to_conv2d_6_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_5_to_conv2d_6_synStateFromDevice() {
    pullinSynconv2d_5_to_conv2d_6_synFromDevice();
}

void pullinSynconv2d_6_to_conv2d_10_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_6_to_conv2d_10_syn, d_inSynconv2d_6_to_conv2d_10_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_to_conv2d_10_synStateFromDevice() {
    pullinSynconv2d_6_to_conv2d_10_synFromDevice();
}

void pullinSynconv2d_6_to_conv2d_12_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_6_to_conv2d_12_syn, d_inSynconv2d_6_to_conv2d_12_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_to_conv2d_12_synStateFromDevice() {
    pullinSynconv2d_6_to_conv2d_12_synFromDevice();
}

void pullinSynconv2d_6_to_conv2d_8_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_6_to_conv2d_8_syn, d_inSynconv2d_6_to_conv2d_8_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_to_conv2d_8_synStateFromDevice() {
    pullinSynconv2d_6_to_conv2d_8_synFromDevice();
}

void pullinSynconv2d_7_to_conv2d_10_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_7_to_conv2d_10_syn, d_inSynconv2d_7_to_conv2d_10_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_to_conv2d_10_synStateFromDevice() {
    pullinSynconv2d_7_to_conv2d_10_synFromDevice();
}

void pullinSynconv2d_7_to_conv2d_12_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_7_to_conv2d_12_syn, d_inSynconv2d_7_to_conv2d_12_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_to_conv2d_12_synStateFromDevice() {
    pullinSynconv2d_7_to_conv2d_12_synFromDevice();
}

void pullinSynconv2d_7_to_conv2d_8_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_7_to_conv2d_8_syn, d_inSynconv2d_7_to_conv2d_8_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_to_conv2d_8_synStateFromDevice() {
    pullinSynconv2d_7_to_conv2d_8_synFromDevice();
}

void pullinSynconv2d_8_to_conv2d_9_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_8_to_conv2d_9_syn, d_inSynconv2d_8_to_conv2d_9_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_8_to_conv2d_9_synStateFromDevice() {
    pullinSynconv2d_8_to_conv2d_9_synFromDevice();
}

void pullinSynconv2d_9_to_conv2d_10_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_9_to_conv2d_10_syn, d_inSynconv2d_9_to_conv2d_10_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_to_conv2d_10_synStateFromDevice() {
    pullinSynconv2d_9_to_conv2d_10_synFromDevice();
}

void pullinSynconv2d_9_to_conv2d_12_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_9_to_conv2d_12_syn, d_inSynconv2d_9_to_conv2d_12_syn, 2304 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_to_conv2d_12_synStateFromDevice() {
    pullinSynconv2d_9_to_conv2d_12_synFromDevice();
}

void pullinSynconv2d_to_conv2d_1_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_to_conv2d_1_syn, d_inSynconv2d_to_conv2d_1_syn, 6400 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_to_conv2d_1_synStateFromDevice() {
    pullinSynconv2d_to_conv2d_1_synFromDevice();
}

void pullinSynconv2d_to_conv2d_3_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_to_conv2d_3_syn, d_inSynconv2d_to_conv2d_3_syn, 6400 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_to_conv2d_3_synStateFromDevice() {
    pullinSynconv2d_to_conv2d_3_synFromDevice();
}

void pullinSynconv2d_to_conv2d_5_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_to_conv2d_5_syn, d_inSynconv2d_to_conv2d_5_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_to_conv2d_5_synStateFromDevice() {
    pullinSynconv2d_to_conv2d_5_synFromDevice();
}

void pullinSynconv2d_to_conv2d_7_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_to_conv2d_7_syn, d_inSynconv2d_to_conv2d_7_syn, 3200 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_to_conv2d_7_synStateFromDevice() {
    pullinSynconv2d_to_conv2d_7_synFromDevice();
}

void pullinSyninput_1_to_conv2d_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSyninput_1_to_conv2d_syn, d_inSyninput_1_to_conv2d_syn, 65536 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullinput_1_to_conv2d_synStateFromDevice() {
    pullinSyninput_1_to_conv2d_synFromDevice();
}


// ------------------------------------------------------------------------
// helper getter functions
// ------------------------------------------------------------------------
unsigned int* getconv2d_10_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_10_nrn);
}

unsigned int& getconv2d_10_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_10_nrn[0];
}

scalar* getCurrentVmemconv2d_10_nrn(unsigned int batch) {
    return Vmemconv2d_10_nrn;
}

unsigned int* getCurrentnSpkconv2d_10_nrn(unsigned int batch) {
    return nSpkconv2d_10_nrn;
}

unsigned int* getconv2d_11_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_11_nrn);
}

unsigned int& getconv2d_11_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_11_nrn[0];
}

scalar* getCurrentVmemconv2d_11_nrn(unsigned int batch) {
    return Vmemconv2d_11_nrn;
}

unsigned int* getCurrentnSpkconv2d_11_nrn(unsigned int batch) {
    return nSpkconv2d_11_nrn;
}

unsigned int* getconv2d_12_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_12_nrn);
}

unsigned int& getconv2d_12_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_12_nrn[0];
}

scalar* getCurrentVmemconv2d_12_nrn(unsigned int batch) {
    return Vmemconv2d_12_nrn;
}

unsigned int* getCurrentnSpkconv2d_12_nrn(unsigned int batch) {
    return nSpkconv2d_12_nrn;
}

unsigned int* getconv2d_13_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_13_nrn);
}

unsigned int& getconv2d_13_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_13_nrn[0];
}

scalar* getCurrentVmemconv2d_13_nrn(unsigned int batch) {
    return Vmemconv2d_13_nrn;
}

unsigned int* getCurrentnSpkconv2d_13_nrn(unsigned int batch) {
    return nSpkconv2d_13_nrn;
}

unsigned int* getconv2d_14_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_14_nrn);
}

unsigned int& getconv2d_14_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_14_nrn[0];
}

scalar* getCurrentVmemconv2d_14_nrn(unsigned int batch) {
    return Vmemconv2d_14_nrn;
}

unsigned int* getCurrentnSpkconv2d_14_nrn(unsigned int batch) {
    return nSpkconv2d_14_nrn;
}

unsigned int* getconv2d_15_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_15_nrn);
}

unsigned int& getconv2d_15_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_15_nrn[0];
}

scalar* getCurrentVmemconv2d_15_nrn(unsigned int batch) {
    return Vmemconv2d_15_nrn;
}

unsigned int* getCurrentnSpkconv2d_15_nrn(unsigned int batch) {
    return nSpkconv2d_15_nrn;
}

unsigned int* getconv2d_16_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_16_nrn);
}

unsigned int& getconv2d_16_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_16_nrn[0];
}

scalar* getCurrentVmemconv2d_16_nrn(unsigned int batch) {
    return Vmemconv2d_16_nrn;
}

unsigned int* getCurrentnSpkconv2d_16_nrn(unsigned int batch) {
    return nSpkconv2d_16_nrn;
}

unsigned int* getconv2d_17_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_17_nrn);
}

unsigned int& getconv2d_17_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_17_nrn[0];
}

scalar* getCurrentVmemconv2d_17_nrn(unsigned int batch) {
    return Vmemconv2d_17_nrn;
}

unsigned int* getCurrentnSpkconv2d_17_nrn(unsigned int batch) {
    return nSpkconv2d_17_nrn;
}

unsigned int* getconv2d_18_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_18_nrn);
}

unsigned int& getconv2d_18_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_18_nrn[0];
}

scalar* getCurrentVmemconv2d_18_nrn(unsigned int batch) {
    return Vmemconv2d_18_nrn;
}

unsigned int* getCurrentnSpkconv2d_18_nrn(unsigned int batch) {
    return nSpkconv2d_18_nrn;
}

unsigned int* getconv2d_19_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_19_nrn);
}

unsigned int& getconv2d_19_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_19_nrn[0];
}

scalar* getCurrentVmemconv2d_19_nrn(unsigned int batch) {
    return Vmemconv2d_19_nrn;
}

unsigned int* getCurrentnSpkconv2d_19_nrn(unsigned int batch) {
    return nSpkconv2d_19_nrn;
}

unsigned int* getconv2d_1_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_1_nrn);
}

unsigned int& getconv2d_1_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_1_nrn[0];
}

scalar* getCurrentVmemconv2d_1_nrn(unsigned int batch) {
    return Vmemconv2d_1_nrn;
}

unsigned int* getCurrentnSpkconv2d_1_nrn(unsigned int batch) {
    return nSpkconv2d_1_nrn;
}

unsigned int* getconv2d_2_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_2_nrn);
}

unsigned int& getconv2d_2_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_2_nrn[0];
}

scalar* getCurrentVmemconv2d_2_nrn(unsigned int batch) {
    return Vmemconv2d_2_nrn;
}

unsigned int* getCurrentnSpkconv2d_2_nrn(unsigned int batch) {
    return nSpkconv2d_2_nrn;
}

unsigned int* getconv2d_3_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_3_nrn);
}

unsigned int& getconv2d_3_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_3_nrn[0];
}

scalar* getCurrentVmemconv2d_3_nrn(unsigned int batch) {
    return Vmemconv2d_3_nrn;
}

unsigned int* getCurrentnSpkconv2d_3_nrn(unsigned int batch) {
    return nSpkconv2d_3_nrn;
}

unsigned int* getconv2d_4_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_4_nrn);
}

unsigned int& getconv2d_4_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_4_nrn[0];
}

scalar* getCurrentVmemconv2d_4_nrn(unsigned int batch) {
    return Vmemconv2d_4_nrn;
}

unsigned int* getCurrentnSpkconv2d_4_nrn(unsigned int batch) {
    return nSpkconv2d_4_nrn;
}

unsigned int* getconv2d_5_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_5_nrn);
}

unsigned int& getconv2d_5_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_5_nrn[0];
}

scalar* getCurrentVmemconv2d_5_nrn(unsigned int batch) {
    return Vmemconv2d_5_nrn;
}

unsigned int* getCurrentnSpkconv2d_5_nrn(unsigned int batch) {
    return nSpkconv2d_5_nrn;
}

unsigned int* getconv2d_6_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_6_nrn);
}

unsigned int& getconv2d_6_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_6_nrn[0];
}

scalar* getCurrentVmemconv2d_6_nrn(unsigned int batch) {
    return Vmemconv2d_6_nrn;
}

unsigned int* getCurrentnSpkconv2d_6_nrn(unsigned int batch) {
    return nSpkconv2d_6_nrn;
}

unsigned int* getconv2d_7_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_7_nrn);
}

unsigned int& getconv2d_7_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_7_nrn[0];
}

scalar* getCurrentVmemconv2d_7_nrn(unsigned int batch) {
    return Vmemconv2d_7_nrn;
}

unsigned int* getCurrentnSpkconv2d_7_nrn(unsigned int batch) {
    return nSpkconv2d_7_nrn;
}

unsigned int* getconv2d_8_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_8_nrn);
}

unsigned int& getconv2d_8_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_8_nrn[0];
}

scalar* getCurrentVmemconv2d_8_nrn(unsigned int batch) {
    return Vmemconv2d_8_nrn;
}

unsigned int* getCurrentnSpkconv2d_8_nrn(unsigned int batch) {
    return nSpkconv2d_8_nrn;
}

unsigned int* getconv2d_9_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_9_nrn);
}

unsigned int& getconv2d_9_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_9_nrn[0];
}

scalar* getCurrentVmemconv2d_9_nrn(unsigned int batch) {
    return Vmemconv2d_9_nrn;
}

unsigned int* getCurrentnSpkconv2d_9_nrn(unsigned int batch) {
    return nSpkconv2d_9_nrn;
}

unsigned int* getconv2d_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_nrn);
}

unsigned int& getconv2d_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_nrn[0];
}

scalar* getCurrentVmemconv2d_nrn(unsigned int batch) {
    return Vmemconv2d_nrn;
}

unsigned int* getCurrentnSpkconv2d_nrn(unsigned int batch) {
    return nSpkconv2d_nrn;
}

unsigned int* getdense_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkdense_nrn);
}

unsigned int& getdense_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntdense_nrn[0];
}

scalar* getCurrentVmemdense_nrn(unsigned int batch) {
    return Vmemdense_nrn;
}

unsigned int* getCurrentnSpkdense_nrn(unsigned int batch) {
    return nSpkdense_nrn;
}

unsigned int* getinput_1_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkinput_1_nrn);
}

unsigned int& getinput_1_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntinput_1_nrn[0];
}

scalar* getCurrentinputinput_1_nrn(unsigned int batch) {
    return inputinput_1_nrn;
}


void copyStateToDevice(bool uninitialisedOnly) {
    pushconv2d_10_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_11_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_12_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_13_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_14_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_15_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_16_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_17_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_18_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_19_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_1_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_2_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_3_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_4_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_5_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_6_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_7_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_8_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_9_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_nrnStateToDevice(uninitialisedOnly);
    pushdense_nrnStateToDevice(uninitialisedOnly);
    pushinput_1_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_10_to_conv2d_11_synStateToDevice(uninitialisedOnly);
    pushconv2d_11_to_conv2d_13_synStateToDevice(uninitialisedOnly);
    pushconv2d_11_to_conv2d_15_synStateToDevice(uninitialisedOnly);
    pushconv2d_11_to_conv2d_17_synStateToDevice(uninitialisedOnly);
    pushconv2d_12_to_conv2d_13_synStateToDevice(uninitialisedOnly);
    pushconv2d_12_to_conv2d_15_synStateToDevice(uninitialisedOnly);
    pushconv2d_12_to_conv2d_17_synStateToDevice(uninitialisedOnly);
    pushconv2d_13_to_conv2d_14_synStateToDevice(uninitialisedOnly);
    pushconv2d_14_to_conv2d_15_synStateToDevice(uninitialisedOnly);
    pushconv2d_14_to_conv2d_17_synStateToDevice(uninitialisedOnly);
    pushconv2d_15_to_conv2d_16_synStateToDevice(uninitialisedOnly);
    pushconv2d_16_to_conv2d_18_synStateToDevice(uninitialisedOnly);
    pushconv2d_16_to_dense_synStateToDevice(uninitialisedOnly);
    pushconv2d_17_to_conv2d_18_synStateToDevice(uninitialisedOnly);
    pushconv2d_17_to_dense_synStateToDevice(uninitialisedOnly);
    pushconv2d_18_to_conv2d_19_synStateToDevice(uninitialisedOnly);
    pushconv2d_19_to_dense_synStateToDevice(uninitialisedOnly);
    pushconv2d_1_to_conv2d_2_synStateToDevice(uninitialisedOnly);
    pushconv2d_2_to_conv2d_3_synStateToDevice(uninitialisedOnly);
    pushconv2d_2_to_conv2d_5_synStateToDevice(uninitialisedOnly);
    pushconv2d_2_to_conv2d_7_synStateToDevice(uninitialisedOnly);
    pushconv2d_3_to_conv2d_4_synStateToDevice(uninitialisedOnly);
    pushconv2d_4_to_conv2d_5_synStateToDevice(uninitialisedOnly);
    pushconv2d_4_to_conv2d_7_synStateToDevice(uninitialisedOnly);
    pushconv2d_5_to_conv2d_6_synStateToDevice(uninitialisedOnly);
    pushconv2d_6_to_conv2d_10_synStateToDevice(uninitialisedOnly);
    pushconv2d_6_to_conv2d_12_synStateToDevice(uninitialisedOnly);
    pushconv2d_6_to_conv2d_8_synStateToDevice(uninitialisedOnly);
    pushconv2d_7_to_conv2d_10_synStateToDevice(uninitialisedOnly);
    pushconv2d_7_to_conv2d_12_synStateToDevice(uninitialisedOnly);
    pushconv2d_7_to_conv2d_8_synStateToDevice(uninitialisedOnly);
    pushconv2d_8_to_conv2d_9_synStateToDevice(uninitialisedOnly);
    pushconv2d_9_to_conv2d_10_synStateToDevice(uninitialisedOnly);
    pushconv2d_9_to_conv2d_12_synStateToDevice(uninitialisedOnly);
    pushconv2d_to_conv2d_1_synStateToDevice(uninitialisedOnly);
    pushconv2d_to_conv2d_3_synStateToDevice(uninitialisedOnly);
    pushconv2d_to_conv2d_5_synStateToDevice(uninitialisedOnly);
    pushconv2d_to_conv2d_7_synStateToDevice(uninitialisedOnly);
    pushinput_1_to_conv2d_synStateToDevice(uninitialisedOnly);
}

void copyConnectivityToDevice(bool uninitialisedOnly) {
}

void copyStateFromDevice() {
    pullconv2d_10_nrnStateFromDevice();
    pullconv2d_11_nrnStateFromDevice();
    pullconv2d_12_nrnStateFromDevice();
    pullconv2d_13_nrnStateFromDevice();
    pullconv2d_14_nrnStateFromDevice();
    pullconv2d_15_nrnStateFromDevice();
    pullconv2d_16_nrnStateFromDevice();
    pullconv2d_17_nrnStateFromDevice();
    pullconv2d_18_nrnStateFromDevice();
    pullconv2d_19_nrnStateFromDevice();
    pullconv2d_1_nrnStateFromDevice();
    pullconv2d_2_nrnStateFromDevice();
    pullconv2d_3_nrnStateFromDevice();
    pullconv2d_4_nrnStateFromDevice();
    pullconv2d_5_nrnStateFromDevice();
    pullconv2d_6_nrnStateFromDevice();
    pullconv2d_7_nrnStateFromDevice();
    pullconv2d_8_nrnStateFromDevice();
    pullconv2d_9_nrnStateFromDevice();
    pullconv2d_nrnStateFromDevice();
    pulldense_nrnStateFromDevice();
    pullinput_1_nrnStateFromDevice();
    pullconv2d_10_to_conv2d_11_synStateFromDevice();
    pullconv2d_11_to_conv2d_13_synStateFromDevice();
    pullconv2d_11_to_conv2d_15_synStateFromDevice();
    pullconv2d_11_to_conv2d_17_synStateFromDevice();
    pullconv2d_12_to_conv2d_13_synStateFromDevice();
    pullconv2d_12_to_conv2d_15_synStateFromDevice();
    pullconv2d_12_to_conv2d_17_synStateFromDevice();
    pullconv2d_13_to_conv2d_14_synStateFromDevice();
    pullconv2d_14_to_conv2d_15_synStateFromDevice();
    pullconv2d_14_to_conv2d_17_synStateFromDevice();
    pullconv2d_15_to_conv2d_16_synStateFromDevice();
    pullconv2d_16_to_conv2d_18_synStateFromDevice();
    pullconv2d_16_to_dense_synStateFromDevice();
    pullconv2d_17_to_conv2d_18_synStateFromDevice();
    pullconv2d_17_to_dense_synStateFromDevice();
    pullconv2d_18_to_conv2d_19_synStateFromDevice();
    pullconv2d_19_to_dense_synStateFromDevice();
    pullconv2d_1_to_conv2d_2_synStateFromDevice();
    pullconv2d_2_to_conv2d_3_synStateFromDevice();
    pullconv2d_2_to_conv2d_5_synStateFromDevice();
    pullconv2d_2_to_conv2d_7_synStateFromDevice();
    pullconv2d_3_to_conv2d_4_synStateFromDevice();
    pullconv2d_4_to_conv2d_5_synStateFromDevice();
    pullconv2d_4_to_conv2d_7_synStateFromDevice();
    pullconv2d_5_to_conv2d_6_synStateFromDevice();
    pullconv2d_6_to_conv2d_10_synStateFromDevice();
    pullconv2d_6_to_conv2d_12_synStateFromDevice();
    pullconv2d_6_to_conv2d_8_synStateFromDevice();
    pullconv2d_7_to_conv2d_10_synStateFromDevice();
    pullconv2d_7_to_conv2d_12_synStateFromDevice();
    pullconv2d_7_to_conv2d_8_synStateFromDevice();
    pullconv2d_8_to_conv2d_9_synStateFromDevice();
    pullconv2d_9_to_conv2d_10_synStateFromDevice();
    pullconv2d_9_to_conv2d_12_synStateFromDevice();
    pullconv2d_to_conv2d_1_synStateFromDevice();
    pullconv2d_to_conv2d_3_synStateFromDevice();
    pullconv2d_to_conv2d_5_synStateFromDevice();
    pullconv2d_to_conv2d_7_synStateFromDevice();
    pullinput_1_to_conv2d_synStateFromDevice();
}

void copyCurrentSpikesFromDevice() {
    pullconv2d_10_nrnCurrentSpikesFromDevice();
    pullconv2d_11_nrnCurrentSpikesFromDevice();
    pullconv2d_12_nrnCurrentSpikesFromDevice();
    pullconv2d_13_nrnCurrentSpikesFromDevice();
    pullconv2d_14_nrnCurrentSpikesFromDevice();
    pullconv2d_15_nrnCurrentSpikesFromDevice();
    pullconv2d_16_nrnCurrentSpikesFromDevice();
    pullconv2d_17_nrnCurrentSpikesFromDevice();
    pullconv2d_18_nrnCurrentSpikesFromDevice();
    pullconv2d_19_nrnCurrentSpikesFromDevice();
    pullconv2d_1_nrnCurrentSpikesFromDevice();
    pullconv2d_2_nrnCurrentSpikesFromDevice();
    pullconv2d_3_nrnCurrentSpikesFromDevice();
    pullconv2d_4_nrnCurrentSpikesFromDevice();
    pullconv2d_5_nrnCurrentSpikesFromDevice();
    pullconv2d_6_nrnCurrentSpikesFromDevice();
    pullconv2d_7_nrnCurrentSpikesFromDevice();
    pullconv2d_8_nrnCurrentSpikesFromDevice();
    pullconv2d_9_nrnCurrentSpikesFromDevice();
    pullconv2d_nrnCurrentSpikesFromDevice();
    pulldense_nrnCurrentSpikesFromDevice();
    pullinput_1_nrnCurrentSpikesFromDevice();
}

void copyCurrentSpikeEventsFromDevice() {
}

void allocateMem() {
    int deviceID;
    CHECK_CUDA_ERRORS(cudaDeviceGetByPCIBusId(&deviceID, "0000:53:00.0"));
    CHECK_CUDA_ERRORS(cudaSetDevice(deviceID));
    
    // ------------------------------------------------------------------------
    // global variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // timers
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaEventCreate(&neuronUpdateStart));
    CHECK_CUDA_ERRORS(cudaEventCreate(&neuronUpdateStop));
    CHECK_CUDA_ERRORS(cudaEventCreate(&presynapticUpdateStart));
    CHECK_CUDA_ERRORS(cudaEventCreate(&presynapticUpdateStop));
    CHECK_CUDA_ERRORS(cudaEventCreate(&initStart));
    CHECK_CUDA_ERRORS(cudaEventCreate(&initStop));
    
    // ------------------------------------------------------------------------
    // local neuron groups
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_10_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_10_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_10_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_10_nrn, 2304 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_10_nrn, 2304 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_10_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_10_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_11_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_11_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_11_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_11_nrn, 2304 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_11_nrn, 2304 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_11_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_11_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_12_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_12_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_12_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_12_nrn, 2304 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_12_nrn, 2304 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_12_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_12_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_13_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_13_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_13_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_13_nrn, 2304 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_13_nrn, 2304 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_13_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_13_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_14_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_14_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_14_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_14_nrn, 2304 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_14_nrn, 2304 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_14_nrn, 2304 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_14_nrn, 2304 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_15_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_15_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_15_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_15_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_15_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_15_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_15_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_16_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_16_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_16_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_16_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_16_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_16_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_16_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_17_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_17_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_17_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_17_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_17_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_17_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_17_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_18_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_18_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_18_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_18_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_18_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_18_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_18_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_19_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_19_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_19_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_19_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_19_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_19_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_19_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_1_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_1_nrn, 6400 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_1_nrn, 6400 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_1_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_1_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_2_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_2_nrn, 6400 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_2_nrn, 6400 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_2_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_2_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_3_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_3_nrn, 6400 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_3_nrn, 6400 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_3_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_3_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_4_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_4_nrn, 6400 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_4_nrn, 6400 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_4_nrn, 6400 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_4_nrn, 6400 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_5_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_5_nrn, 3200 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_5_nrn, 3200 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_5_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_5_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_6_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_6_nrn, 3200 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_6_nrn, 3200 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_6_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_6_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_7_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_7_nrn, 3200 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_7_nrn, 3200 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_7_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_7_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_8_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_8_nrn, 3200 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_8_nrn, 3200 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_8_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_8_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_9_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_9_nrn, 3200 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_9_nrn, 3200 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_9_nrn, 3200 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_9_nrn, 3200 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_nrn, 65536 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_nrn, 65536 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkconv2d_nrn, 65536 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntdense_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkdense_nrn, 10 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkdense_nrn, 10 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemdense_nrn, 10 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemdense_nrn, 10 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&nSpkdense_nrn, 10 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_nSpkdense_nrn, 10 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntinput_1_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntinput_1_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkinput_1_nrn, 3072 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkinput_1_nrn, 3072 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_rnginput_1_nrn, 3072 * sizeof(curandState)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inputinput_1_nrn, 3072 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inputinput_1_nrn, 3072 * sizeof(scalar)));
    
    // ------------------------------------------------------------------------
    // custom update variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // postsynaptic variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_7_to_conv2d_10_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_7_to_conv2d_10_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_6_to_conv2d_10_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_6_to_conv2d_10_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_9_to_conv2d_10_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_9_to_conv2d_10_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_10_to_conv2d_11_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_10_to_conv2d_11_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_7_to_conv2d_12_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_7_to_conv2d_12_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_6_to_conv2d_12_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_6_to_conv2d_12_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_9_to_conv2d_12_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_9_to_conv2d_12_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_11_to_conv2d_13_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_11_to_conv2d_13_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_12_to_conv2d_13_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_12_to_conv2d_13_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_13_to_conv2d_14_syn, 2304 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_13_to_conv2d_14_syn, 2304 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_11_to_conv2d_15_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_11_to_conv2d_15_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_12_to_conv2d_15_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_12_to_conv2d_15_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_14_to_conv2d_15_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_14_to_conv2d_15_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_15_to_conv2d_16_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_15_to_conv2d_16_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_11_to_conv2d_17_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_11_to_conv2d_17_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_12_to_conv2d_17_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_12_to_conv2d_17_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_14_to_conv2d_17_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_14_to_conv2d_17_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_16_to_conv2d_18_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_16_to_conv2d_18_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_17_to_conv2d_18_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_17_to_conv2d_18_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_18_to_conv2d_19_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_18_to_conv2d_19_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_to_conv2d_1_syn, 6400 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_to_conv2d_1_syn, 6400 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_1_to_conv2d_2_syn, 6400 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_1_to_conv2d_2_syn, 6400 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_to_conv2d_3_syn, 6400 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_to_conv2d_3_syn, 6400 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_2_to_conv2d_3_syn, 6400 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_2_to_conv2d_3_syn, 6400 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_3_to_conv2d_4_syn, 6400 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_3_to_conv2d_4_syn, 6400 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_to_conv2d_5_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_to_conv2d_5_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_4_to_conv2d_5_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_4_to_conv2d_5_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_2_to_conv2d_5_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_2_to_conv2d_5_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_5_to_conv2d_6_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_5_to_conv2d_6_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_to_conv2d_7_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_to_conv2d_7_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_4_to_conv2d_7_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_4_to_conv2d_7_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_2_to_conv2d_7_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_2_to_conv2d_7_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_7_to_conv2d_8_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_7_to_conv2d_8_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_6_to_conv2d_8_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_6_to_conv2d_8_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_8_to_conv2d_9_syn, 3200 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_8_to_conv2d_9_syn, 3200 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSyninput_1_to_conv2d_syn, 65536 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSyninput_1_to_conv2d_syn, 65536 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_16_to_dense_syn, 10 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_16_to_dense_syn, 10 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_19_to_dense_syn, 10 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_19_to_dense_syn, 10 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_17_to_dense_syn, 10 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_17_to_dense_syn, 10 * sizeof(float)));
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaHostAlloc(&gconv2d_16_to_dense_syn, 20480 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_gconv2d_16_to_dense_syn, 20480 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&gconv2d_17_to_dense_syn, 20480 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_gconv2d_17_to_dense_syn, 20480 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&gconv2d_19_to_dense_syn, 20480 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_gconv2d_19_to_dense_syn, 20480 * sizeof(scalar)));
    
    pushMergedNeuronInitGroup0ToDevice(0, d_glbSpkCntinput_1_nrn, d_glbSpkinput_1_nrn, d_rnginput_1_nrn, d_inputinput_1_nrn, 3072);
    pushMergedNeuronInitGroup1ToDevice(0, d_glbSpkCntconv2d_13_nrn, d_glbSpkconv2d_13_nrn, d_Vmemconv2d_13_nrn, d_nSpkconv2d_13_nrn, d_inSynconv2d_11_to_conv2d_13_syn, d_inSynconv2d_12_to_conv2d_13_syn, 2304);
    pushMergedNeuronInitGroup1ToDevice(1, d_glbSpkCntconv2d_18_nrn, d_glbSpkconv2d_18_nrn, d_Vmemconv2d_18_nrn, d_nSpkconv2d_18_nrn, d_inSynconv2d_16_to_conv2d_18_syn, d_inSynconv2d_17_to_conv2d_18_syn, 2048);
    pushMergedNeuronInitGroup1ToDevice(2, d_glbSpkCntconv2d_3_nrn, d_glbSpkconv2d_3_nrn, d_Vmemconv2d_3_nrn, d_nSpkconv2d_3_nrn, d_inSynconv2d_to_conv2d_3_syn, d_inSynconv2d_2_to_conv2d_3_syn, 6400);
    pushMergedNeuronInitGroup1ToDevice(3, d_glbSpkCntconv2d_8_nrn, d_glbSpkconv2d_8_nrn, d_Vmemconv2d_8_nrn, d_nSpkconv2d_8_nrn, d_inSynconv2d_7_to_conv2d_8_syn, d_inSynconv2d_6_to_conv2d_8_syn, 3200);
    pushMergedNeuronInitGroup2ToDevice(0, d_glbSpkCntconv2d_10_nrn, d_glbSpkconv2d_10_nrn, d_Vmemconv2d_10_nrn, d_nSpkconv2d_10_nrn, d_inSynconv2d_7_to_conv2d_10_syn, d_inSynconv2d_6_to_conv2d_10_syn, d_inSynconv2d_9_to_conv2d_10_syn, 2304);
    pushMergedNeuronInitGroup2ToDevice(1, d_glbSpkCntconv2d_12_nrn, d_glbSpkconv2d_12_nrn, d_Vmemconv2d_12_nrn, d_nSpkconv2d_12_nrn, d_inSynconv2d_7_to_conv2d_12_syn, d_inSynconv2d_6_to_conv2d_12_syn, d_inSynconv2d_9_to_conv2d_12_syn, 2304);
    pushMergedNeuronInitGroup2ToDevice(2, d_glbSpkCntconv2d_15_nrn, d_glbSpkconv2d_15_nrn, d_Vmemconv2d_15_nrn, d_nSpkconv2d_15_nrn, d_inSynconv2d_11_to_conv2d_15_syn, d_inSynconv2d_12_to_conv2d_15_syn, d_inSynconv2d_14_to_conv2d_15_syn, 2048);
    pushMergedNeuronInitGroup2ToDevice(3, d_glbSpkCntconv2d_17_nrn, d_glbSpkconv2d_17_nrn, d_Vmemconv2d_17_nrn, d_nSpkconv2d_17_nrn, d_inSynconv2d_11_to_conv2d_17_syn, d_inSynconv2d_12_to_conv2d_17_syn, d_inSynconv2d_14_to_conv2d_17_syn, 2048);
    pushMergedNeuronInitGroup2ToDevice(4, d_glbSpkCntconv2d_5_nrn, d_glbSpkconv2d_5_nrn, d_Vmemconv2d_5_nrn, d_nSpkconv2d_5_nrn, d_inSynconv2d_to_conv2d_5_syn, d_inSynconv2d_4_to_conv2d_5_syn, d_inSynconv2d_2_to_conv2d_5_syn, 3200);
    pushMergedNeuronInitGroup2ToDevice(5, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, d_Vmemconv2d_7_nrn, d_nSpkconv2d_7_nrn, d_inSynconv2d_to_conv2d_7_syn, d_inSynconv2d_4_to_conv2d_7_syn, d_inSynconv2d_2_to_conv2d_7_syn, 3200);
    pushMergedNeuronInitGroup2ToDevice(6, d_glbSpkCntdense_nrn, d_glbSpkdense_nrn, d_Vmemdense_nrn, d_nSpkdense_nrn, d_inSynconv2d_16_to_dense_syn, d_inSynconv2d_19_to_dense_syn, d_inSynconv2d_17_to_dense_syn, 10);
    pushMergedNeuronInitGroup3ToDevice(0, d_glbSpkCntconv2d_11_nrn, d_glbSpkconv2d_11_nrn, d_Vmemconv2d_11_nrn, d_nSpkconv2d_11_nrn, d_inSynconv2d_10_to_conv2d_11_syn, 2304);
    pushMergedNeuronInitGroup3ToDevice(1, d_glbSpkCntconv2d_14_nrn, d_glbSpkconv2d_14_nrn, d_Vmemconv2d_14_nrn, d_nSpkconv2d_14_nrn, d_inSynconv2d_13_to_conv2d_14_syn, 2304);
    pushMergedNeuronInitGroup3ToDevice(2, d_glbSpkCntconv2d_16_nrn, d_glbSpkconv2d_16_nrn, d_Vmemconv2d_16_nrn, d_nSpkconv2d_16_nrn, d_inSynconv2d_15_to_conv2d_16_syn, 2048);
    pushMergedNeuronInitGroup3ToDevice(3, d_glbSpkCntconv2d_19_nrn, d_glbSpkconv2d_19_nrn, d_Vmemconv2d_19_nrn, d_nSpkconv2d_19_nrn, d_inSynconv2d_18_to_conv2d_19_syn, 2048);
    pushMergedNeuronInitGroup3ToDevice(4, d_glbSpkCntconv2d_1_nrn, d_glbSpkconv2d_1_nrn, d_Vmemconv2d_1_nrn, d_nSpkconv2d_1_nrn, d_inSynconv2d_to_conv2d_1_syn, 6400);
    pushMergedNeuronInitGroup3ToDevice(5, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, d_Vmemconv2d_2_nrn, d_nSpkconv2d_2_nrn, d_inSynconv2d_1_to_conv2d_2_syn, 6400);
    pushMergedNeuronInitGroup3ToDevice(6, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, d_Vmemconv2d_4_nrn, d_nSpkconv2d_4_nrn, d_inSynconv2d_3_to_conv2d_4_syn, 6400);
    pushMergedNeuronInitGroup3ToDevice(7, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, d_Vmemconv2d_6_nrn, d_nSpkconv2d_6_nrn, d_inSynconv2d_5_to_conv2d_6_syn, 3200);
    pushMergedNeuronInitGroup3ToDevice(8, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, d_Vmemconv2d_9_nrn, d_nSpkconv2d_9_nrn, d_inSynconv2d_8_to_conv2d_9_syn, 3200);
    pushMergedNeuronInitGroup3ToDevice(9, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, d_Vmemconv2d_nrn, d_nSpkconv2d_nrn, d_inSyninput_1_to_conv2d_syn, 65536);
    pushMergedNeuronUpdateGroup0ToDevice(0, d_glbSpkCntconv2d_13_nrn, d_glbSpkconv2d_13_nrn, d_Vmemconv2d_13_nrn, d_nSpkconv2d_13_nrn, d_inSynconv2d_11_to_conv2d_13_syn, d_inSynconv2d_12_to_conv2d_13_syn, 2304, Vthrconv2d_13_nrn);
    pushMergedNeuronUpdateGroup0ToDevice(1, d_glbSpkCntconv2d_18_nrn, d_glbSpkconv2d_18_nrn, d_Vmemconv2d_18_nrn, d_nSpkconv2d_18_nrn, d_inSynconv2d_16_to_conv2d_18_syn, d_inSynconv2d_17_to_conv2d_18_syn, 2048, Vthrconv2d_18_nrn);
    pushMergedNeuronUpdateGroup0ToDevice(2, d_glbSpkCntconv2d_3_nrn, d_glbSpkconv2d_3_nrn, d_Vmemconv2d_3_nrn, d_nSpkconv2d_3_nrn, d_inSynconv2d_to_conv2d_3_syn, d_inSynconv2d_2_to_conv2d_3_syn, 6400, Vthrconv2d_3_nrn);
    pushMergedNeuronUpdateGroup0ToDevice(3, d_glbSpkCntconv2d_8_nrn, d_glbSpkconv2d_8_nrn, d_Vmemconv2d_8_nrn, d_nSpkconv2d_8_nrn, d_inSynconv2d_7_to_conv2d_8_syn, d_inSynconv2d_6_to_conv2d_8_syn, 3200, Vthrconv2d_8_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(0, d_glbSpkCntconv2d_10_nrn, d_glbSpkconv2d_10_nrn, d_Vmemconv2d_10_nrn, d_nSpkconv2d_10_nrn, d_inSynconv2d_7_to_conv2d_10_syn, d_inSynconv2d_6_to_conv2d_10_syn, d_inSynconv2d_9_to_conv2d_10_syn, 2304, Vthrconv2d_10_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(1, d_glbSpkCntconv2d_12_nrn, d_glbSpkconv2d_12_nrn, d_Vmemconv2d_12_nrn, d_nSpkconv2d_12_nrn, d_inSynconv2d_7_to_conv2d_12_syn, d_inSynconv2d_6_to_conv2d_12_syn, d_inSynconv2d_9_to_conv2d_12_syn, 2304, Vthrconv2d_12_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(2, d_glbSpkCntconv2d_15_nrn, d_glbSpkconv2d_15_nrn, d_Vmemconv2d_15_nrn, d_nSpkconv2d_15_nrn, d_inSynconv2d_11_to_conv2d_15_syn, d_inSynconv2d_12_to_conv2d_15_syn, d_inSynconv2d_14_to_conv2d_15_syn, 2048, Vthrconv2d_15_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(3, d_glbSpkCntconv2d_17_nrn, d_glbSpkconv2d_17_nrn, d_Vmemconv2d_17_nrn, d_nSpkconv2d_17_nrn, d_inSynconv2d_11_to_conv2d_17_syn, d_inSynconv2d_12_to_conv2d_17_syn, d_inSynconv2d_14_to_conv2d_17_syn, 2048, Vthrconv2d_17_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(4, d_glbSpkCntconv2d_5_nrn, d_glbSpkconv2d_5_nrn, d_Vmemconv2d_5_nrn, d_nSpkconv2d_5_nrn, d_inSynconv2d_to_conv2d_5_syn, d_inSynconv2d_4_to_conv2d_5_syn, d_inSynconv2d_2_to_conv2d_5_syn, 3200, Vthrconv2d_5_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(5, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, d_Vmemconv2d_7_nrn, d_nSpkconv2d_7_nrn, d_inSynconv2d_to_conv2d_7_syn, d_inSynconv2d_4_to_conv2d_7_syn, d_inSynconv2d_2_to_conv2d_7_syn, 3200, Vthrconv2d_7_nrn);
    pushMergedNeuronUpdateGroup1ToDevice(6, d_glbSpkCntdense_nrn, d_glbSpkdense_nrn, d_Vmemdense_nrn, d_nSpkdense_nrn, d_inSynconv2d_16_to_dense_syn, d_inSynconv2d_19_to_dense_syn, d_inSynconv2d_17_to_dense_syn, 10, Vthrdense_nrn);
    pushMergedNeuronUpdateGroup2ToDevice(0, d_glbSpkCntinput_1_nrn, d_glbSpkinput_1_nrn, d_rnginput_1_nrn, d_inputinput_1_nrn, 3072);
    pushMergedNeuronUpdateGroup3ToDevice(0, d_glbSpkCntconv2d_11_nrn, d_glbSpkconv2d_11_nrn, d_Vmemconv2d_11_nrn, d_nSpkconv2d_11_nrn, d_inSynconv2d_10_to_conv2d_11_syn, 2304, Vthrconv2d_11_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(1, d_glbSpkCntconv2d_14_nrn, d_glbSpkconv2d_14_nrn, d_Vmemconv2d_14_nrn, d_nSpkconv2d_14_nrn, d_inSynconv2d_13_to_conv2d_14_syn, 2304, Vthrconv2d_14_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(2, d_glbSpkCntconv2d_16_nrn, d_glbSpkconv2d_16_nrn, d_Vmemconv2d_16_nrn, d_nSpkconv2d_16_nrn, d_inSynconv2d_15_to_conv2d_16_syn, 2048, Vthrconv2d_16_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(3, d_glbSpkCntconv2d_19_nrn, d_glbSpkconv2d_19_nrn, d_Vmemconv2d_19_nrn, d_nSpkconv2d_19_nrn, d_inSynconv2d_18_to_conv2d_19_syn, 2048, Vthrconv2d_19_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(4, d_glbSpkCntconv2d_1_nrn, d_glbSpkconv2d_1_nrn, d_Vmemconv2d_1_nrn, d_nSpkconv2d_1_nrn, d_inSynconv2d_to_conv2d_1_syn, 6400, Vthrconv2d_1_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(5, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, d_Vmemconv2d_2_nrn, d_nSpkconv2d_2_nrn, d_inSynconv2d_1_to_conv2d_2_syn, 6400, Vthrconv2d_2_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(6, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, d_Vmemconv2d_4_nrn, d_nSpkconv2d_4_nrn, d_inSynconv2d_3_to_conv2d_4_syn, 6400, Vthrconv2d_4_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(7, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, d_Vmemconv2d_6_nrn, d_nSpkconv2d_6_nrn, d_inSynconv2d_5_to_conv2d_6_syn, 3200, Vthrconv2d_6_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(8, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, d_Vmemconv2d_9_nrn, d_nSpkconv2d_9_nrn, d_inSynconv2d_8_to_conv2d_9_syn, 3200, Vthrconv2d_9_nrn);
    pushMergedNeuronUpdateGroup3ToDevice(9, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, d_Vmemconv2d_nrn, d_nSpkconv2d_nrn, d_inSyninput_1_to_conv2d_syn, 65536, Vthrconv2d_nrn);
    pushMergedPresynapticUpdateGroup0ToDevice(0, d_kernelgconv2d_to_conv2d_1_syn, d_inSynconv2d_to_conv2d_1_syn, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, 1.00000000000000000e+00f, 64, 3, 3, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 6400, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 6400, 65536);
    pushMergedPresynapticUpdateGroup0ToDevice(1, d_kernelgconv2d_to_conv2d_3_syn, d_inSynconv2d_to_conv2d_3_syn, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, 1.00000000000000000e+00f, 64, 3, 3, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 6400, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 6400, 65536);
    pushMergedPresynapticUpdateGroup0ToDevice(2, d_kernelgconv2d_to_conv2d_5_syn, d_inSynconv2d_to_conv2d_5_syn, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, 2.00000000000000000e+00f, 128, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3200, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 65536);
    pushMergedPresynapticUpdateGroup0ToDevice(3, d_kernelgconv2d_to_conv2d_7_syn, d_inSynconv2d_to_conv2d_7_syn, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, 2.00000000000000000e+00f, 128, 1, 1, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 0.00000000000000000e+00f, 0.00000000000000000e+00f, 3200, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3200, 65536);
    pushMergedPresynapticUpdateGroup1ToDevice(0, d_kernelgconv2d_10_to_conv2d_11_syn, d_inSynconv2d_10_to_conv2d_11_syn, d_glbSpkCntconv2d_10_nrn, d_glbSpkconv2d_10_nrn, 1.00000000000000000e+00f, 256, 256, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(1, d_kernelgconv2d_11_to_conv2d_13_syn, d_inSynconv2d_11_to_conv2d_13_syn, d_glbSpkCntconv2d_11_nrn, d_glbSpkconv2d_11_nrn, 1.00000000000000000e+00f, 256, 256, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(2, d_kernelgconv2d_11_to_conv2d_15_syn, d_inSynconv2d_11_to_conv2d_15_syn, d_glbSpkCntconv2d_11_nrn, d_glbSpkconv2d_11_nrn, 1.00000000000000000e+00f, 512, 256, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(3, d_kernelgconv2d_11_to_conv2d_17_syn, d_inSynconv2d_11_to_conv2d_17_syn, d_glbSpkCntconv2d_11_nrn, d_glbSpkconv2d_11_nrn, 0.00000000000000000e+00f, 512, 256, 1, 1, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2048, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 2048, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(4, d_kernelgconv2d_12_to_conv2d_13_syn, d_inSynconv2d_12_to_conv2d_13_syn, d_glbSpkCntconv2d_12_nrn, d_glbSpkconv2d_12_nrn, 1.00000000000000000e+00f, 256, 256, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(5, d_kernelgconv2d_12_to_conv2d_15_syn, d_inSynconv2d_12_to_conv2d_15_syn, d_glbSpkCntconv2d_12_nrn, d_glbSpkconv2d_12_nrn, 1.00000000000000000e+00f, 512, 256, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(6, d_kernelgconv2d_12_to_conv2d_17_syn, d_inSynconv2d_12_to_conv2d_17_syn, d_glbSpkCntconv2d_12_nrn, d_glbSpkconv2d_12_nrn, 0.00000000000000000e+00f, 512, 256, 1, 1, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2048, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 2048, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(7, d_kernelgconv2d_13_to_conv2d_14_syn, d_inSynconv2d_13_to_conv2d_14_syn, d_glbSpkCntconv2d_13_nrn, d_glbSpkconv2d_13_nrn, 1.00000000000000000e+00f, 256, 256, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(8, d_kernelgconv2d_14_to_conv2d_15_syn, d_inSynconv2d_14_to_conv2d_15_syn, d_glbSpkCntconv2d_14_nrn, d_glbSpkconv2d_14_nrn, 1.00000000000000000e+00f, 512, 256, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(9, d_kernelgconv2d_14_to_conv2d_17_syn, d_inSynconv2d_14_to_conv2d_17_syn, d_glbSpkCntconv2d_14_nrn, d_glbSpkconv2d_14_nrn, 0.00000000000000000e+00f, 512, 256, 1, 1, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 2048, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 2048, 2304);
    pushMergedPresynapticUpdateGroup1ToDevice(10, d_kernelgconv2d_15_to_conv2d_16_syn, d_inSynconv2d_15_to_conv2d_16_syn, d_glbSpkCntconv2d_15_nrn, d_glbSpkconv2d_15_nrn, 1.00000000000000000e+00f, 512, 512, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2048);
    pushMergedPresynapticUpdateGroup1ToDevice(11, d_kernelgconv2d_16_to_conv2d_18_syn, d_inSynconv2d_16_to_conv2d_18_syn, d_glbSpkCntconv2d_16_nrn, d_glbSpkconv2d_16_nrn, 1.00000000000000000e+00f, 512, 512, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2048);
    pushMergedPresynapticUpdateGroup1ToDevice(12, d_kernelgconv2d_17_to_conv2d_18_syn, d_inSynconv2d_17_to_conv2d_18_syn, d_glbSpkCntconv2d_17_nrn, d_glbSpkconv2d_17_nrn, 1.00000000000000000e+00f, 512, 512, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2048);
    pushMergedPresynapticUpdateGroup1ToDevice(13, d_kernelgconv2d_18_to_conv2d_19_syn, d_inSynconv2d_18_to_conv2d_19_syn, d_glbSpkCntconv2d_18_nrn, d_glbSpkconv2d_18_nrn, 1.00000000000000000e+00f, 512, 512, 3, 3, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2048, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2048, 2048);
    pushMergedPresynapticUpdateGroup1ToDevice(14, d_kernelgconv2d_1_to_conv2d_2_syn, d_inSynconv2d_1_to_conv2d_2_syn, d_glbSpkCntconv2d_1_nrn, d_glbSpkconv2d_1_nrn, 1.00000000000000000e+00f, 64, 64, 3, 3, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+01f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 6400, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 6400, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(15, d_kernelgconv2d_2_to_conv2d_3_syn, d_inSynconv2d_2_to_conv2d_3_syn, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, 1.00000000000000000e+00f, 64, 64, 3, 3, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+01f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 6400, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 6400, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(16, d_kernelgconv2d_2_to_conv2d_5_syn, d_inSynconv2d_2_to_conv2d_5_syn, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, 1.00000000000000000e+00f, 128, 64, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 3200, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(17, d_kernelgconv2d_2_to_conv2d_7_syn, d_inSynconv2d_2_to_conv2d_7_syn, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, 0.00000000000000000e+00f, 128, 64, 1, 1, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 3200, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3200, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(18, d_kernelgconv2d_3_to_conv2d_4_syn, d_inSynconv2d_3_to_conv2d_4_syn, d_glbSpkCntconv2d_3_nrn, d_glbSpkconv2d_3_nrn, 1.00000000000000000e+00f, 64, 64, 3, 3, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 1.00000000000000000e+01f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 6400, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 6400, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(19, d_kernelgconv2d_4_to_conv2d_5_syn, d_inSynconv2d_4_to_conv2d_5_syn, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, 1.00000000000000000e+00f, 128, 64, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 3200, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(20, d_kernelgconv2d_4_to_conv2d_7_syn, d_inSynconv2d_4_to_conv2d_7_syn, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, 0.00000000000000000e+00f, 128, 64, 1, 1, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 6.40000000000000000e+01f, 1.00000000000000000e+01f, 3200, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3200, 6400);
    pushMergedPresynapticUpdateGroup1ToDevice(21, d_kernelgconv2d_5_to_conv2d_6_syn, d_inSynconv2d_5_to_conv2d_6_syn, d_glbSpkCntconv2d_5_nrn, d_glbSpkconv2d_5_nrn, 1.00000000000000000e+00f, 128, 128, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 3200, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(22, d_kernelgconv2d_6_to_conv2d_10_syn, d_inSynconv2d_6_to_conv2d_10_syn, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, 1.00000000000000000e+00f, 256, 128, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(23, d_kernelgconv2d_6_to_conv2d_12_syn, d_inSynconv2d_6_to_conv2d_12_syn, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, 0.00000000000000000e+00f, 256, 128, 1, 1, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 2304, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 2304, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(24, d_kernelgconv2d_6_to_conv2d_8_syn, d_inSynconv2d_6_to_conv2d_8_syn, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, 1.00000000000000000e+00f, 128, 128, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 3200, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(25, d_kernelgconv2d_7_to_conv2d_10_syn, d_inSynconv2d_7_to_conv2d_10_syn, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, 1.00000000000000000e+00f, 256, 128, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(26, d_kernelgconv2d_7_to_conv2d_12_syn, d_inSynconv2d_7_to_conv2d_12_syn, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, 0.00000000000000000e+00f, 256, 128, 1, 1, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 2304, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 2304, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(27, d_kernelgconv2d_7_to_conv2d_8_syn, d_inSynconv2d_7_to_conv2d_8_syn, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, 1.00000000000000000e+00f, 128, 128, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 3200, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(28, d_kernelgconv2d_8_to_conv2d_9_syn, d_inSynconv2d_8_to_conv2d_9_syn, d_glbSpkCntconv2d_8_nrn, d_glbSpkconv2d_8_nrn, 1.00000000000000000e+00f, 128, 128, 3, 3, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 5.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 3200, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 3200, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(29, d_kernelgconv2d_9_to_conv2d_10_syn, d_inSynconv2d_9_to_conv2d_10_syn, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, 1.00000000000000000e+00f, 256, 128, 3, 3, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 2304, 1.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 2304, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(30, d_kernelgconv2d_9_to_conv2d_12_syn, d_inSynconv2d_9_to_conv2d_12_syn, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, 0.00000000000000000e+00f, 256, 128, 1, 1, 2.56000000000000000e+02f, 3.00000000000000000e+00f, 3.00000000000000000e+00f, 1.28000000000000000e+02f, 5.00000000000000000e+00f, 2304, 0.00000000000000000e+00f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 2304, 3200);
    pushMergedPresynapticUpdateGroup1ToDevice(31, d_kernelginput_1_to_conv2d_syn, d_inSyninput_1_to_conv2d_syn, d_glbSpkCntinput_1_nrn, d_glbSpkinput_1_nrn, 3.00000000000000000e+00f, 64, 3, 7, 7, 6.40000000000000000e+01f, 3.20000000000000000e+01f, 3.20000000000000000e+01f, 3.00000000000000000e+00f, 3.20000000000000000e+01f, 65536, 3.00000000000000000e+00f, 1.00000000000000000e+00f, 1.00000000000000000e+00f, 7.00000000000000000e+00f, 7.00000000000000000e+00f, 65536, 3072);
    pushMergedPresynapticUpdateGroup2ToDevice(0, d_inSynconv2d_16_to_dense_syn, d_glbSpkCntconv2d_16_nrn, d_glbSpkconv2d_16_nrn, d_gconv2d_16_to_dense_syn, 10, 2048, 10);
    pushMergedPresynapticUpdateGroup2ToDevice(1, d_inSynconv2d_17_to_dense_syn, d_glbSpkCntconv2d_17_nrn, d_glbSpkconv2d_17_nrn, d_gconv2d_17_to_dense_syn, 10, 2048, 10);
    pushMergedPresynapticUpdateGroup2ToDevice(2, d_inSynconv2d_19_to_dense_syn, d_glbSpkCntconv2d_19_nrn, d_glbSpkconv2d_19_nrn, d_gconv2d_19_to_dense_syn, 10, 2048, 10);
    pushMergedNeuronSpikeQueueUpdateGroup0ToDevice(0, d_glbSpkCntdense_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(0, d_glbSpkCntconv2d_10_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(1, d_glbSpkCntconv2d_11_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(2, d_glbSpkCntconv2d_12_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(3, d_glbSpkCntconv2d_13_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(4, d_glbSpkCntconv2d_14_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(5, d_glbSpkCntconv2d_15_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(6, d_glbSpkCntconv2d_16_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(7, d_glbSpkCntconv2d_17_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(8, d_glbSpkCntconv2d_18_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(9, d_glbSpkCntconv2d_19_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(10, d_glbSpkCntconv2d_1_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(11, d_glbSpkCntconv2d_2_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(12, d_glbSpkCntconv2d_3_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(13, d_glbSpkCntconv2d_4_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(14, d_glbSpkCntconv2d_5_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(15, d_glbSpkCntconv2d_6_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(16, d_glbSpkCntconv2d_7_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(17, d_glbSpkCntconv2d_8_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(18, d_glbSpkCntconv2d_9_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(19, d_glbSpkCntconv2d_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(20, d_glbSpkCntinput_1_nrn);
}

void freeMem() {
    // ------------------------------------------------------------------------
    // global variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // timers
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaEventDestroy(neuronUpdateStart));
    CHECK_CUDA_ERRORS(cudaEventDestroy(neuronUpdateStop));
    CHECK_CUDA_ERRORS(cudaEventDestroy(presynapticUpdateStart));
    CHECK_CUDA_ERRORS(cudaEventDestroy(presynapticUpdateStop));
    CHECK_CUDA_ERRORS(cudaEventDestroy(initStart));
    CHECK_CUDA_ERRORS(cudaEventDestroy(initStop));
    
    // ------------------------------------------------------------------------
    // local neuron groups
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_10_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_11_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_12_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_13_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_14_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_15_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_16_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_17_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_18_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_19_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(nSpkdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_nSpkdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntinput_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntinput_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkinput_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkinput_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_rnginput_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inputinput_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_inputinput_1_nrn));
    
    // ------------------------------------------------------------------------
    // custom update variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // postsynaptic variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_7_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_7_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_6_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_6_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_9_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_9_to_conv2d_10_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_10_to_conv2d_11_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_10_to_conv2d_11_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_7_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_7_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_6_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_6_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_9_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_9_to_conv2d_12_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_11_to_conv2d_13_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_11_to_conv2d_13_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_12_to_conv2d_13_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_12_to_conv2d_13_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_13_to_conv2d_14_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_13_to_conv2d_14_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_11_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_11_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_12_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_12_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_14_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_14_to_conv2d_15_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_15_to_conv2d_16_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_15_to_conv2d_16_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_11_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_11_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_12_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_12_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_14_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_14_to_conv2d_17_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_16_to_conv2d_18_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_16_to_conv2d_18_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_17_to_conv2d_18_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_17_to_conv2d_18_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_18_to_conv2d_19_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_18_to_conv2d_19_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_to_conv2d_1_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_to_conv2d_1_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_1_to_conv2d_2_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_1_to_conv2d_2_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_2_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_2_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_3_to_conv2d_4_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_3_to_conv2d_4_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_4_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_4_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_2_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_2_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_5_to_conv2d_6_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_5_to_conv2d_6_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_4_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_4_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_2_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_2_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_7_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_7_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_6_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_6_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_8_to_conv2d_9_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_8_to_conv2d_9_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSyninput_1_to_conv2d_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSyninput_1_to_conv2d_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_16_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_16_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_19_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_19_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_17_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_17_to_dense_syn));
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaFreeHost(gconv2d_16_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_gconv2d_16_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(gconv2d_17_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_gconv2d_17_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(gconv2d_19_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_gconv2d_19_to_dense_syn));
    
}

size_t getFreeDeviceMemBytes() {
    size_t free;
    size_t total;
    CHECK_CUDA_ERRORS(cudaMemGetInfo(&free, &total));
    return free;
}

void stepTime() {
    updateSynapses(t);
    updateNeurons(t); 
    iT++;
    t = iT*DT;
    CHECK_CUDA_ERRORS(cudaEventSynchronize(neuronUpdateStop));
     {
        float tmp;
        CHECK_CUDA_ERRORS(cudaEventElapsedTime(&tmp, neuronUpdateStart, neuronUpdateStop));
        neuronUpdateTime += tmp / 1000.0;
    }
     {
        float tmp;
        CHECK_CUDA_ERRORS(cudaEventElapsedTime(&tmp, presynapticUpdateStart, presynapticUpdateStop));
        presynapticUpdateTime += tmp / 1000.0;
    }
}

