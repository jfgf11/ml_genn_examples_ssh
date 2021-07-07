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
unsigned int* glbSpkCntconv2d_1_nrn;
unsigned int* d_glbSpkCntconv2d_1_nrn;
unsigned int* glbSpkconv2d_1_nrn;
unsigned int* d_glbSpkconv2d_1_nrn;
scalar* Fxconv2d_1_nrn;
scalar* d_Fxconv2d_1_nrn;
scalar* Vmemconv2d_1_nrn;
scalar* d_Vmemconv2d_1_nrn;
unsigned int* glbSpkCntconv2d_2_nrn;
unsigned int* d_glbSpkCntconv2d_2_nrn;
unsigned int* glbSpkconv2d_2_nrn;
unsigned int* d_glbSpkconv2d_2_nrn;
scalar* Fxconv2d_2_nrn;
scalar* d_Fxconv2d_2_nrn;
scalar* Vmemconv2d_2_nrn;
scalar* d_Vmemconv2d_2_nrn;
unsigned int* glbSpkCntconv2d_3_nrn;
unsigned int* d_glbSpkCntconv2d_3_nrn;
unsigned int* glbSpkconv2d_3_nrn;
unsigned int* d_glbSpkconv2d_3_nrn;
scalar* Fxconv2d_3_nrn;
scalar* d_Fxconv2d_3_nrn;
scalar* Vmemconv2d_3_nrn;
scalar* d_Vmemconv2d_3_nrn;
unsigned int* glbSpkCntconv2d_4_nrn;
unsigned int* d_glbSpkCntconv2d_4_nrn;
unsigned int* glbSpkconv2d_4_nrn;
unsigned int* d_glbSpkconv2d_4_nrn;
scalar* Fxconv2d_4_nrn;
scalar* d_Fxconv2d_4_nrn;
scalar* Vmemconv2d_4_nrn;
scalar* d_Vmemconv2d_4_nrn;
unsigned int* glbSpkCntconv2d_5_nrn;
unsigned int* d_glbSpkCntconv2d_5_nrn;
unsigned int* glbSpkconv2d_5_nrn;
unsigned int* d_glbSpkconv2d_5_nrn;
scalar* Fxconv2d_5_nrn;
scalar* d_Fxconv2d_5_nrn;
scalar* Vmemconv2d_5_nrn;
scalar* d_Vmemconv2d_5_nrn;
unsigned int* glbSpkCntconv2d_6_nrn;
unsigned int* d_glbSpkCntconv2d_6_nrn;
unsigned int* glbSpkconv2d_6_nrn;
unsigned int* d_glbSpkconv2d_6_nrn;
scalar* Fxconv2d_6_nrn;
scalar* d_Fxconv2d_6_nrn;
scalar* Vmemconv2d_6_nrn;
scalar* d_Vmemconv2d_6_nrn;
unsigned int* glbSpkCntconv2d_7_nrn;
unsigned int* d_glbSpkCntconv2d_7_nrn;
unsigned int* glbSpkconv2d_7_nrn;
unsigned int* d_glbSpkconv2d_7_nrn;
scalar* Fxconv2d_7_nrn;
scalar* d_Fxconv2d_7_nrn;
scalar* Vmemconv2d_7_nrn;
scalar* d_Vmemconv2d_7_nrn;
unsigned int* glbSpkCntconv2d_8_nrn;
unsigned int* d_glbSpkCntconv2d_8_nrn;
unsigned int* glbSpkconv2d_8_nrn;
unsigned int* d_glbSpkconv2d_8_nrn;
scalar* Fxconv2d_8_nrn;
scalar* d_Fxconv2d_8_nrn;
scalar* Vmemconv2d_8_nrn;
scalar* d_Vmemconv2d_8_nrn;
unsigned int* glbSpkCntconv2d_9_nrn;
unsigned int* d_glbSpkCntconv2d_9_nrn;
unsigned int* glbSpkconv2d_9_nrn;
unsigned int* d_glbSpkconv2d_9_nrn;
scalar* Fxconv2d_9_nrn;
scalar* d_Fxconv2d_9_nrn;
scalar* Vmemconv2d_9_nrn;
scalar* d_Vmemconv2d_9_nrn;
unsigned int* glbSpkCntconv2d_nrn;
unsigned int* d_glbSpkCntconv2d_nrn;
unsigned int* glbSpkconv2d_nrn;
unsigned int* d_glbSpkconv2d_nrn;
scalar* Fxconv2d_nrn;
scalar* d_Fxconv2d_nrn;
scalar* Vmemconv2d_nrn;
scalar* d_Vmemconv2d_nrn;
unsigned int* glbSpkCntdense_1_nrn;
unsigned int* d_glbSpkCntdense_1_nrn;
unsigned int* glbSpkdense_1_nrn;
unsigned int* d_glbSpkdense_1_nrn;
scalar* Fxdense_1_nrn;
scalar* d_Fxdense_1_nrn;
scalar* Vmemdense_1_nrn;
scalar* d_Vmemdense_1_nrn;
unsigned int* glbSpkCntdense_2_nrn;
unsigned int* d_glbSpkCntdense_2_nrn;
unsigned int* glbSpkdense_2_nrn;
unsigned int* d_glbSpkdense_2_nrn;
scalar* Fxdense_2_nrn;
scalar* d_Fxdense_2_nrn;
scalar* Vmemdense_2_nrn;
scalar* d_Vmemdense_2_nrn;
unsigned int* glbSpkCntdense_nrn;
unsigned int* d_glbSpkCntdense_nrn;
unsigned int* glbSpkdense_nrn;
unsigned int* d_glbSpkdense_nrn;
scalar* Fxdense_nrn;
scalar* d_Fxdense_nrn;
scalar* Vmemdense_nrn;
scalar* d_Vmemdense_nrn;
unsigned int* glbSpkCntinput_nrn;
unsigned int* d_glbSpkCntinput_nrn;
unsigned int* glbSpkinput_nrn;
unsigned int* d_glbSpkinput_nrn;
scalar* inputinput_nrn;
scalar* d_inputinput_nrn;
scalar* Vmeminput_nrn;
scalar* d_Vmeminput_nrn;

