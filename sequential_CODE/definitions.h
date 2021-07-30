#pragma once
#define EXPORT_VAR extern
#define EXPORT_FUNC
// Standard C++ includes
#include <random>
#include <string>
#include <stdexcept>

// Standard C includes
#include <cassert>
#include <cstdint>
#define DT 1.00000000000000000e+00f
typedef float scalar;
#define SCALAR_MIN 1.175494351e-38f
#define SCALAR_MAX 3.402823466e+38f

#define TIME_MIN 1.175494351e-38f
#define TIME_MAX 3.402823466e+38f

// ------------------------------------------------------------------------
// bit tool macros
#define B(x,i) ((x) & (0x80000000 >> (i))) //!< Extract the bit at the specified position i from x
#define setB(x,i) x= ((x) | (0x80000000 >> (i))) //!< Set the bit at the specified position i in x to 1
#define delB(x,i) x= ((x) & (~(0x80000000 >> (i)))) //!< Set the bit at the specified position i in x to 0

extern "C" {
// ------------------------------------------------------------------------
// global variables
// ------------------------------------------------------------------------
EXPORT_VAR unsigned long long iT;
EXPORT_VAR float t;

// ------------------------------------------------------------------------
// timers
// ------------------------------------------------------------------------
EXPORT_VAR double initTime;
EXPORT_VAR double initSparseTime;
EXPORT_VAR double neuronUpdateTime;
EXPORT_VAR double presynapticUpdateTime;
EXPORT_VAR double postsynapticUpdateTime;
EXPORT_VAR double synapseDynamicsTime;

// ------------------------------------------------------------------------
// local neuron groups
// ------------------------------------------------------------------------
#define spikeCount_conv2d_1_nrn glbSpkCntconv2d_1_nrn[0]
#define spike_conv2d_1_nrn glbSpkconv2d_1_nrn
#define glbSpkShiftconv2d_1_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_1_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_1_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_1_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_1_nrn;
EXPORT_VAR scalar* Vmemconv2d_1_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_1_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_1_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_1_nrn;
EXPORT_VAR scalar Vthrconv2d_1_nrn;
#define spikeCount_conv2d_2_nrn glbSpkCntconv2d_2_nrn[0]
#define spike_conv2d_2_nrn glbSpkconv2d_2_nrn
#define glbSpkShiftconv2d_2_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_2_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_2_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_2_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_2_nrn;
EXPORT_VAR scalar* Vmemconv2d_2_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_2_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_2_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_2_nrn;
EXPORT_VAR scalar Vthrconv2d_2_nrn;
#define spikeCount_conv2d_3_nrn glbSpkCntconv2d_3_nrn[0]
#define spike_conv2d_3_nrn glbSpkconv2d_3_nrn
#define glbSpkShiftconv2d_3_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_3_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_3_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_3_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_3_nrn;
EXPORT_VAR scalar* Vmemconv2d_3_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_3_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_3_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_3_nrn;
EXPORT_VAR scalar Vthrconv2d_3_nrn;
#define spikeCount_conv2d_4_nrn glbSpkCntconv2d_4_nrn[0]
#define spike_conv2d_4_nrn glbSpkconv2d_4_nrn
#define glbSpkShiftconv2d_4_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_4_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_4_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_4_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_4_nrn;
EXPORT_VAR scalar* Vmemconv2d_4_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_4_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_4_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_4_nrn;
EXPORT_VAR scalar Vthrconv2d_4_nrn;
#define spikeCount_conv2d_5_nrn glbSpkCntconv2d_5_nrn[0]
#define spike_conv2d_5_nrn glbSpkconv2d_5_nrn
#define glbSpkShiftconv2d_5_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_5_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_5_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_5_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_5_nrn;
EXPORT_VAR scalar* Vmemconv2d_5_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_5_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_5_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_5_nrn;
EXPORT_VAR scalar Vthrconv2d_5_nrn;
#define spikeCount_conv2d_6_nrn glbSpkCntconv2d_6_nrn[0]
#define spike_conv2d_6_nrn glbSpkconv2d_6_nrn
#define glbSpkShiftconv2d_6_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_6_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_6_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_6_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_6_nrn;
EXPORT_VAR scalar* Vmemconv2d_6_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_6_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_6_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_6_nrn;
EXPORT_VAR scalar Vthrconv2d_6_nrn;
#define spikeCount_conv2d_7_nrn glbSpkCntconv2d_7_nrn[0]
#define spike_conv2d_7_nrn glbSpkconv2d_7_nrn
#define glbSpkShiftconv2d_7_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_7_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_7_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_7_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_7_nrn;
EXPORT_VAR scalar* Vmemconv2d_7_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_7_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_7_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_7_nrn;
EXPORT_VAR scalar Vthrconv2d_7_nrn;
#define spikeCount_conv2d_8_nrn glbSpkCntconv2d_8_nrn[0]
#define spike_conv2d_8_nrn glbSpkconv2d_8_nrn
#define glbSpkShiftconv2d_8_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_8_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_8_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_8_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_8_nrn;
EXPORT_VAR scalar* Vmemconv2d_8_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_8_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_8_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_8_nrn;
EXPORT_VAR scalar Vthrconv2d_8_nrn;
#define spikeCount_conv2d_9_nrn glbSpkCntconv2d_9_nrn[0]
#define spike_conv2d_9_nrn glbSpkconv2d_9_nrn
#define glbSpkShiftconv2d_9_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_9_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_9_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_9_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_9_nrn;
EXPORT_VAR scalar* Vmemconv2d_9_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_9_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_9_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_9_nrn;
EXPORT_VAR scalar Vthrconv2d_9_nrn;
#define spikeCount_conv2d_input_nrn glbSpkCntconv2d_input_nrn[0]
#define spike_conv2d_input_nrn glbSpkconv2d_input_nrn
#define glbSpkShiftconv2d_input_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_input_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_input_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_input_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_input_nrn;
EXPORT_VAR scalar* inputconv2d_input_nrn;
EXPORT_VAR scalar* d_inputconv2d_input_nrn;
#define spikeCount_conv2d_nrn glbSpkCntconv2d_nrn[0]
#define spike_conv2d_nrn glbSpkconv2d_nrn
#define glbSpkShiftconv2d_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_nrn;
EXPORT_VAR scalar* Vmemconv2d_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_nrn;
EXPORT_VAR scalar Vthrconv2d_nrn;
#define spikeCount_dense_1_nrn glbSpkCntdense_1_nrn[0]
#define spike_dense_1_nrn glbSpkdense_1_nrn
#define glbSpkShiftdense_1_nrn 0

EXPORT_VAR unsigned int* glbSpkCntdense_1_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntdense_1_nrn;
EXPORT_VAR unsigned int* glbSpkdense_1_nrn;
EXPORT_VAR unsigned int* d_glbSpkdense_1_nrn;
EXPORT_VAR scalar* Vmemdense_1_nrn;
EXPORT_VAR scalar* d_Vmemdense_1_nrn;
EXPORT_VAR unsigned int* nSpkdense_1_nrn;
EXPORT_VAR unsigned int* d_nSpkdense_1_nrn;
EXPORT_VAR scalar Vthrdense_1_nrn;
#define spikeCount_dense_2_nrn glbSpkCntdense_2_nrn[0]
#define spike_dense_2_nrn glbSpkdense_2_nrn
#define glbSpkShiftdense_2_nrn 0

EXPORT_VAR unsigned int* glbSpkCntdense_2_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntdense_2_nrn;
EXPORT_VAR unsigned int* glbSpkdense_2_nrn;
EXPORT_VAR unsigned int* d_glbSpkdense_2_nrn;
EXPORT_VAR scalar* Vmemdense_2_nrn;
EXPORT_VAR scalar* d_Vmemdense_2_nrn;
EXPORT_VAR unsigned int* nSpkdense_2_nrn;
EXPORT_VAR unsigned int* d_nSpkdense_2_nrn;
EXPORT_VAR scalar Vthrdense_2_nrn;
#define spikeCount_dense_nrn glbSpkCntdense_nrn[0]
#define spike_dense_nrn glbSpkdense_nrn
#define glbSpkShiftdense_nrn 0

EXPORT_VAR unsigned int* glbSpkCntdense_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntdense_nrn;
EXPORT_VAR unsigned int* glbSpkdense_nrn;
EXPORT_VAR unsigned int* d_glbSpkdense_nrn;
EXPORT_VAR scalar* Vmemdense_nrn;
EXPORT_VAR scalar* d_Vmemdense_nrn;
EXPORT_VAR unsigned int* nSpkdense_nrn;
EXPORT_VAR unsigned int* d_nSpkdense_nrn;
EXPORT_VAR scalar Vthrdense_nrn;

// ------------------------------------------------------------------------
// custom update variables
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// postsynaptic variables
// ------------------------------------------------------------------------
EXPORT_VAR float* inSynconv2d_to_conv2d_1_syn;
EXPORT_VAR float* d_inSynconv2d_to_conv2d_1_syn;
EXPORT_VAR float* inSynconv2d_1_to_conv2d_2_syn;
EXPORT_VAR float* d_inSynconv2d_1_to_conv2d_2_syn;
EXPORT_VAR float* inSynconv2d_2_to_conv2d_3_syn;
EXPORT_VAR float* d_inSynconv2d_2_to_conv2d_3_syn;
EXPORT_VAR float* inSynconv2d_3_to_conv2d_4_syn;
EXPORT_VAR float* d_inSynconv2d_3_to_conv2d_4_syn;
EXPORT_VAR float* inSynconv2d_4_to_conv2d_5_syn;
EXPORT_VAR float* d_inSynconv2d_4_to_conv2d_5_syn;
EXPORT_VAR float* inSynconv2d_5_to_conv2d_6_syn;
EXPORT_VAR float* d_inSynconv2d_5_to_conv2d_6_syn;
EXPORT_VAR float* inSynconv2d_6_to_conv2d_7_syn;
EXPORT_VAR float* d_inSynconv2d_6_to_conv2d_7_syn;
EXPORT_VAR float* inSynconv2d_7_to_conv2d_8_syn;
EXPORT_VAR float* d_inSynconv2d_7_to_conv2d_8_syn;
EXPORT_VAR float* inSynconv2d_8_to_conv2d_9_syn;
EXPORT_VAR float* d_inSynconv2d_8_to_conv2d_9_syn;
EXPORT_VAR float* inSynconv2d_input_to_conv2d_syn;
EXPORT_VAR float* d_inSynconv2d_input_to_conv2d_syn;
EXPORT_VAR float* inSyndense_to_dense_1_syn;
EXPORT_VAR float* d_inSyndense_to_dense_1_syn;
EXPORT_VAR float* inSyndense_1_to_dense_2_syn;
EXPORT_VAR float* d_inSyndense_1_to_dense_2_syn;
EXPORT_VAR float* inSynconv2d_9_to_dense_syn;
EXPORT_VAR float* d_inSynconv2d_9_to_dense_syn;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
EXPORT_VAR scalar* kernelgconv2d_1_to_conv2d_2_syn;
EXPORT_VAR scalar* d_kernelgconv2d_1_to_conv2d_2_syn;
EXPORT_VAR scalar* kernelgconv2d_2_to_conv2d_3_syn;
EXPORT_VAR scalar* d_kernelgconv2d_2_to_conv2d_3_syn;
EXPORT_VAR scalar* kernelgconv2d_3_to_conv2d_4_syn;
EXPORT_VAR scalar* d_kernelgconv2d_3_to_conv2d_4_syn;
EXPORT_VAR scalar* kernelgconv2d_4_to_conv2d_5_syn;
EXPORT_VAR scalar* d_kernelgconv2d_4_to_conv2d_5_syn;
EXPORT_VAR scalar* kernelgconv2d_5_to_conv2d_6_syn;
EXPORT_VAR scalar* d_kernelgconv2d_5_to_conv2d_6_syn;
EXPORT_VAR scalar* kernelgconv2d_6_to_conv2d_7_syn;
EXPORT_VAR scalar* d_kernelgconv2d_6_to_conv2d_7_syn;
EXPORT_VAR scalar* kernelgconv2d_7_to_conv2d_8_syn;
EXPORT_VAR scalar* d_kernelgconv2d_7_to_conv2d_8_syn;
EXPORT_VAR scalar* kernelgconv2d_8_to_conv2d_9_syn;
EXPORT_VAR scalar* d_kernelgconv2d_8_to_conv2d_9_syn;
EXPORT_VAR scalar* weightsgconv2d_9_to_dense_syn;
EXPORT_VAR scalar* d_weightsgconv2d_9_to_dense_syn;
EXPORT_VAR scalar* kernelgconv2d_input_to_conv2d_syn;
EXPORT_VAR scalar* d_kernelgconv2d_input_to_conv2d_syn;
EXPORT_VAR scalar* kernelgconv2d_to_conv2d_1_syn;
EXPORT_VAR scalar* d_kernelgconv2d_to_conv2d_1_syn;
EXPORT_VAR scalar* gdense_1_to_dense_2_syn;
EXPORT_VAR scalar* d_gdense_1_to_dense_2_syn;
EXPORT_VAR scalar* gdense_to_dense_1_syn;
EXPORT_VAR scalar* d_gdense_to_dense_1_syn;

EXPORT_FUNC void pushconv2d_1_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_1_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_1_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_1_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_1_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_1_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_1_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_1_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_1_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_1_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_1_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_1_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_1_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_2_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_2_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_2_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_2_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_2_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_2_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_2_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_2_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_2_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_2_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_2_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_2_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_2_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_2_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_3_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_3_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_3_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_3_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_3_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_3_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_3_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_3_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_3_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_3_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_3_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_3_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_3_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_3_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_3_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_3_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_3_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_3_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_4_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_4_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_4_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_4_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_4_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_4_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_4_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_4_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_4_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_4_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_4_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_4_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_4_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_4_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_4_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_4_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_4_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_4_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_5_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_5_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_5_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_5_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_5_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_5_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_5_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_5_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_5_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_5_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_5_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_5_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_5_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_5_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_5_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_5_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_5_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_5_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_6_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_6_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_6_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_6_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_6_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_6_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_6_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_6_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_6_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_6_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_6_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_6_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_6_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_6_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_6_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_7_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_7_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_7_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_7_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_7_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_7_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_7_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_7_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_7_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_7_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_7_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_7_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_7_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_7_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_7_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_7_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_7_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_7_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_8_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_8_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_8_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_8_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_8_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_8_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_8_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_8_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_8_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_8_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_8_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_8_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_8_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_8_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_8_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_8_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_8_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_8_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_9_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_9_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_9_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_9_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_9_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_9_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_9_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_9_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_9_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_9_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_9_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_9_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_9_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_9_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_9_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_9_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_9_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_9_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_input_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_input_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_input_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_input_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_input_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_input_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushinputconv2d_input_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinputconv2d_input_nrnFromDevice();
EXPORT_FUNC void pushCurrentinputconv2d_input_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentinputconv2d_input_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentinputconv2d_input_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_input_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_input_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_nrnStateFromDevice();
EXPORT_FUNC void pushdense_1_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_1_nrnSpikesFromDevice();
EXPORT_FUNC void pushdense_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_1_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getdense_1_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getdense_1_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemdense_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemdense_1_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemdense_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemdense_1_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemdense_1_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkdense_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkdense_1_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkdense_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkdense_1_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkdense_1_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushdense_1_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_1_nrnStateFromDevice();
EXPORT_FUNC void pushdense_2_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_2_nrnSpikesFromDevice();
EXPORT_FUNC void pushdense_2_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_2_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getdense_2_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getdense_2_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemdense_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemdense_2_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemdense_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemdense_2_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemdense_2_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkdense_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkdense_2_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkdense_2_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkdense_2_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkdense_2_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushdense_2_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_2_nrnStateFromDevice();
EXPORT_FUNC void pushdense_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_nrnSpikesFromDevice();
EXPORT_FUNC void pushdense_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getdense_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getdense_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemdense_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemdense_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemdense_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemdense_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemdense_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkdense_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkdense_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkdense_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkdense_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkdense_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushdense_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_nrnStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_1_to_conv2d_2_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_1_to_conv2d_2_syn();
EXPORT_FUNC void pushkernelgconv2d_1_to_conv2d_2_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_1_to_conv2d_2_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_1_to_conv2d_2_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_1_to_conv2d_2_synFromDevice();
EXPORT_FUNC void pushconv2d_1_to_conv2d_2_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_1_to_conv2d_2_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_2_to_conv2d_3_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_2_to_conv2d_3_syn();
EXPORT_FUNC void pushkernelgconv2d_2_to_conv2d_3_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_2_to_conv2d_3_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_2_to_conv2d_3_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_2_to_conv2d_3_synFromDevice();
EXPORT_FUNC void pushconv2d_2_to_conv2d_3_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_2_to_conv2d_3_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_3_to_conv2d_4_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_3_to_conv2d_4_syn();
EXPORT_FUNC void pushkernelgconv2d_3_to_conv2d_4_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_3_to_conv2d_4_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_3_to_conv2d_4_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_3_to_conv2d_4_synFromDevice();
EXPORT_FUNC void pushconv2d_3_to_conv2d_4_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_3_to_conv2d_4_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_4_to_conv2d_5_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_4_to_conv2d_5_syn();
EXPORT_FUNC void pushkernelgconv2d_4_to_conv2d_5_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_4_to_conv2d_5_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_4_to_conv2d_5_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_4_to_conv2d_5_synFromDevice();
EXPORT_FUNC void pushconv2d_4_to_conv2d_5_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_4_to_conv2d_5_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_5_to_conv2d_6_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_5_to_conv2d_6_syn();
EXPORT_FUNC void pushkernelgconv2d_5_to_conv2d_6_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_5_to_conv2d_6_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_5_to_conv2d_6_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_5_to_conv2d_6_synFromDevice();
EXPORT_FUNC void pushconv2d_5_to_conv2d_6_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_5_to_conv2d_6_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_6_to_conv2d_7_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_6_to_conv2d_7_syn();
EXPORT_FUNC void pushkernelgconv2d_6_to_conv2d_7_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_6_to_conv2d_7_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_6_to_conv2d_7_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_6_to_conv2d_7_synFromDevice();
EXPORT_FUNC void pushconv2d_6_to_conv2d_7_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_to_conv2d_7_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_7_to_conv2d_8_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_7_to_conv2d_8_syn();
EXPORT_FUNC void pushkernelgconv2d_7_to_conv2d_8_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_7_to_conv2d_8_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_7_to_conv2d_8_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_7_to_conv2d_8_synFromDevice();
EXPORT_FUNC void pushconv2d_7_to_conv2d_8_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_7_to_conv2d_8_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_8_to_conv2d_9_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_8_to_conv2d_9_syn();
EXPORT_FUNC void pushkernelgconv2d_8_to_conv2d_9_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_8_to_conv2d_9_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_8_to_conv2d_9_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_8_to_conv2d_9_synFromDevice();
EXPORT_FUNC void pushconv2d_8_to_conv2d_9_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_8_to_conv2d_9_synStateFromDevice();
EXPORT_FUNC void allocateweightsgconv2d_9_to_dense_syn(unsigned int count);
EXPORT_FUNC void freeweightsgconv2d_9_to_dense_syn();
EXPORT_FUNC void pushweightsgconv2d_9_to_dense_synToDevice(unsigned int count);
EXPORT_FUNC void pullweightsgconv2d_9_to_dense_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_9_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_9_to_dense_synFromDevice();
EXPORT_FUNC void pushconv2d_9_to_dense_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_9_to_dense_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_input_to_conv2d_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_input_to_conv2d_syn();
EXPORT_FUNC void pushkernelgconv2d_input_to_conv2d_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_input_to_conv2d_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_input_to_conv2d_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_input_to_conv2d_synFromDevice();
EXPORT_FUNC void pushconv2d_input_to_conv2d_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_input_to_conv2d_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_to_conv2d_1_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_to_conv2d_1_syn();
EXPORT_FUNC void pushkernelgconv2d_to_conv2d_1_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_to_conv2d_1_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_to_conv2d_1_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_to_conv2d_1_synFromDevice();
EXPORT_FUNC void pushconv2d_to_conv2d_1_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_to_conv2d_1_synStateFromDevice();
EXPORT_FUNC void pushgdense_1_to_dense_2_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgdense_1_to_dense_2_synFromDevice();
EXPORT_FUNC void pushinSyndense_1_to_dense_2_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSyndense_1_to_dense_2_synFromDevice();
EXPORT_FUNC void pushdense_1_to_dense_2_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_1_to_dense_2_synStateFromDevice();
EXPORT_FUNC void pushgdense_to_dense_1_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgdense_to_dense_1_synFromDevice();
EXPORT_FUNC void pushinSyndense_to_dense_1_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSyndense_to_dense_1_synFromDevice();
EXPORT_FUNC void pushdense_to_dense_1_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldense_to_dense_1_synStateFromDevice();
// Runner functions
EXPORT_FUNC void copyStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void copyConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void copyStateFromDevice();
EXPORT_FUNC void copyCurrentSpikesFromDevice();
EXPORT_FUNC void copyCurrentSpikeEventsFromDevice();
EXPORT_FUNC void allocateMem();
EXPORT_FUNC void freeMem();
EXPORT_FUNC size_t getFreeDeviceMemBytes();
EXPORT_FUNC void stepTime();

// Functions generated by backend
EXPORT_FUNC void updateNeurons(float t); 
EXPORT_FUNC void updateSynapses(float t);
EXPORT_FUNC void initialize();
EXPORT_FUNC void initializeSparse();
}  // extern "C"