// ------------------------------------------------------------------------
// custom update variables
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// postsynaptic variables
// ------------------------------------------------------------------------
float* inSynconv2d_to_conv2d_1_syn;
float* d_inSynconv2d_to_conv2d_1_syn;
float* inSynconv2d_1_to_conv2d_2_syn;
float* d_inSynconv2d_1_to_conv2d_2_syn;
float* inSynconv2d_2_to_conv2d_3_syn;
float* d_inSynconv2d_2_to_conv2d_3_syn;
float* inSynconv2d_3_to_conv2d_4_syn;
float* d_inSynconv2d_3_to_conv2d_4_syn;
float* inSynconv2d_4_to_conv2d_5_syn;
float* d_inSynconv2d_4_to_conv2d_5_syn;
float* inSynconv2d_5_to_conv2d_6_syn;
float* d_inSynconv2d_5_to_conv2d_6_syn;
float* inSynconv2d_6_to_conv2d_7_syn;
float* d_inSynconv2d_6_to_conv2d_7_syn;
float* inSynconv2d_7_to_conv2d_8_syn;
float* d_inSynconv2d_7_to_conv2d_8_syn;
float* inSynconv2d_8_to_conv2d_9_syn;
float* d_inSynconv2d_8_to_conv2d_9_syn;
float* inSyninput_to_conv2d_syn;
float* d_inSyninput_to_conv2d_syn;
float* inSyndense_to_dense_1_syn;
float* d_inSyndense_to_dense_1_syn;
float* inSyndense_1_to_dense_2_syn;
float* d_inSyndense_1_to_dense_2_syn;
float* inSynconv2d_9_to_dense_syn;
float* d_inSynconv2d_9_to_dense_syn;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
scalar* kernelgconv2d_1_to_conv2d_2_syn;
scalar* d_kernelgconv2d_1_to_conv2d_2_syn;
scalar* kernelgconv2d_2_to_conv2d_3_syn;
scalar* d_kernelgconv2d_2_to_conv2d_3_syn;
scalar* kernelgconv2d_3_to_conv2d_4_syn;
scalar* d_kernelgconv2d_3_to_conv2d_4_syn;
scalar* kernelgconv2d_4_to_conv2d_5_syn;
scalar* d_kernelgconv2d_4_to_conv2d_5_syn;
scalar* kernelgconv2d_5_to_conv2d_6_syn;
scalar* d_kernelgconv2d_5_to_conv2d_6_syn;
scalar* kernelgconv2d_6_to_conv2d_7_syn;
scalar* d_kernelgconv2d_6_to_conv2d_7_syn;
scalar* kernelgconv2d_7_to_conv2d_8_syn;
scalar* d_kernelgconv2d_7_to_conv2d_8_syn;
scalar* kernelgconv2d_8_to_conv2d_9_syn;
scalar* d_kernelgconv2d_8_to_conv2d_9_syn;
scalar* weightsgconv2d_9_to_dense_syn;
scalar* d_weightsgconv2d_9_to_dense_syn;
scalar* kernelgconv2d_to_conv2d_1_syn;
scalar* d_kernelgconv2d_to_conv2d_1_syn;
scalar* gdense_1_to_dense_2_syn;
scalar* d_gdense_1_to_dense_2_syn;
scalar* gdense_to_dense_1_syn;
scalar* d_gdense_to_dense_1_syn;
scalar* kernelginput_to_conv2d_syn;
scalar* d_kernelginput_to_conv2d_syn;

}  // extern "C"
// ------------------------------------------------------------------------
// extra global params
// ------------------------------------------------------------------------
void allocatekernelgconv2d_1_to_conv2d_2_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_1_to_conv2d_2_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_1_to_conv2d_2_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(0, d_kernelgconv2d_1_to_conv2d_2_syn);
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
    pushMergedPresynapticUpdate3kernelgToDevice(0, d_kernelgconv2d_2_to_conv2d_3_syn);
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
void allocatekernelgconv2d_3_to_conv2d_4_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_3_to_conv2d_4_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_3_to_conv2d_4_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(1, d_kernelgconv2d_3_to_conv2d_4_syn);
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
    pushMergedPresynapticUpdate3kernelgToDevice(1, d_kernelgconv2d_4_to_conv2d_5_syn);
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
void allocatekernelgconv2d_5_to_conv2d_6_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_5_to_conv2d_6_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_5_to_conv2d_6_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(2, d_kernelgconv2d_5_to_conv2d_6_syn);
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
void allocatekernelgconv2d_6_to_conv2d_7_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_6_to_conv2d_7_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_6_to_conv2d_7_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate3kernelgToDevice(2, d_kernelgconv2d_6_to_conv2d_7_syn);
}
void freekernelgconv2d_6_to_conv2d_7_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelgconv2d_6_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelgconv2d_6_to_conv2d_7_syn));
}
void pushkernelgconv2d_6_to_conv2d_7_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelgconv2d_6_to_conv2d_7_syn, kernelgconv2d_6_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelgconv2d_6_to_conv2d_7_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelgconv2d_6_to_conv2d_7_syn, d_kernelgconv2d_6_to_conv2d_7_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_7_to_conv2d_8_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_7_to_conv2d_8_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_7_to_conv2d_8_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate1kernelgToDevice(3, d_kernelgconv2d_7_to_conv2d_8_syn);
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
    pushMergedPresynapticUpdate3kernelgToDevice(3, d_kernelgconv2d_8_to_conv2d_9_syn);
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
void allocateweightsgconv2d_9_to_dense_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&weightsgconv2d_9_to_dense_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_weightsgconv2d_9_to_dense_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate2weightsgToDevice(0, d_weightsgconv2d_9_to_dense_syn);
}
void freeweightsgconv2d_9_to_dense_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(weightsgconv2d_9_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_weightsgconv2d_9_to_dense_syn));
}
void pushweightsgconv2d_9_to_dense_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_weightsgconv2d_9_to_dense_syn, weightsgconv2d_9_to_dense_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullweightsgconv2d_9_to_dense_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(weightsgconv2d_9_to_dense_syn, d_weightsgconv2d_9_to_dense_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}
void allocatekernelgconv2d_to_conv2d_1_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelgconv2d_to_conv2d_1_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelgconv2d_to_conv2d_1_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate3kernelgToDevice(4, d_kernelgconv2d_to_conv2d_1_syn);
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
void allocatekernelginput_to_conv2d_syn(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaHostAlloc(&kernelginput_to_conv2d_syn, count * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_kernelginput_to_conv2d_syn, count * sizeof(scalar)));
    pushMergedPresynapticUpdate3kernelgToDevice(5, d_kernelginput_to_conv2d_syn);
}
void freekernelginput_to_conv2d_syn() {
    CHECK_CUDA_ERRORS(cudaFreeHost(kernelginput_to_conv2d_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_kernelginput_to_conv2d_syn));
}
void pushkernelginput_to_conv2d_synToDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_kernelginput_to_conv2d_syn, kernelginput_to_conv2d_syn, count * sizeof(scalar), cudaMemcpyHostToDevice));
}
void pullkernelginput_to_conv2d_synFromDevice(unsigned int count) {
    CHECK_CUDA_ERRORS(cudaMemcpy(kernelginput_to_conv2d_syn, d_kernelginput_to_conv2d_syn, count * sizeof(scalar), cudaMemcpyDeviceToHost));
}

// ------------------------------------------------------------------------
// copying things to device
// ------------------------------------------------------------------------
void pushconv2d_1_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_1_nrn, glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_1_nrn, glbSpkconv2d_1_nrn, 65536 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_1_nrn, glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_1_nrn, glbSpkconv2d_1_nrn, glbSpkCntconv2d_1_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_1_nrn, Fxconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_1_nrn, Fxconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_1_nrn, Vmemconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_1_nrn, Vmemconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_1_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_1_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_1_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_2_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_2_nrn, glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_2_nrn, glbSpkconv2d_2_nrn, 32768 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_2_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_2_nrn, glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_2_nrn, glbSpkconv2d_2_nrn, glbSpkCntconv2d_2_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_2_nrn, Fxconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_2_nrn, Fxconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_2_nrn, Vmemconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_2_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_2_nrn, Vmemconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_2_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_2_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_2_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_3_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_3_nrn, glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_3_nrn, glbSpkconv2d_3_nrn, 32768 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_3_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_3_nrn, glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_3_nrn, glbSpkconv2d_3_nrn, glbSpkCntconv2d_3_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_3_nrn, Fxconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_3_nrn, Fxconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_3_nrn, Vmemconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_3_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_3_nrn, Vmemconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_3_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_3_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_3_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_4_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_4_nrn, glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_4_nrn, glbSpkconv2d_4_nrn, 16384 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_4_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_4_nrn, glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_4_nrn, glbSpkconv2d_4_nrn, glbSpkCntconv2d_4_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_4_nrn, Fxconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_4_nrn, Fxconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_4_nrn, Vmemconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_4_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_4_nrn, Vmemconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_4_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_4_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_4_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_5_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_5_nrn, glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_5_nrn, glbSpkconv2d_5_nrn, 16384 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_5_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_5_nrn, glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_5_nrn, glbSpkconv2d_5_nrn, glbSpkCntconv2d_5_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_5_nrn, Fxconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_5_nrn, Fxconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_5_nrn, Vmemconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_5_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_5_nrn, Vmemconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_5_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_5_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_5_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_6_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_6_nrn, glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_6_nrn, glbSpkconv2d_6_nrn, 8192 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_6_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_6_nrn, glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_6_nrn, glbSpkconv2d_6_nrn, glbSpkCntconv2d_6_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_6_nrn, Fxconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_6_nrn, Fxconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_6_nrn, Vmemconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_6_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_6_nrn, Vmemconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_6_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_6_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_6_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_7_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_7_nrn, glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_7_nrn, glbSpkconv2d_7_nrn, 8192 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_7_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_7_nrn, glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_7_nrn, glbSpkconv2d_7_nrn, glbSpkCntconv2d_7_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_7_nrn, Fxconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_7_nrn, Fxconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_7_nrn, Vmemconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_7_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_7_nrn, Vmemconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_7_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_7_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_7_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_8_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_8_nrn, glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_8_nrn, glbSpkconv2d_8_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_8_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_8_nrn, glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_8_nrn, glbSpkconv2d_8_nrn, glbSpkCntconv2d_8_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_8_nrn, Fxconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_8_nrn, Fxconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_8_nrn, Vmemconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_8_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_8_nrn, Vmemconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_8_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_8_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_8_nrnToDevice(uninitialisedOnly);
}

void pushconv2d_9_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_9_nrn, glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_9_nrn, glbSpkconv2d_9_nrn, 2048 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_9_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntconv2d_9_nrn, glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkconv2d_9_nrn, glbSpkconv2d_9_nrn, glbSpkCntconv2d_9_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_9_nrn, Fxconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_9_nrn, Fxconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_9_nrn, Vmemconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_9_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_9_nrn, Vmemconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_9_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_9_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_9_nrnToDevice(uninitialisedOnly);
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

void pushFxconv2d_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_nrn, Fxconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxconv2d_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxconv2d_nrn, Fxconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemconv2d_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_nrn, Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemconv2d_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemconv2d_nrn, Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushconv2d_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxconv2d_nrnToDevice(uninitialisedOnly);
    pushVmemconv2d_nrnToDevice(uninitialisedOnly);
}

void pushdense_1_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_1_nrn, glbSpkCntdense_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_1_nrn, glbSpkdense_1_nrn, 4096 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushdense_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_1_nrn, glbSpkCntdense_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_1_nrn, glbSpkdense_1_nrn, glbSpkCntdense_1_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxdense_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxdense_1_nrn, Fxdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxdense_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxdense_1_nrn, Fxdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemdense_1_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_1_nrn, Vmemdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemdense_1_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_1_nrn, Vmemdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushdense_1_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxdense_1_nrnToDevice(uninitialisedOnly);
    pushVmemdense_1_nrnToDevice(uninitialisedOnly);
}

void pushdense_2_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_2_nrn, glbSpkCntdense_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_2_nrn, glbSpkdense_2_nrn, 10 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushdense_2_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_2_nrn, glbSpkCntdense_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_2_nrn, glbSpkdense_2_nrn, glbSpkCntdense_2_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxdense_2_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxdense_2_nrn, Fxdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxdense_2_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxdense_2_nrn, Fxdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemdense_2_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_2_nrn, Vmemdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemdense_2_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_2_nrn, Vmemdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushdense_2_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxdense_2_nrnToDevice(uninitialisedOnly);
    pushVmemdense_2_nrnToDevice(uninitialisedOnly);
}

void pushdense_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_nrn, glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_nrn, glbSpkdense_nrn, 4096 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushdense_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntdense_nrn, glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkdense_nrn, glbSpkdense_nrn, glbSpkCntdense_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushFxdense_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxdense_nrn, Fxdense_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentFxdense_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Fxdense_nrn, Fxdense_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmemdense_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_nrn, Vmemdense_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmemdense_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmemdense_nrn, Vmemdense_nrn, 4096 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushdense_nrnStateToDevice(bool uninitialisedOnly) {
    pushFxdense_nrnToDevice(uninitialisedOnly);
    pushVmemdense_nrnToDevice(uninitialisedOnly);
}

void pushinput_nrnSpikesToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntinput_nrn, glbSpkCntinput_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkinput_nrn, glbSpkinput_nrn, 3072 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    }
}

void pushinput_nrnCurrentSpikesToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkCntinput_nrn, glbSpkCntinput_nrn, 1 * sizeof(unsigned int), cudaMemcpyHostToDevice));
    CHECK_CUDA_ERRORS(cudaMemcpy(d_glbSpkinput_nrn, glbSpkinput_nrn, glbSpkCntinput_nrn[0] * sizeof(unsigned int), cudaMemcpyHostToDevice));
}

void pushinputinput_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inputinput_nrn, inputinput_nrn, 3072 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentinputinput_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_inputinput_nrn, inputinput_nrn, 3072 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushVmeminput_nrnToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmeminput_nrn, Vmeminput_nrn, 3072 * sizeof(scalar), cudaMemcpyHostToDevice));
    }
}

void pushCurrentVmeminput_nrnToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_Vmeminput_nrn, Vmeminput_nrn, 3072 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinput_nrnStateToDevice(bool uninitialisedOnly) {
    pushinputinput_nrnToDevice(uninitialisedOnly);
    pushVmeminput_nrnToDevice(uninitialisedOnly);
}

void pushinSynconv2d_1_to_conv2d_2_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_1_to_conv2d_2_syn, inSynconv2d_1_to_conv2d_2_syn, 32768 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_1_to_conv2d_2_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_1_to_conv2d_2_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_2_to_conv2d_3_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_2_to_conv2d_3_syn, inSynconv2d_2_to_conv2d_3_syn, 32768 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_2_to_conv2d_3_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_2_to_conv2d_3_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_3_to_conv2d_4_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_3_to_conv2d_4_syn, inSynconv2d_3_to_conv2d_4_syn, 16384 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_3_to_conv2d_4_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_3_to_conv2d_4_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_4_to_conv2d_5_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_4_to_conv2d_5_syn, inSynconv2d_4_to_conv2d_5_syn, 16384 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_4_to_conv2d_5_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_4_to_conv2d_5_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_5_to_conv2d_6_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_5_to_conv2d_6_syn, inSynconv2d_5_to_conv2d_6_syn, 8192 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_5_to_conv2d_6_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_5_to_conv2d_6_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_6_to_conv2d_7_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_6_to_conv2d_7_syn, inSynconv2d_6_to_conv2d_7_syn, 8192 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_6_to_conv2d_7_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_6_to_conv2d_7_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_7_to_conv2d_8_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_7_to_conv2d_8_syn, inSynconv2d_7_to_conv2d_8_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_7_to_conv2d_8_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_7_to_conv2d_8_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_8_to_conv2d_9_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_8_to_conv2d_9_syn, inSynconv2d_8_to_conv2d_9_syn, 2048 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_8_to_conv2d_9_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_8_to_conv2d_9_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_9_to_dense_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_9_to_dense_syn, inSynconv2d_9_to_dense_syn, 4096 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_9_to_dense_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_9_to_dense_synToDevice(uninitialisedOnly);
}

void pushinSynconv2d_to_conv2d_1_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSynconv2d_to_conv2d_1_syn, inSynconv2d_to_conv2d_1_syn, 65536 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushconv2d_to_conv2d_1_synStateToDevice(bool uninitialisedOnly) {
    pushinSynconv2d_to_conv2d_1_synToDevice(uninitialisedOnly);
}

void pushgdense_1_to_dense_2_synToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_gdense_1_to_dense_2_syn, gdense_1_to_dense_2_syn, 40960 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinSyndense_1_to_dense_2_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSyndense_1_to_dense_2_syn, inSyndense_1_to_dense_2_syn, 10 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushdense_1_to_dense_2_synStateToDevice(bool uninitialisedOnly) {
    pushgdense_1_to_dense_2_synToDevice(uninitialisedOnly);
    pushinSyndense_1_to_dense_2_synToDevice(uninitialisedOnly);
}

void pushgdense_to_dense_1_synToDevice(bool uninitialisedOnly) {
    CHECK_CUDA_ERRORS(cudaMemcpy(d_gdense_to_dense_1_syn, gdense_to_dense_1_syn, 16777216 * sizeof(scalar), cudaMemcpyHostToDevice));
}

void pushinSyndense_to_dense_1_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSyndense_to_dense_1_syn, inSyndense_to_dense_1_syn, 4096 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushdense_to_dense_1_synStateToDevice(bool uninitialisedOnly) {
    pushgdense_to_dense_1_synToDevice(uninitialisedOnly);
    pushinSyndense_to_dense_1_synToDevice(uninitialisedOnly);
}

void pushinSyninput_to_conv2d_synToDevice(bool uninitialisedOnly) {
    if(!uninitialisedOnly) {
        CHECK_CUDA_ERRORS(cudaMemcpy(d_inSyninput_to_conv2d_syn, inSyninput_to_conv2d_syn, 65536 * sizeof(float), cudaMemcpyHostToDevice));
    }
}

void pushinput_to_conv2d_synStateToDevice(bool uninitialisedOnly) {
    pushinSyninput_to_conv2d_synToDevice(uninitialisedOnly);
}


// ------------------------------------------------------------------------
// copying things from device
// ------------------------------------------------------------------------
void pullconv2d_1_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_1_nrn, d_glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_1_nrn, d_glbSpkconv2d_1_nrn, 65536 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_1_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_1_nrn, d_glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_1_nrn, d_glbSpkconv2d_1_nrn, glbSpkCntconv2d_1_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_1_nrn, d_Fxconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_1_nrn, d_Fxconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_1_nrn, d_Vmemconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_1_nrn, d_Vmemconv2d_1_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_1_nrnStateFromDevice() {
    pullFxconv2d_1_nrnFromDevice();
    pullVmemconv2d_1_nrnFromDevice();
}

void pullconv2d_2_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_2_nrn, d_glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_2_nrn, d_glbSpkconv2d_2_nrn, 32768 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_2_nrn, d_glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_2_nrn, d_glbSpkconv2d_2_nrn, glbSpkCntconv2d_2_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_2_nrn, d_Fxconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_2_nrn, d_Fxconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_2_nrn, d_Vmemconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_2_nrn, d_Vmemconv2d_2_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_nrnStateFromDevice() {
    pullFxconv2d_2_nrnFromDevice();
    pullVmemconv2d_2_nrnFromDevice();
}

void pullconv2d_3_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_3_nrn, d_glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_3_nrn, d_glbSpkconv2d_3_nrn, 32768 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_3_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_3_nrn, d_glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_3_nrn, d_glbSpkconv2d_3_nrn, glbSpkCntconv2d_3_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_3_nrn, d_Fxconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_3_nrn, d_Fxconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_3_nrn, d_Vmemconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_3_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_3_nrn, d_Vmemconv2d_3_nrn, 32768 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_3_nrnStateFromDevice() {
    pullFxconv2d_3_nrnFromDevice();
    pullVmemconv2d_3_nrnFromDevice();
}

void pullconv2d_4_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_4_nrn, d_glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_4_nrn, d_glbSpkconv2d_4_nrn, 16384 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_4_nrn, d_glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_4_nrn, d_glbSpkconv2d_4_nrn, glbSpkCntconv2d_4_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_4_nrn, d_Fxconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_4_nrn, d_Fxconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_4_nrn, d_Vmemconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_4_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_4_nrn, d_Vmemconv2d_4_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_nrnStateFromDevice() {
    pullFxconv2d_4_nrnFromDevice();
    pullVmemconv2d_4_nrnFromDevice();
}

void pullconv2d_5_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_5_nrn, d_glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_5_nrn, d_glbSpkconv2d_5_nrn, 16384 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_5_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_5_nrn, d_glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_5_nrn, d_glbSpkconv2d_5_nrn, glbSpkCntconv2d_5_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_5_nrn, d_Fxconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_5_nrn, d_Fxconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_5_nrn, d_Vmemconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_5_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_5_nrn, d_Vmemconv2d_5_nrn, 16384 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_5_nrnStateFromDevice() {
    pullFxconv2d_5_nrnFromDevice();
    pullVmemconv2d_5_nrnFromDevice();
}

void pullconv2d_6_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_6_nrn, d_glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_6_nrn, d_glbSpkconv2d_6_nrn, 8192 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_6_nrn, d_glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_6_nrn, d_glbSpkconv2d_6_nrn, glbSpkCntconv2d_6_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_6_nrn, d_Fxconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_6_nrn, d_Fxconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_6_nrn, d_Vmemconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_6_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_6_nrn, d_Vmemconv2d_6_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_nrnStateFromDevice() {
    pullFxconv2d_6_nrnFromDevice();
    pullVmemconv2d_6_nrnFromDevice();
}

void pullconv2d_7_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_7_nrn, d_glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_7_nrn, d_glbSpkconv2d_7_nrn, 8192 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_7_nrn, d_glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_7_nrn, d_glbSpkconv2d_7_nrn, glbSpkCntconv2d_7_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_7_nrn, d_Fxconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_7_nrn, d_Fxconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_7_nrn, d_Vmemconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_7_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_7_nrn, d_Vmemconv2d_7_nrn, 8192 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_nrnStateFromDevice() {
    pullFxconv2d_7_nrnFromDevice();
    pullVmemconv2d_7_nrnFromDevice();
}

void pullconv2d_8_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_8_nrn, d_glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_8_nrn, d_glbSpkconv2d_8_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_8_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_8_nrn, d_glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_8_nrn, d_glbSpkconv2d_8_nrn, glbSpkCntconv2d_8_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_8_nrn, d_Fxconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_8_nrn, d_Fxconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_8_nrn, d_Vmemconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_8_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_8_nrn, d_Vmemconv2d_8_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_8_nrnStateFromDevice() {
    pullFxconv2d_8_nrnFromDevice();
    pullVmemconv2d_8_nrnFromDevice();
}

void pullconv2d_9_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_9_nrn, d_glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_9_nrn, d_glbSpkconv2d_9_nrn, 2048 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_9_nrn, d_glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_9_nrn, d_glbSpkconv2d_9_nrn, glbSpkCntconv2d_9_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_9_nrn, d_Fxconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_9_nrn, d_Fxconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_9_nrn, d_Vmemconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_9_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_9_nrn, d_Vmemconv2d_9_nrn, 2048 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_nrnStateFromDevice() {
    pullFxconv2d_9_nrnFromDevice();
    pullVmemconv2d_9_nrnFromDevice();
}

void pullconv2d_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_nrn, d_glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_nrn, d_glbSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullconv2d_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntconv2d_nrn, d_glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkconv2d_nrn, d_glbSpkconv2d_nrn, glbSpkCntconv2d_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_nrn, d_Fxconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxconv2d_nrn, d_Fxconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_nrn, d_Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemconv2d_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemconv2d_nrn, d_Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullconv2d_nrnStateFromDevice() {
    pullFxconv2d_nrnFromDevice();
    pullVmemconv2d_nrnFromDevice();
}

void pulldense_1_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_1_nrn, d_glbSpkCntdense_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_1_nrn, d_glbSpkdense_1_nrn, 4096 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pulldense_1_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_1_nrn, d_glbSpkCntdense_1_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_1_nrn, d_glbSpkdense_1_nrn, glbSpkCntdense_1_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxdense_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxdense_1_nrn, d_Fxdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxdense_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxdense_1_nrn, d_Fxdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemdense_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_1_nrn, d_Vmemdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemdense_1_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_1_nrn, d_Vmemdense_1_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pulldense_1_nrnStateFromDevice() {
    pullFxdense_1_nrnFromDevice();
    pullVmemdense_1_nrnFromDevice();
}

void pulldense_2_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_2_nrn, d_glbSpkCntdense_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_2_nrn, d_glbSpkdense_2_nrn, 10 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pulldense_2_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_2_nrn, d_glbSpkCntdense_2_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_2_nrn, d_glbSpkdense_2_nrn, glbSpkCntdense_2_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxdense_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxdense_2_nrn, d_Fxdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxdense_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxdense_2_nrn, d_Fxdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemdense_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_2_nrn, d_Vmemdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemdense_2_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_2_nrn, d_Vmemdense_2_nrn, 10 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pulldense_2_nrnStateFromDevice() {
    pullFxdense_2_nrnFromDevice();
    pullVmemdense_2_nrnFromDevice();
}

void pulldense_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_nrn, d_glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_nrn, d_glbSpkdense_nrn, 4096 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pulldense_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntdense_nrn, d_glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkdense_nrn, d_glbSpkdense_nrn, glbSpkCntdense_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullFxdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxdense_nrn, d_Fxdense_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentFxdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Fxdense_nrn, d_Fxdense_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmemdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_nrn, d_Vmemdense_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmemdense_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmemdense_nrn, d_Vmemdense_nrn, 4096 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pulldense_nrnStateFromDevice() {
    pullFxdense_nrnFromDevice();
    pullVmemdense_nrnFromDevice();
}

void pullinput_nrnSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntinput_nrn, d_glbSpkCntinput_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkinput_nrn, d_glbSpkinput_nrn, 3072 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullinput_nrnCurrentSpikesFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkCntinput_nrn, d_glbSpkCntinput_nrn, 1 * sizeof(unsigned int), cudaMemcpyDeviceToHost));
    CHECK_CUDA_ERRORS(cudaMemcpy(glbSpkinput_nrn, d_glbSpkinput_nrn, glbSpkCntinput_nrn[0] * sizeof(unsigned int), cudaMemcpyDeviceToHost));
}

void pullinputinput_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inputinput_nrn, d_inputinput_nrn, 3072 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentinputinput_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inputinput_nrn, d_inputinput_nrn, 3072 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullVmeminput_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmeminput_nrn, d_Vmeminput_nrn, 3072 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullCurrentVmeminput_nrnFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(Vmeminput_nrn, d_Vmeminput_nrn, 3072 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinput_nrnStateFromDevice() {
    pullinputinput_nrnFromDevice();
    pullVmeminput_nrnFromDevice();
}

void pullinSynconv2d_1_to_conv2d_2_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_1_to_conv2d_2_syn, d_inSynconv2d_1_to_conv2d_2_syn, 32768 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_1_to_conv2d_2_synStateFromDevice() {
    pullinSynconv2d_1_to_conv2d_2_synFromDevice();
}

void pullinSynconv2d_2_to_conv2d_3_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_2_to_conv2d_3_syn, d_inSynconv2d_2_to_conv2d_3_syn, 32768 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_2_to_conv2d_3_synStateFromDevice() {
    pullinSynconv2d_2_to_conv2d_3_synFromDevice();
}

void pullinSynconv2d_3_to_conv2d_4_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_3_to_conv2d_4_syn, d_inSynconv2d_3_to_conv2d_4_syn, 16384 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_3_to_conv2d_4_synStateFromDevice() {
    pullinSynconv2d_3_to_conv2d_4_synFromDevice();
}

void pullinSynconv2d_4_to_conv2d_5_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_4_to_conv2d_5_syn, d_inSynconv2d_4_to_conv2d_5_syn, 16384 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_4_to_conv2d_5_synStateFromDevice() {
    pullinSynconv2d_4_to_conv2d_5_synFromDevice();
}

void pullinSynconv2d_5_to_conv2d_6_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_5_to_conv2d_6_syn, d_inSynconv2d_5_to_conv2d_6_syn, 8192 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_5_to_conv2d_6_synStateFromDevice() {
    pullinSynconv2d_5_to_conv2d_6_synFromDevice();
}

void pullinSynconv2d_6_to_conv2d_7_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_6_to_conv2d_7_syn, d_inSynconv2d_6_to_conv2d_7_syn, 8192 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_6_to_conv2d_7_synStateFromDevice() {
    pullinSynconv2d_6_to_conv2d_7_synFromDevice();
}

void pullinSynconv2d_7_to_conv2d_8_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_7_to_conv2d_8_syn, d_inSynconv2d_7_to_conv2d_8_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_7_to_conv2d_8_synStateFromDevice() {
    pullinSynconv2d_7_to_conv2d_8_synFromDevice();
}

void pullinSynconv2d_8_to_conv2d_9_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_8_to_conv2d_9_syn, d_inSynconv2d_8_to_conv2d_9_syn, 2048 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_8_to_conv2d_9_synStateFromDevice() {
    pullinSynconv2d_8_to_conv2d_9_synFromDevice();
}

void pullinSynconv2d_9_to_dense_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_9_to_dense_syn, d_inSynconv2d_9_to_dense_syn, 4096 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_9_to_dense_synStateFromDevice() {
    pullinSynconv2d_9_to_dense_synFromDevice();
}

void pullinSynconv2d_to_conv2d_1_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSynconv2d_to_conv2d_1_syn, d_inSynconv2d_to_conv2d_1_syn, 65536 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullconv2d_to_conv2d_1_synStateFromDevice() {
    pullinSynconv2d_to_conv2d_1_synFromDevice();
}

void pullgdense_1_to_dense_2_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(gdense_1_to_dense_2_syn, d_gdense_1_to_dense_2_syn, 40960 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinSyndense_1_to_dense_2_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSyndense_1_to_dense_2_syn, d_inSyndense_1_to_dense_2_syn, 10 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pulldense_1_to_dense_2_synStateFromDevice() {
    pullgdense_1_to_dense_2_synFromDevice();
    pullinSyndense_1_to_dense_2_synFromDevice();
}

void pullgdense_to_dense_1_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(gdense_to_dense_1_syn, d_gdense_to_dense_1_syn, 16777216 * sizeof(scalar), cudaMemcpyDeviceToHost));
}

void pullinSyndense_to_dense_1_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSyndense_to_dense_1_syn, d_inSyndense_to_dense_1_syn, 4096 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pulldense_to_dense_1_synStateFromDevice() {
    pullgdense_to_dense_1_synFromDevice();
    pullinSyndense_to_dense_1_synFromDevice();
}

void pullinSyninput_to_conv2d_synFromDevice() {
    CHECK_CUDA_ERRORS(cudaMemcpy(inSyninput_to_conv2d_syn, d_inSyninput_to_conv2d_syn, 65536 * sizeof(float), cudaMemcpyDeviceToHost));
}

void pullinput_to_conv2d_synStateFromDevice() {
    pullinSyninput_to_conv2d_synFromDevice();
}


// ------------------------------------------------------------------------
// helper getter functions
// ------------------------------------------------------------------------
unsigned int* getconv2d_1_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_1_nrn);
}

unsigned int& getconv2d_1_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_1_nrn[0];
}

scalar* getCurrentFxconv2d_1_nrn(unsigned int batch) {
    return Fxconv2d_1_nrn;
}

scalar* getCurrentVmemconv2d_1_nrn(unsigned int batch) {
    return Vmemconv2d_1_nrn;
}

unsigned int* getconv2d_2_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_2_nrn);
}

unsigned int& getconv2d_2_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_2_nrn[0];
}

scalar* getCurrentFxconv2d_2_nrn(unsigned int batch) {
    return Fxconv2d_2_nrn;
}

scalar* getCurrentVmemconv2d_2_nrn(unsigned int batch) {
    return Vmemconv2d_2_nrn;
}

unsigned int* getconv2d_3_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_3_nrn);
}

unsigned int& getconv2d_3_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_3_nrn[0];
}

scalar* getCurrentFxconv2d_3_nrn(unsigned int batch) {
    return Fxconv2d_3_nrn;
}

scalar* getCurrentVmemconv2d_3_nrn(unsigned int batch) {
    return Vmemconv2d_3_nrn;
}

unsigned int* getconv2d_4_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_4_nrn);
}

unsigned int& getconv2d_4_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_4_nrn[0];
}

scalar* getCurrentFxconv2d_4_nrn(unsigned int batch) {
    return Fxconv2d_4_nrn;
}

scalar* getCurrentVmemconv2d_4_nrn(unsigned int batch) {
    return Vmemconv2d_4_nrn;
}

unsigned int* getconv2d_5_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_5_nrn);
}

unsigned int& getconv2d_5_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_5_nrn[0];
}

scalar* getCurrentFxconv2d_5_nrn(unsigned int batch) {
    return Fxconv2d_5_nrn;
}

scalar* getCurrentVmemconv2d_5_nrn(unsigned int batch) {
    return Vmemconv2d_5_nrn;
}

unsigned int* getconv2d_6_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_6_nrn);
}

unsigned int& getconv2d_6_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_6_nrn[0];
}

scalar* getCurrentFxconv2d_6_nrn(unsigned int batch) {
    return Fxconv2d_6_nrn;
}

scalar* getCurrentVmemconv2d_6_nrn(unsigned int batch) {
    return Vmemconv2d_6_nrn;
}

unsigned int* getconv2d_7_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_7_nrn);
}

unsigned int& getconv2d_7_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_7_nrn[0];
}

scalar* getCurrentFxconv2d_7_nrn(unsigned int batch) {
    return Fxconv2d_7_nrn;
}

scalar* getCurrentVmemconv2d_7_nrn(unsigned int batch) {
    return Vmemconv2d_7_nrn;
}

unsigned int* getconv2d_8_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_8_nrn);
}

unsigned int& getconv2d_8_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_8_nrn[0];
}

scalar* getCurrentFxconv2d_8_nrn(unsigned int batch) {
    return Fxconv2d_8_nrn;
}

scalar* getCurrentVmemconv2d_8_nrn(unsigned int batch) {
    return Vmemconv2d_8_nrn;
}

unsigned int* getconv2d_9_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_9_nrn);
}

unsigned int& getconv2d_9_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_9_nrn[0];
}

scalar* getCurrentFxconv2d_9_nrn(unsigned int batch) {
    return Fxconv2d_9_nrn;
}

scalar* getCurrentVmemconv2d_9_nrn(unsigned int batch) {
    return Vmemconv2d_9_nrn;
}

unsigned int* getconv2d_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkconv2d_nrn);
}

unsigned int& getconv2d_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntconv2d_nrn[0];
}

scalar* getCurrentFxconv2d_nrn(unsigned int batch) {
    return Fxconv2d_nrn;
}

scalar* getCurrentVmemconv2d_nrn(unsigned int batch) {
    return Vmemconv2d_nrn;
}

unsigned int* getdense_1_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkdense_1_nrn);
}

unsigned int& getdense_1_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntdense_1_nrn[0];
}

scalar* getCurrentFxdense_1_nrn(unsigned int batch) {
    return Fxdense_1_nrn;
}

scalar* getCurrentVmemdense_1_nrn(unsigned int batch) {
    return Vmemdense_1_nrn;
}

unsigned int* getdense_2_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkdense_2_nrn);
}

unsigned int& getdense_2_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntdense_2_nrn[0];
}

scalar* getCurrentFxdense_2_nrn(unsigned int batch) {
    return Fxdense_2_nrn;
}

scalar* getCurrentVmemdense_2_nrn(unsigned int batch) {
    return Vmemdense_2_nrn;
}

unsigned int* getdense_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkdense_nrn);
}

unsigned int& getdense_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntdense_nrn[0];
}

scalar* getCurrentFxdense_nrn(unsigned int batch) {
    return Fxdense_nrn;
}

scalar* getCurrentVmemdense_nrn(unsigned int batch) {
    return Vmemdense_nrn;
}

unsigned int* getinput_nrnCurrentSpikes(unsigned int batch) {
    return (glbSpkinput_nrn);
}

unsigned int& getinput_nrnCurrentSpikeCount(unsigned int batch) {
    return glbSpkCntinput_nrn[0];
}

scalar* getCurrentinputinput_nrn(unsigned int batch) {
    return inputinput_nrn;
}

scalar* getCurrentVmeminput_nrn(unsigned int batch) {
    return Vmeminput_nrn;
}


void copyStateToDevice(bool uninitialisedOnly) {
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
    pushdense_1_nrnStateToDevice(uninitialisedOnly);
    pushdense_2_nrnStateToDevice(uninitialisedOnly);
    pushdense_nrnStateToDevice(uninitialisedOnly);
    pushinput_nrnStateToDevice(uninitialisedOnly);
    pushconv2d_1_to_conv2d_2_synStateToDevice(uninitialisedOnly);
    pushconv2d_2_to_conv2d_3_synStateToDevice(uninitialisedOnly);
    pushconv2d_3_to_conv2d_4_synStateToDevice(uninitialisedOnly);
    pushconv2d_4_to_conv2d_5_synStateToDevice(uninitialisedOnly);
    pushconv2d_5_to_conv2d_6_synStateToDevice(uninitialisedOnly);
    pushconv2d_6_to_conv2d_7_synStateToDevice(uninitialisedOnly);
    pushconv2d_7_to_conv2d_8_synStateToDevice(uninitialisedOnly);
    pushconv2d_8_to_conv2d_9_synStateToDevice(uninitialisedOnly);
    pushconv2d_9_to_dense_synStateToDevice(uninitialisedOnly);
    pushconv2d_to_conv2d_1_synStateToDevice(uninitialisedOnly);
    pushdense_1_to_dense_2_synStateToDevice(uninitialisedOnly);
    pushdense_to_dense_1_synStateToDevice(uninitialisedOnly);
    pushinput_to_conv2d_synStateToDevice(uninitialisedOnly);
}

void copyConnectivityToDevice(bool uninitialisedOnly) {
}

void copyStateFromDevice() {
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
    pulldense_1_nrnStateFromDevice();
    pulldense_2_nrnStateFromDevice();
    pulldense_nrnStateFromDevice();
    pullinput_nrnStateFromDevice();
    pullconv2d_1_to_conv2d_2_synStateFromDevice();
    pullconv2d_2_to_conv2d_3_synStateFromDevice();
    pullconv2d_3_to_conv2d_4_synStateFromDevice();
    pullconv2d_4_to_conv2d_5_synStateFromDevice();
    pullconv2d_5_to_conv2d_6_synStateFromDevice();
    pullconv2d_6_to_conv2d_7_synStateFromDevice();
    pullconv2d_7_to_conv2d_8_synStateFromDevice();
    pullconv2d_8_to_conv2d_9_synStateFromDevice();
    pullconv2d_9_to_dense_synStateFromDevice();
    pullconv2d_to_conv2d_1_synStateFromDevice();
    pulldense_1_to_dense_2_synStateFromDevice();
    pulldense_to_dense_1_synStateFromDevice();
    pullinput_to_conv2d_synStateFromDevice();
}

void copyCurrentSpikesFromDevice() {
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
    pulldense_1_nrnCurrentSpikesFromDevice();
    pulldense_2_nrnCurrentSpikesFromDevice();
    pulldense_nrnCurrentSpikesFromDevice();
    pullinput_nrnCurrentSpikesFromDevice();
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
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_1_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_1_nrn, 65536 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_1_nrn, 65536 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_1_nrn, 65536 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_1_nrn, 65536 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_1_nrn, 65536 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_1_nrn, 65536 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_2_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_2_nrn, 32768 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_2_nrn, 32768 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_2_nrn, 32768 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_2_nrn, 32768 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_2_nrn, 32768 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_2_nrn, 32768 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_3_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_3_nrn, 32768 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_3_nrn, 32768 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_3_nrn, 32768 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_3_nrn, 32768 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_3_nrn, 32768 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_3_nrn, 32768 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_4_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_4_nrn, 16384 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_4_nrn, 16384 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_4_nrn, 16384 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_4_nrn, 16384 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_4_nrn, 16384 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_4_nrn, 16384 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_5_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_5_nrn, 16384 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_5_nrn, 16384 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_5_nrn, 16384 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_5_nrn, 16384 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_5_nrn, 16384 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_5_nrn, 16384 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_6_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_6_nrn, 8192 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_6_nrn, 8192 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_6_nrn, 8192 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_6_nrn, 8192 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_6_nrn, 8192 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_6_nrn, 8192 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_7_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_7_nrn, 8192 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_7_nrn, 8192 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_7_nrn, 8192 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_7_nrn, 8192 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_7_nrn, 8192 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_7_nrn, 8192 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_8_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_8_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_8_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_8_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_8_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_8_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_8_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_9_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_9_nrn, 2048 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_9_nrn, 2048 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_9_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_9_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_9_nrn, 2048 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_9_nrn, 2048 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntconv2d_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkconv2d_nrn, 65536 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkconv2d_nrn, 65536 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxconv2d_nrn, 65536 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxconv2d_nrn, 65536 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemconv2d_nrn, 65536 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemconv2d_nrn, 65536 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntdense_1_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntdense_1_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkdense_1_nrn, 4096 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkdense_1_nrn, 4096 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxdense_1_nrn, 4096 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxdense_1_nrn, 4096 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemdense_1_nrn, 4096 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemdense_1_nrn, 4096 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntdense_2_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntdense_2_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkdense_2_nrn, 10 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkdense_2_nrn, 10 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxdense_2_nrn, 10 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxdense_2_nrn, 10 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemdense_2_nrn, 10 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemdense_2_nrn, 10 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntdense_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntdense_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkdense_nrn, 4096 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkdense_nrn, 4096 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Fxdense_nrn, 4096 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Fxdense_nrn, 4096 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmemdense_nrn, 4096 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmemdense_nrn, 4096 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkCntinput_nrn, 1 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkCntinput_nrn, 1 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&glbSpkinput_nrn, 3072 * sizeof(unsigned int), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_glbSpkinput_nrn, 3072 * sizeof(unsigned int)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inputinput_nrn, 3072 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inputinput_nrn, 3072 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&Vmeminput_nrn, 3072 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_Vmeminput_nrn, 3072 * sizeof(scalar)));
    
    // ------------------------------------------------------------------------
    // custom update variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // postsynaptic variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_to_conv2d_1_syn, 65536 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_to_conv2d_1_syn, 65536 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_1_to_conv2d_2_syn, 32768 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_1_to_conv2d_2_syn, 32768 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_2_to_conv2d_3_syn, 32768 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_2_to_conv2d_3_syn, 32768 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_3_to_conv2d_4_syn, 16384 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_3_to_conv2d_4_syn, 16384 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_4_to_conv2d_5_syn, 16384 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_4_to_conv2d_5_syn, 16384 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_5_to_conv2d_6_syn, 8192 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_5_to_conv2d_6_syn, 8192 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_6_to_conv2d_7_syn, 8192 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_6_to_conv2d_7_syn, 8192 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_7_to_conv2d_8_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_7_to_conv2d_8_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_8_to_conv2d_9_syn, 2048 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_8_to_conv2d_9_syn, 2048 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSyninput_to_conv2d_syn, 65536 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSyninput_to_conv2d_syn, 65536 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSyndense_to_dense_1_syn, 4096 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSyndense_to_dense_1_syn, 4096 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSyndense_1_to_dense_2_syn, 10 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSyndense_1_to_dense_2_syn, 10 * sizeof(float)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&inSynconv2d_9_to_dense_syn, 4096 * sizeof(float), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_inSynconv2d_9_to_dense_syn, 4096 * sizeof(float)));
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaHostAlloc(&gdense_1_to_dense_2_syn, 40960 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_gdense_1_to_dense_2_syn, 40960 * sizeof(scalar)));
    CHECK_CUDA_ERRORS(cudaHostAlloc(&gdense_to_dense_1_syn, 16777216 * sizeof(scalar), cudaHostAllocPortable));
    CHECK_CUDA_ERRORS(cudaMalloc(&d_gdense_to_dense_1_syn, 16777216 * sizeof(scalar)));
    
    pushMergedNeuronInitGroup0ToDevice(0, d_glbSpkCntinput_nrn, d_glbSpkinput_nrn, d_inputinput_nrn, d_Vmeminput_nrn, 3072);
    pushMergedNeuronInitGroup1ToDevice(0, d_glbSpkCntconv2d_1_nrn, d_glbSpkconv2d_1_nrn, d_Fxconv2d_1_nrn, d_Vmemconv2d_1_nrn, d_inSynconv2d_to_conv2d_1_syn, 65536);
    pushMergedNeuronInitGroup1ToDevice(1, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, d_Fxconv2d_2_nrn, d_Vmemconv2d_2_nrn, d_inSynconv2d_1_to_conv2d_2_syn, 32768);
    pushMergedNeuronInitGroup1ToDevice(2, d_glbSpkCntconv2d_3_nrn, d_glbSpkconv2d_3_nrn, d_Fxconv2d_3_nrn, d_Vmemconv2d_3_nrn, d_inSynconv2d_2_to_conv2d_3_syn, 32768);
    pushMergedNeuronInitGroup1ToDevice(3, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, d_Fxconv2d_4_nrn, d_Vmemconv2d_4_nrn, d_inSynconv2d_3_to_conv2d_4_syn, 16384);
    pushMergedNeuronInitGroup1ToDevice(4, d_glbSpkCntconv2d_5_nrn, d_glbSpkconv2d_5_nrn, d_Fxconv2d_5_nrn, d_Vmemconv2d_5_nrn, d_inSynconv2d_4_to_conv2d_5_syn, 16384);
    pushMergedNeuronInitGroup1ToDevice(5, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, d_Fxconv2d_6_nrn, d_Vmemconv2d_6_nrn, d_inSynconv2d_5_to_conv2d_6_syn, 8192);
    pushMergedNeuronInitGroup1ToDevice(6, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, d_Fxconv2d_7_nrn, d_Vmemconv2d_7_nrn, d_inSynconv2d_6_to_conv2d_7_syn, 8192);
    pushMergedNeuronInitGroup1ToDevice(7, d_glbSpkCntconv2d_8_nrn, d_glbSpkconv2d_8_nrn, d_Fxconv2d_8_nrn, d_Vmemconv2d_8_nrn, d_inSynconv2d_7_to_conv2d_8_syn, 2048);
    pushMergedNeuronInitGroup1ToDevice(8, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, d_Fxconv2d_9_nrn, d_Vmemconv2d_9_nrn, d_inSynconv2d_8_to_conv2d_9_syn, 2048);
    pushMergedNeuronInitGroup1ToDevice(9, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, d_Fxconv2d_nrn, d_Vmemconv2d_nrn, d_inSyninput_to_conv2d_syn, 65536);
    pushMergedNeuronInitGroup1ToDevice(10, d_glbSpkCntdense_1_nrn, d_glbSpkdense_1_nrn, d_Fxdense_1_nrn, d_Vmemdense_1_nrn, d_inSyndense_to_dense_1_syn, 4096);
    pushMergedNeuronInitGroup1ToDevice(11, d_glbSpkCntdense_2_nrn, d_glbSpkdense_2_nrn, d_Fxdense_2_nrn, d_Vmemdense_2_nrn, d_inSyndense_1_to_dense_2_syn, 10);
    pushMergedNeuronInitGroup1ToDevice(12, d_glbSpkCntdense_nrn, d_glbSpkdense_nrn, d_Fxdense_nrn, d_Vmemdense_nrn, d_inSynconv2d_9_to_dense_syn, 4096);
    pushMergedNeuronUpdateGroup0ToDevice(0, d_glbSpkCntinput_nrn, d_glbSpkinput_nrn, d_inputinput_nrn, d_Vmeminput_nrn, 3072);
    pushMergedNeuronUpdateGroup1ToDevice(0, d_glbSpkCntconv2d_1_nrn, d_glbSpkconv2d_1_nrn, d_Fxconv2d_1_nrn, d_Vmemconv2d_1_nrn, d_inSynconv2d_to_conv2d_1_syn, 65536, 8.00000000000000000e+00f, 3.00000000000000000e+00f, 7.81250000000000000e-03f, 2.92968750000000000e-03f);
    pushMergedNeuronUpdateGroup1ToDevice(1, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, d_Fxconv2d_2_nrn, d_Vmemconv2d_2_nrn, d_inSynconv2d_1_to_conv2d_2_syn, 32768, 7.00000000000000000e+00f, 8.00000000000000000e+00f, 6.83593750000000000e-03f, 7.81250000000000000e-03f);
    pushMergedNeuronUpdateGroup1ToDevice(2, d_glbSpkCntconv2d_3_nrn, d_glbSpkconv2d_3_nrn, d_Fxconv2d_3_nrn, d_Vmemconv2d_3_nrn, d_inSynconv2d_2_to_conv2d_3_syn, 32768, 2.60000000000000000e+01f, 7.00000000000000000e+00f, 2.53906250000000000e-02f, 6.83593750000000000e-03f);
    pushMergedNeuronUpdateGroup1ToDevice(3, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, d_Fxconv2d_4_nrn, d_Vmemconv2d_4_nrn, d_inSynconv2d_3_to_conv2d_4_syn, 16384, 3.00000000000000000e+01f, 2.60000000000000000e+01f, 2.92968750000000000e-02f, 2.53906250000000000e-02f);
    pushMergedNeuronUpdateGroup1ToDevice(4, d_glbSpkCntconv2d_5_nrn, d_glbSpkconv2d_5_nrn, d_Fxconv2d_5_nrn, d_Vmemconv2d_5_nrn, d_inSynconv2d_4_to_conv2d_5_syn, 16384, 8.50000000000000000e+01f, 3.00000000000000000e+01f, 8.30078125000000000e-02f, 2.92968750000000000e-02f);
    pushMergedNeuronUpdateGroup1ToDevice(5, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, d_Fxconv2d_6_nrn, d_Vmemconv2d_6_nrn, d_inSynconv2d_5_to_conv2d_6_syn, 8192, 9.70000000000000000e+01f, 8.50000000000000000e+01f, 9.47265625000000000e-02f, 8.30078125000000000e-02f);
    pushMergedNeuronUpdateGroup1ToDevice(6, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, d_Fxconv2d_7_nrn, d_Vmemconv2d_7_nrn, d_inSynconv2d_6_to_conv2d_7_syn, 8192, 1.46000000000000000e+02f, 9.70000000000000000e+01f, 1.42578125000000000e-01f, 9.47265625000000000e-02f);
    pushMergedNeuronUpdateGroup1ToDevice(7, d_glbSpkCntconv2d_8_nrn, d_glbSpkconv2d_8_nrn, d_Fxconv2d_8_nrn, d_Vmemconv2d_8_nrn, d_inSynconv2d_7_to_conv2d_8_syn, 2048, 4.50000000000000000e+01f, 1.46000000000000000e+02f, 4.39453125000000000e-02f, 1.42578125000000000e-01f);
    pushMergedNeuronUpdateGroup1ToDevice(8, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, d_Fxconv2d_9_nrn, d_Vmemconv2d_9_nrn, d_inSynconv2d_8_to_conv2d_9_syn, 2048, 1.20000000000000000e+01f, 4.50000000000000000e+01f, 1.17187500000000000e-02f, 4.39453125000000000e-02f);
    pushMergedNeuronUpdateGroup1ToDevice(9, d_glbSpkCntdense_1_nrn, d_glbSpkdense_1_nrn, d_Fxdense_1_nrn, d_Vmemdense_1_nrn, d_inSyndense_to_dense_1_syn, 4096, 1.20000000000000000e+01f, 5.00000000000000000e+00f, 1.17187500000000000e-02f, 4.88281250000000000e-03f);
    pushMergedNeuronUpdateGroup1ToDevice(10, d_glbSpkCntdense_2_nrn, d_glbSpkdense_2_nrn, d_Fxdense_2_nrn, d_Vmemdense_2_nrn, d_inSyndense_1_to_dense_2_syn, 10, 1.00000000000000000e+00f, 1.20000000000000000e+01f, 9.76562500000000000e-04f, 1.17187500000000000e-02f);
    pushMergedNeuronUpdateGroup1ToDevice(11, d_glbSpkCntdense_nrn, d_glbSpkdense_nrn, d_Fxdense_nrn, d_Vmemdense_nrn, d_inSynconv2d_9_to_dense_syn, 4096, 5.00000000000000000e+00f, 1.20000000000000000e+01f, 4.88281250000000000e-03f, 1.17187500000000000e-02f);
    pushMergedNeuronUpdateGroup2ToDevice(0, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, d_Fxconv2d_nrn, d_Vmemconv2d_nrn, d_inSyninput_to_conv2d_syn, 65536);
    pushMergedPresynapticUpdateGroup0ToDevice(0, d_inSyndense_1_to_dense_2_syn, d_glbSpkCntdense_1_nrn, d_glbSpkdense_1_nrn, d_gdense_1_to_dense_2_syn, 10, 4096, 10);
    pushMergedPresynapticUpdateGroup0ToDevice(1, d_inSyndense_to_dense_1_syn, d_glbSpkCntdense_nrn, d_glbSpkdense_nrn, d_gdense_to_dense_1_syn, 4096, 4096, 4096);
    pushMergedPresynapticUpdateGroup1ToDevice(0, d_inSynconv2d_1_to_conv2d_2_syn, d_glbSpkCntconv2d_1_nrn, d_glbSpkconv2d_1_nrn, d_kernelgconv2d_1_to_conv2d_2_syn, 32768, 65536, 32768, 3.20000000000000000e+01f, 3.20000000000000000e+01f, 6.40000000000000000e+01f, 1.60000000000000000e+01f, 1.60000000000000000e+01f, 1.28000000000000000e+02f, 64, 128);
    pushMergedPresynapticUpdateGroup1ToDevice(1, d_inSynconv2d_3_to_conv2d_4_syn, d_glbSpkCntconv2d_3_nrn, d_glbSpkconv2d_3_nrn, d_kernelgconv2d_3_to_conv2d_4_syn, 16384, 32768, 16384, 1.60000000000000000e+01f, 1.60000000000000000e+01f, 1.28000000000000000e+02f, 8.00000000000000000e+00f, 8.00000000000000000e+00f, 2.56000000000000000e+02f, 128, 256);
    pushMergedPresynapticUpdateGroup1ToDevice(2, d_inSynconv2d_5_to_conv2d_6_syn, d_glbSpkCntconv2d_5_nrn, d_glbSpkconv2d_5_nrn, d_kernelgconv2d_5_to_conv2d_6_syn, 8192, 16384, 8192, 8.00000000000000000e+00f, 8.00000000000000000e+00f, 2.56000000000000000e+02f, 4.00000000000000000e+00f, 4.00000000000000000e+00f, 5.12000000000000000e+02f, 256, 512);
    pushMergedPresynapticUpdateGroup1ToDevice(3, d_inSynconv2d_7_to_conv2d_8_syn, d_glbSpkCntconv2d_7_nrn, d_glbSpkconv2d_7_nrn, d_kernelgconv2d_7_to_conv2d_8_syn, 2048, 8192, 2048, 4.00000000000000000e+00f, 4.00000000000000000e+00f, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 512, 512);
    pushMergedPresynapticUpdateGroup2ToDevice(0, d_inSynconv2d_9_to_dense_syn, d_glbSpkCntconv2d_9_nrn, d_glbSpkconv2d_9_nrn, d_weightsgconv2d_9_to_dense_syn, 4096, 2048, 4096);
    pushMergedPresynapticUpdateGroup3ToDevice(0, d_inSynconv2d_2_to_conv2d_3_syn, d_glbSpkCntconv2d_2_nrn, d_glbSpkconv2d_2_nrn, d_kernelgconv2d_2_to_conv2d_3_syn, 32768, 32768, 32768, 1.60000000000000000e+01f, 1.28000000000000000e+02f, 1.60000000000000000e+01f, 1.60000000000000000e+01f, 1.28000000000000000e+02f, 128, 128);
    pushMergedPresynapticUpdateGroup3ToDevice(1, d_inSynconv2d_4_to_conv2d_5_syn, d_glbSpkCntconv2d_4_nrn, d_glbSpkconv2d_4_nrn, d_kernelgconv2d_4_to_conv2d_5_syn, 16384, 16384, 16384, 8.00000000000000000e+00f, 2.56000000000000000e+02f, 8.00000000000000000e+00f, 8.00000000000000000e+00f, 2.56000000000000000e+02f, 256, 256);
    pushMergedPresynapticUpdateGroup3ToDevice(2, d_inSynconv2d_6_to_conv2d_7_syn, d_glbSpkCntconv2d_6_nrn, d_glbSpkconv2d_6_nrn, d_kernelgconv2d_6_to_conv2d_7_syn, 8192, 8192, 8192, 4.00000000000000000e+00f, 5.12000000000000000e+02f, 4.00000000000000000e+00f, 4.00000000000000000e+00f, 5.12000000000000000e+02f, 512, 512);
    pushMergedPresynapticUpdateGroup3ToDevice(3, d_inSynconv2d_8_to_conv2d_9_syn, d_glbSpkCntconv2d_8_nrn, d_glbSpkconv2d_8_nrn, d_kernelgconv2d_8_to_conv2d_9_syn, 2048, 2048, 2048, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 2.00000000000000000e+00f, 2.00000000000000000e+00f, 5.12000000000000000e+02f, 512, 512);
    pushMergedPresynapticUpdateGroup3ToDevice(4, d_inSynconv2d_to_conv2d_1_syn, d_glbSpkCntconv2d_nrn, d_glbSpkconv2d_nrn, d_kernelgconv2d_to_conv2d_1_syn, 65536, 65536, 65536, 3.20000000000000000e+01f, 6.40000000000000000e+01f, 3.20000000000000000e+01f, 3.20000000000000000e+01f, 6.40000000000000000e+01f, 64, 64);
    pushMergedPresynapticUpdateGroup3ToDevice(5, d_inSyninput_to_conv2d_syn, d_glbSpkCntinput_nrn, d_glbSpkinput_nrn, d_kernelginput_to_conv2d_syn, 65536, 3072, 65536, 3.20000000000000000e+01f, 3.00000000000000000e+00f, 3.20000000000000000e+01f, 3.20000000000000000e+01f, 6.40000000000000000e+01f, 3, 64);
    pushMergedNeuronSpikeQueueUpdateGroup0ToDevice(0, d_glbSpkCntdense_2_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(0, d_glbSpkCntconv2d_1_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(1, d_glbSpkCntconv2d_2_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(2, d_glbSpkCntconv2d_3_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(3, d_glbSpkCntconv2d_4_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(4, d_glbSpkCntconv2d_5_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(5, d_glbSpkCntconv2d_6_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(6, d_glbSpkCntconv2d_7_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(7, d_glbSpkCntconv2d_8_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(8, d_glbSpkCntconv2d_9_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(9, d_glbSpkCntconv2d_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(10, d_glbSpkCntdense_1_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(11, d_glbSpkCntdense_nrn);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(12, d_glbSpkCntinput_nrn);
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
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_3_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_4_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_5_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_6_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_7_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_8_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_9_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemconv2d_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemdense_1_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemdense_2_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Fxdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Fxdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmemdense_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmemdense_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkCntinput_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkCntinput_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(glbSpkinput_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_glbSpkinput_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inputinput_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_inputinput_nrn));
    CHECK_CUDA_ERRORS(cudaFreeHost(Vmeminput_nrn));
    CHECK_CUDA_ERRORS(cudaFree(d_Vmeminput_nrn));
    
    // ------------------------------------------------------------------------
    // custom update variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // postsynaptic variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_to_conv2d_1_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_to_conv2d_1_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_1_to_conv2d_2_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_1_to_conv2d_2_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_2_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_2_to_conv2d_3_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_3_to_conv2d_4_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_3_to_conv2d_4_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_4_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_4_to_conv2d_5_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_5_to_conv2d_6_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_5_to_conv2d_6_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_6_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_6_to_conv2d_7_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_7_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_7_to_conv2d_8_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_8_to_conv2d_9_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_8_to_conv2d_9_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSyninput_to_conv2d_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSyninput_to_conv2d_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSyndense_to_dense_1_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSyndense_to_dense_1_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSyndense_1_to_dense_2_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSyndense_1_to_dense_2_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(inSynconv2d_9_to_dense_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_inSynconv2d_9_to_dense_syn));
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    CHECK_CUDA_ERRORS(cudaFreeHost(gdense_1_to_dense_2_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_gdense_1_to_dense_2_syn));
    CHECK_CUDA_ERRORS(cudaFreeHost(gdense_to_dense_1_syn));
    CHECK_CUDA_ERRORS(cudaFree(d_gdense_to_dense_1_syn));
    
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
