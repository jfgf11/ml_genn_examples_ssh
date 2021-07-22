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
#define spikeCount_conv2d_10_nrn glbSpkCntconv2d_10_nrn[0]
#define spike_conv2d_10_nrn glbSpkconv2d_10_nrn
#define glbSpkShiftconv2d_10_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_10_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_10_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_10_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_10_nrn;
EXPORT_VAR scalar* Vmemconv2d_10_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_10_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_10_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_10_nrn;
EXPORT_VAR scalar Vthrconv2d_10_nrn;
#define spikeCount_conv2d_11_nrn glbSpkCntconv2d_11_nrn[0]
#define spike_conv2d_11_nrn glbSpkconv2d_11_nrn
#define glbSpkShiftconv2d_11_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_11_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_11_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_11_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_11_nrn;
EXPORT_VAR scalar* Vmemconv2d_11_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_11_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_11_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_11_nrn;
EXPORT_VAR scalar Vthrconv2d_11_nrn;
#define spikeCount_conv2d_12_nrn glbSpkCntconv2d_12_nrn[0]
#define spike_conv2d_12_nrn glbSpkconv2d_12_nrn
#define glbSpkShiftconv2d_12_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_12_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_12_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_12_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_12_nrn;
EXPORT_VAR scalar* Vmemconv2d_12_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_12_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_12_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_12_nrn;
EXPORT_VAR scalar Vthrconv2d_12_nrn;
#define spikeCount_conv2d_13_nrn glbSpkCntconv2d_13_nrn[0]
#define spike_conv2d_13_nrn glbSpkconv2d_13_nrn
#define glbSpkShiftconv2d_13_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_13_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_13_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_13_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_13_nrn;
EXPORT_VAR scalar* Vmemconv2d_13_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_13_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_13_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_13_nrn;
EXPORT_VAR scalar Vthrconv2d_13_nrn;
#define spikeCount_conv2d_14_nrn glbSpkCntconv2d_14_nrn[0]
#define spike_conv2d_14_nrn glbSpkconv2d_14_nrn
#define glbSpkShiftconv2d_14_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_14_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_14_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_14_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_14_nrn;
EXPORT_VAR scalar* Vmemconv2d_14_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_14_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_14_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_14_nrn;
EXPORT_VAR scalar Vthrconv2d_14_nrn;
#define spikeCount_conv2d_15_nrn glbSpkCntconv2d_15_nrn[0]
#define spike_conv2d_15_nrn glbSpkconv2d_15_nrn
#define glbSpkShiftconv2d_15_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_15_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_15_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_15_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_15_nrn;
EXPORT_VAR scalar* Vmemconv2d_15_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_15_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_15_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_15_nrn;
EXPORT_VAR scalar Vthrconv2d_15_nrn;
#define spikeCount_conv2d_16_nrn glbSpkCntconv2d_16_nrn[0]
#define spike_conv2d_16_nrn glbSpkconv2d_16_nrn
#define glbSpkShiftconv2d_16_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_16_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_16_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_16_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_16_nrn;
EXPORT_VAR scalar* Vmemconv2d_16_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_16_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_16_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_16_nrn;
EXPORT_VAR scalar Vthrconv2d_16_nrn;
#define spikeCount_conv2d_17_nrn glbSpkCntconv2d_17_nrn[0]
#define spike_conv2d_17_nrn glbSpkconv2d_17_nrn
#define glbSpkShiftconv2d_17_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_17_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_17_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_17_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_17_nrn;
EXPORT_VAR scalar* Vmemconv2d_17_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_17_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_17_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_17_nrn;
EXPORT_VAR scalar Vthrconv2d_17_nrn;
#define spikeCount_conv2d_18_nrn glbSpkCntconv2d_18_nrn[0]
#define spike_conv2d_18_nrn glbSpkconv2d_18_nrn
#define glbSpkShiftconv2d_18_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_18_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_18_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_18_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_18_nrn;
EXPORT_VAR scalar* Vmemconv2d_18_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_18_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_18_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_18_nrn;
EXPORT_VAR scalar Vthrconv2d_18_nrn;
#define spikeCount_conv2d_19_nrn glbSpkCntconv2d_19_nrn[0]
#define spike_conv2d_19_nrn glbSpkconv2d_19_nrn
#define glbSpkShiftconv2d_19_nrn 0

EXPORT_VAR unsigned int* glbSpkCntconv2d_19_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntconv2d_19_nrn;
EXPORT_VAR unsigned int* glbSpkconv2d_19_nrn;
EXPORT_VAR unsigned int* d_glbSpkconv2d_19_nrn;
EXPORT_VAR scalar* Vmemconv2d_19_nrn;
EXPORT_VAR scalar* d_Vmemconv2d_19_nrn;
EXPORT_VAR unsigned int* nSpkconv2d_19_nrn;
EXPORT_VAR unsigned int* d_nSpkconv2d_19_nrn;
EXPORT_VAR scalar Vthrconv2d_19_nrn;
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
#define spikeCount_input_1_nrn glbSpkCntinput_1_nrn[0]
#define spike_input_1_nrn glbSpkinput_1_nrn
#define glbSpkShiftinput_1_nrn 0

EXPORT_VAR unsigned int* glbSpkCntinput_1_nrn;
EXPORT_VAR unsigned int* d_glbSpkCntinput_1_nrn;
EXPORT_VAR unsigned int* glbSpkinput_1_nrn;
EXPORT_VAR unsigned int* d_glbSpkinput_1_nrn;
EXPORT_VAR scalar* inputinput_1_nrn;
EXPORT_VAR scalar* d_inputinput_1_nrn;

// ------------------------------------------------------------------------
// custom update variables
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// postsynaptic variables
// ------------------------------------------------------------------------
EXPORT_VAR float* inSynconv2d_7_to_conv2d_10_syn;
EXPORT_VAR float* d_inSynconv2d_7_to_conv2d_10_syn;
EXPORT_VAR float* inSynconv2d_6_to_conv2d_10_syn;
EXPORT_VAR float* d_inSynconv2d_6_to_conv2d_10_syn;
EXPORT_VAR float* inSynconv2d_9_to_conv2d_10_syn;
EXPORT_VAR float* d_inSynconv2d_9_to_conv2d_10_syn;
EXPORT_VAR float* inSynconv2d_10_to_conv2d_11_syn;
EXPORT_VAR float* d_inSynconv2d_10_to_conv2d_11_syn;
EXPORT_VAR float* inSynconv2d_7_to_conv2d_12_syn;
EXPORT_VAR float* d_inSynconv2d_7_to_conv2d_12_syn;
EXPORT_VAR float* inSynconv2d_6_to_conv2d_12_syn;
EXPORT_VAR float* d_inSynconv2d_6_to_conv2d_12_syn;
EXPORT_VAR float* inSynconv2d_9_to_conv2d_12_syn;
EXPORT_VAR float* d_inSynconv2d_9_to_conv2d_12_syn;
EXPORT_VAR float* inSynconv2d_11_to_conv2d_13_syn;
EXPORT_VAR float* d_inSynconv2d_11_to_conv2d_13_syn;
EXPORT_VAR float* inSynconv2d_12_to_conv2d_13_syn;
EXPORT_VAR float* d_inSynconv2d_12_to_conv2d_13_syn;
EXPORT_VAR float* inSynconv2d_13_to_conv2d_14_syn;
EXPORT_VAR float* d_inSynconv2d_13_to_conv2d_14_syn;
EXPORT_VAR float* inSynconv2d_11_to_conv2d_15_syn;
EXPORT_VAR float* d_inSynconv2d_11_to_conv2d_15_syn;
EXPORT_VAR float* inSynconv2d_12_to_conv2d_15_syn;
EXPORT_VAR float* d_inSynconv2d_12_to_conv2d_15_syn;
EXPORT_VAR float* inSynconv2d_14_to_conv2d_15_syn;
EXPORT_VAR float* d_inSynconv2d_14_to_conv2d_15_syn;
EXPORT_VAR float* inSynconv2d_15_to_conv2d_16_syn;
EXPORT_VAR float* d_inSynconv2d_15_to_conv2d_16_syn;
EXPORT_VAR float* inSynconv2d_11_to_conv2d_17_syn;
EXPORT_VAR float* d_inSynconv2d_11_to_conv2d_17_syn;
EXPORT_VAR float* inSynconv2d_12_to_conv2d_17_syn;
EXPORT_VAR float* d_inSynconv2d_12_to_conv2d_17_syn;
EXPORT_VAR float* inSynconv2d_14_to_conv2d_17_syn;
EXPORT_VAR float* d_inSynconv2d_14_to_conv2d_17_syn;
EXPORT_VAR float* inSynconv2d_16_to_conv2d_18_syn;
EXPORT_VAR float* d_inSynconv2d_16_to_conv2d_18_syn;
EXPORT_VAR float* inSynconv2d_17_to_conv2d_18_syn;
EXPORT_VAR float* d_inSynconv2d_17_to_conv2d_18_syn;
EXPORT_VAR float* inSynconv2d_18_to_conv2d_19_syn;
EXPORT_VAR float* d_inSynconv2d_18_to_conv2d_19_syn;
EXPORT_VAR float* inSynconv2d_to_conv2d_1_syn;
EXPORT_VAR float* d_inSynconv2d_to_conv2d_1_syn;
EXPORT_VAR float* inSynconv2d_1_to_conv2d_2_syn;
EXPORT_VAR float* d_inSynconv2d_1_to_conv2d_2_syn;
EXPORT_VAR float* inSynconv2d_to_conv2d_3_syn;
EXPORT_VAR float* d_inSynconv2d_to_conv2d_3_syn;
EXPORT_VAR float* inSynconv2d_2_to_conv2d_3_syn;
EXPORT_VAR float* d_inSynconv2d_2_to_conv2d_3_syn;
EXPORT_VAR float* inSynconv2d_3_to_conv2d_4_syn;
EXPORT_VAR float* d_inSynconv2d_3_to_conv2d_4_syn;
EXPORT_VAR float* inSynconv2d_to_conv2d_5_syn;
EXPORT_VAR float* d_inSynconv2d_to_conv2d_5_syn;
EXPORT_VAR float* inSynconv2d_4_to_conv2d_5_syn;
EXPORT_VAR float* d_inSynconv2d_4_to_conv2d_5_syn;
EXPORT_VAR float* inSynconv2d_2_to_conv2d_5_syn;
EXPORT_VAR float* d_inSynconv2d_2_to_conv2d_5_syn;
EXPORT_VAR float* inSynconv2d_5_to_conv2d_6_syn;
EXPORT_VAR float* d_inSynconv2d_5_to_conv2d_6_syn;
EXPORT_VAR float* inSynconv2d_to_conv2d_7_syn;
EXPORT_VAR float* d_inSynconv2d_to_conv2d_7_syn;
EXPORT_VAR float* inSynconv2d_4_to_conv2d_7_syn;
EXPORT_VAR float* d_inSynconv2d_4_to_conv2d_7_syn;
EXPORT_VAR float* inSynconv2d_2_to_conv2d_7_syn;
EXPORT_VAR float* d_inSynconv2d_2_to_conv2d_7_syn;
EXPORT_VAR float* inSynconv2d_7_to_conv2d_8_syn;
EXPORT_VAR float* d_inSynconv2d_7_to_conv2d_8_syn;
EXPORT_VAR float* inSynconv2d_6_to_conv2d_8_syn;
EXPORT_VAR float* d_inSynconv2d_6_to_conv2d_8_syn;
EXPORT_VAR float* inSynconv2d_8_to_conv2d_9_syn;
EXPORT_VAR float* d_inSynconv2d_8_to_conv2d_9_syn;
EXPORT_VAR float* inSyninput_1_to_conv2d_syn;
EXPORT_VAR float* d_inSyninput_1_to_conv2d_syn;
EXPORT_VAR float* inSynconv2d_16_to_dense_syn;
EXPORT_VAR float* d_inSynconv2d_16_to_dense_syn;
EXPORT_VAR float* inSynconv2d_19_to_dense_syn;
EXPORT_VAR float* d_inSynconv2d_19_to_dense_syn;
EXPORT_VAR float* inSynconv2d_17_to_dense_syn;
EXPORT_VAR float* d_inSynconv2d_17_to_dense_syn;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
EXPORT_VAR scalar* kernelgconv2d_10_to_conv2d_11_syn;
EXPORT_VAR scalar* d_kernelgconv2d_10_to_conv2d_11_syn;
EXPORT_VAR scalar* kernelgconv2d_11_to_conv2d_13_syn;
EXPORT_VAR scalar* d_kernelgconv2d_11_to_conv2d_13_syn;
EXPORT_VAR scalar* kernelgconv2d_11_to_conv2d_15_syn;
EXPORT_VAR scalar* d_kernelgconv2d_11_to_conv2d_15_syn;
EXPORT_VAR scalar* kernelgconv2d_11_to_conv2d_17_syn;
EXPORT_VAR scalar* d_kernelgconv2d_11_to_conv2d_17_syn;
EXPORT_VAR scalar* kernelgconv2d_12_to_conv2d_13_syn;
EXPORT_VAR scalar* d_kernelgconv2d_12_to_conv2d_13_syn;
EXPORT_VAR scalar* kernelgconv2d_12_to_conv2d_15_syn;
EXPORT_VAR scalar* d_kernelgconv2d_12_to_conv2d_15_syn;
EXPORT_VAR scalar* kernelgconv2d_12_to_conv2d_17_syn;
EXPORT_VAR scalar* d_kernelgconv2d_12_to_conv2d_17_syn;
EXPORT_VAR scalar* kernelgconv2d_13_to_conv2d_14_syn;
EXPORT_VAR scalar* d_kernelgconv2d_13_to_conv2d_14_syn;
EXPORT_VAR scalar* kernelgconv2d_14_to_conv2d_15_syn;
EXPORT_VAR scalar* d_kernelgconv2d_14_to_conv2d_15_syn;
EXPORT_VAR scalar* kernelgconv2d_14_to_conv2d_17_syn;
EXPORT_VAR scalar* d_kernelgconv2d_14_to_conv2d_17_syn;
EXPORT_VAR scalar* kernelgconv2d_15_to_conv2d_16_syn;
EXPORT_VAR scalar* d_kernelgconv2d_15_to_conv2d_16_syn;
EXPORT_VAR scalar* kernelgconv2d_16_to_conv2d_18_syn;
EXPORT_VAR scalar* d_kernelgconv2d_16_to_conv2d_18_syn;
EXPORT_VAR scalar* gconv2d_16_to_dense_syn;
EXPORT_VAR scalar* d_gconv2d_16_to_dense_syn;
EXPORT_VAR scalar* kernelgconv2d_17_to_conv2d_18_syn;
EXPORT_VAR scalar* d_kernelgconv2d_17_to_conv2d_18_syn;
EXPORT_VAR scalar* gconv2d_17_to_dense_syn;
EXPORT_VAR scalar* d_gconv2d_17_to_dense_syn;
EXPORT_VAR scalar* kernelgconv2d_18_to_conv2d_19_syn;
EXPORT_VAR scalar* d_kernelgconv2d_18_to_conv2d_19_syn;
EXPORT_VAR scalar* gconv2d_19_to_dense_syn;
EXPORT_VAR scalar* d_gconv2d_19_to_dense_syn;
EXPORT_VAR scalar* kernelgconv2d_1_to_conv2d_2_syn;
EXPORT_VAR scalar* d_kernelgconv2d_1_to_conv2d_2_syn;
EXPORT_VAR scalar* kernelgconv2d_2_to_conv2d_3_syn;
EXPORT_VAR scalar* d_kernelgconv2d_2_to_conv2d_3_syn;
EXPORT_VAR scalar* kernelgconv2d_2_to_conv2d_5_syn;
EXPORT_VAR scalar* d_kernelgconv2d_2_to_conv2d_5_syn;
EXPORT_VAR scalar* kernelgconv2d_2_to_conv2d_7_syn;
EXPORT_VAR scalar* d_kernelgconv2d_2_to_conv2d_7_syn;
EXPORT_VAR scalar* kernelgconv2d_3_to_conv2d_4_syn;
EXPORT_VAR scalar* d_kernelgconv2d_3_to_conv2d_4_syn;
EXPORT_VAR scalar* kernelgconv2d_4_to_conv2d_5_syn;
EXPORT_VAR scalar* d_kernelgconv2d_4_to_conv2d_5_syn;
EXPORT_VAR scalar* kernelgconv2d_4_to_conv2d_7_syn;
EXPORT_VAR scalar* d_kernelgconv2d_4_to_conv2d_7_syn;
EXPORT_VAR scalar* kernelgconv2d_5_to_conv2d_6_syn;
EXPORT_VAR scalar* d_kernelgconv2d_5_to_conv2d_6_syn;
EXPORT_VAR scalar* kernelgconv2d_6_to_conv2d_10_syn;
EXPORT_VAR scalar* d_kernelgconv2d_6_to_conv2d_10_syn;
EXPORT_VAR scalar* kernelgconv2d_6_to_conv2d_12_syn;
EXPORT_VAR scalar* d_kernelgconv2d_6_to_conv2d_12_syn;
EXPORT_VAR scalar* kernelgconv2d_6_to_conv2d_8_syn;
EXPORT_VAR scalar* d_kernelgconv2d_6_to_conv2d_8_syn;
EXPORT_VAR scalar* kernelgconv2d_7_to_conv2d_10_syn;
EXPORT_VAR scalar* d_kernelgconv2d_7_to_conv2d_10_syn;
EXPORT_VAR scalar* kernelgconv2d_7_to_conv2d_12_syn;
EXPORT_VAR scalar* d_kernelgconv2d_7_to_conv2d_12_syn;
EXPORT_VAR scalar* kernelgconv2d_7_to_conv2d_8_syn;
EXPORT_VAR scalar* d_kernelgconv2d_7_to_conv2d_8_syn;
EXPORT_VAR scalar* kernelgconv2d_8_to_conv2d_9_syn;
EXPORT_VAR scalar* d_kernelgconv2d_8_to_conv2d_9_syn;
EXPORT_VAR scalar* kernelgconv2d_9_to_conv2d_10_syn;
EXPORT_VAR scalar* d_kernelgconv2d_9_to_conv2d_10_syn;
EXPORT_VAR scalar* kernelgconv2d_9_to_conv2d_12_syn;
EXPORT_VAR scalar* d_kernelgconv2d_9_to_conv2d_12_syn;
EXPORT_VAR scalar* kernelgconv2d_to_conv2d_1_syn;
EXPORT_VAR scalar* d_kernelgconv2d_to_conv2d_1_syn;
EXPORT_VAR scalar* kernelgconv2d_to_conv2d_3_syn;
EXPORT_VAR scalar* d_kernelgconv2d_to_conv2d_3_syn;
EXPORT_VAR scalar* kernelgconv2d_to_conv2d_5_syn;
EXPORT_VAR scalar* d_kernelgconv2d_to_conv2d_5_syn;
EXPORT_VAR scalar* kernelgconv2d_to_conv2d_7_syn;
EXPORT_VAR scalar* d_kernelgconv2d_to_conv2d_7_syn;
EXPORT_VAR scalar* kernelginput_1_to_conv2d_syn;
EXPORT_VAR scalar* d_kernelginput_1_to_conv2d_syn;

EXPORT_FUNC void pushconv2d_10_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_10_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_10_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_10_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_10_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_10_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_10_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_10_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_10_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_10_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_10_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_10_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_10_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_10_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_10_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_10_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_10_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_10_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_11_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_11_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_11_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_11_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_11_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_11_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_11_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_11_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_11_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_11_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_11_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_11_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_11_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_11_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_11_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_11_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_11_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_11_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_12_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_12_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_12_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_12_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_12_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_12_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_12_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_12_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_12_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_12_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_12_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_12_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_12_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_12_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_12_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_12_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_12_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_12_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_13_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_13_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_13_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_13_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_13_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_13_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_13_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_13_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_13_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_13_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_13_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_13_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_13_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_13_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_13_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_13_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_13_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_13_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_14_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_14_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_14_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_14_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_14_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_14_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_14_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_14_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_14_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_14_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_14_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_14_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_14_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_14_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_14_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_14_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_14_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_14_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_15_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_15_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_15_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_15_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_15_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_15_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_15_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_15_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_15_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_15_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_15_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_15_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_15_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_15_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_15_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_15_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_15_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_15_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_16_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_16_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_16_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_16_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_16_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_16_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_16_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_16_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_16_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_16_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_16_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_16_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_16_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_16_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_16_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_16_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_16_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_16_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_17_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_17_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_17_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_17_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_17_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_17_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_17_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_17_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_17_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_17_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_17_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_17_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_17_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_17_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_17_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_17_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_17_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_17_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_18_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_18_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_18_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_18_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_18_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_18_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_18_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_18_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_18_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_18_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_18_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_18_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_18_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_18_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_18_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_18_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_18_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_18_nrnStateFromDevice();
EXPORT_FUNC void pushconv2d_19_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_19_nrnSpikesFromDevice();
EXPORT_FUNC void pushconv2d_19_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_19_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getconv2d_19_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getconv2d_19_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVmemconv2d_19_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVmemconv2d_19_nrnFromDevice();
EXPORT_FUNC void pushCurrentVmemconv2d_19_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVmemconv2d_19_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentVmemconv2d_19_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushnSpkconv2d_19_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullnSpkconv2d_19_nrnFromDevice();
EXPORT_FUNC void pushCurrentnSpkconv2d_19_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentnSpkconv2d_19_nrnFromDevice();
EXPORT_FUNC unsigned int* getCurrentnSpkconv2d_19_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushconv2d_19_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_19_nrnStateFromDevice();
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
EXPORT_FUNC void pushinput_1_nrnSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinput_1_nrnSpikesFromDevice();
EXPORT_FUNC void pushinput_1_nrnCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinput_1_nrnCurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getinput_1_nrnCurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getinput_1_nrnCurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushinputinput_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinputinput_1_nrnFromDevice();
EXPORT_FUNC void pushCurrentinputinput_1_nrnToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentinputinput_1_nrnFromDevice();
EXPORT_FUNC scalar* getCurrentinputinput_1_nrn(unsigned int batch = 0); 
EXPORT_FUNC void pushinput_1_nrnStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinput_1_nrnStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_10_to_conv2d_11_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_10_to_conv2d_11_syn();
EXPORT_FUNC void pushkernelgconv2d_10_to_conv2d_11_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_10_to_conv2d_11_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_10_to_conv2d_11_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_10_to_conv2d_11_synFromDevice();
EXPORT_FUNC void pushconv2d_10_to_conv2d_11_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_10_to_conv2d_11_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_11_to_conv2d_13_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_11_to_conv2d_13_syn();
EXPORT_FUNC void pushkernelgconv2d_11_to_conv2d_13_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_11_to_conv2d_13_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_11_to_conv2d_13_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_11_to_conv2d_13_synFromDevice();
EXPORT_FUNC void pushconv2d_11_to_conv2d_13_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_11_to_conv2d_13_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_11_to_conv2d_15_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_11_to_conv2d_15_syn();
EXPORT_FUNC void pushkernelgconv2d_11_to_conv2d_15_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_11_to_conv2d_15_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_11_to_conv2d_15_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_11_to_conv2d_15_synFromDevice();
EXPORT_FUNC void pushconv2d_11_to_conv2d_15_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_11_to_conv2d_15_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_11_to_conv2d_17_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_11_to_conv2d_17_syn();
EXPORT_FUNC void pushkernelgconv2d_11_to_conv2d_17_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_11_to_conv2d_17_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_11_to_conv2d_17_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_11_to_conv2d_17_synFromDevice();
EXPORT_FUNC void pushconv2d_11_to_conv2d_17_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_11_to_conv2d_17_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_12_to_conv2d_13_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_12_to_conv2d_13_syn();
EXPORT_FUNC void pushkernelgconv2d_12_to_conv2d_13_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_12_to_conv2d_13_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_12_to_conv2d_13_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_12_to_conv2d_13_synFromDevice();
EXPORT_FUNC void pushconv2d_12_to_conv2d_13_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_12_to_conv2d_13_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_12_to_conv2d_15_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_12_to_conv2d_15_syn();
EXPORT_FUNC void pushkernelgconv2d_12_to_conv2d_15_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_12_to_conv2d_15_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_12_to_conv2d_15_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_12_to_conv2d_15_synFromDevice();
EXPORT_FUNC void pushconv2d_12_to_conv2d_15_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_12_to_conv2d_15_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_12_to_conv2d_17_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_12_to_conv2d_17_syn();
EXPORT_FUNC void pushkernelgconv2d_12_to_conv2d_17_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_12_to_conv2d_17_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_12_to_conv2d_17_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_12_to_conv2d_17_synFromDevice();
EXPORT_FUNC void pushconv2d_12_to_conv2d_17_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_12_to_conv2d_17_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_13_to_conv2d_14_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_13_to_conv2d_14_syn();
EXPORT_FUNC void pushkernelgconv2d_13_to_conv2d_14_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_13_to_conv2d_14_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_13_to_conv2d_14_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_13_to_conv2d_14_synFromDevice();
EXPORT_FUNC void pushconv2d_13_to_conv2d_14_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_13_to_conv2d_14_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_14_to_conv2d_15_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_14_to_conv2d_15_syn();
EXPORT_FUNC void pushkernelgconv2d_14_to_conv2d_15_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_14_to_conv2d_15_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_14_to_conv2d_15_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_14_to_conv2d_15_synFromDevice();
EXPORT_FUNC void pushconv2d_14_to_conv2d_15_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_14_to_conv2d_15_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_14_to_conv2d_17_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_14_to_conv2d_17_syn();
EXPORT_FUNC void pushkernelgconv2d_14_to_conv2d_17_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_14_to_conv2d_17_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_14_to_conv2d_17_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_14_to_conv2d_17_synFromDevice();
EXPORT_FUNC void pushconv2d_14_to_conv2d_17_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_14_to_conv2d_17_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_15_to_conv2d_16_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_15_to_conv2d_16_syn();
EXPORT_FUNC void pushkernelgconv2d_15_to_conv2d_16_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_15_to_conv2d_16_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_15_to_conv2d_16_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_15_to_conv2d_16_synFromDevice();
EXPORT_FUNC void pushconv2d_15_to_conv2d_16_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_15_to_conv2d_16_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_16_to_conv2d_18_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_16_to_conv2d_18_syn();
EXPORT_FUNC void pushkernelgconv2d_16_to_conv2d_18_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_16_to_conv2d_18_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_16_to_conv2d_18_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_16_to_conv2d_18_synFromDevice();
EXPORT_FUNC void pushconv2d_16_to_conv2d_18_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_16_to_conv2d_18_synStateFromDevice();
EXPORT_FUNC void pushgconv2d_16_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgconv2d_16_to_dense_synFromDevice();
EXPORT_FUNC void pushinSynconv2d_16_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_16_to_dense_synFromDevice();
EXPORT_FUNC void pushconv2d_16_to_dense_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_16_to_dense_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_17_to_conv2d_18_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_17_to_conv2d_18_syn();
EXPORT_FUNC void pushkernelgconv2d_17_to_conv2d_18_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_17_to_conv2d_18_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_17_to_conv2d_18_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_17_to_conv2d_18_synFromDevice();
EXPORT_FUNC void pushconv2d_17_to_conv2d_18_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_17_to_conv2d_18_synStateFromDevice();
EXPORT_FUNC void pushgconv2d_17_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgconv2d_17_to_dense_synFromDevice();
EXPORT_FUNC void pushinSynconv2d_17_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_17_to_dense_synFromDevice();
EXPORT_FUNC void pushconv2d_17_to_dense_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_17_to_dense_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_18_to_conv2d_19_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_18_to_conv2d_19_syn();
EXPORT_FUNC void pushkernelgconv2d_18_to_conv2d_19_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_18_to_conv2d_19_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_18_to_conv2d_19_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_18_to_conv2d_19_synFromDevice();
EXPORT_FUNC void pushconv2d_18_to_conv2d_19_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_18_to_conv2d_19_synStateFromDevice();
EXPORT_FUNC void pushgconv2d_19_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgconv2d_19_to_dense_synFromDevice();
EXPORT_FUNC void pushinSynconv2d_19_to_dense_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_19_to_dense_synFromDevice();
EXPORT_FUNC void pushconv2d_19_to_dense_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_19_to_dense_synStateFromDevice();
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
EXPORT_FUNC void allocatekernelgconv2d_2_to_conv2d_5_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_2_to_conv2d_5_syn();
EXPORT_FUNC void pushkernelgconv2d_2_to_conv2d_5_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_2_to_conv2d_5_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_2_to_conv2d_5_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_2_to_conv2d_5_synFromDevice();
EXPORT_FUNC void pushconv2d_2_to_conv2d_5_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_2_to_conv2d_5_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_2_to_conv2d_7_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_2_to_conv2d_7_syn();
EXPORT_FUNC void pushkernelgconv2d_2_to_conv2d_7_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_2_to_conv2d_7_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_2_to_conv2d_7_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_2_to_conv2d_7_synFromDevice();
EXPORT_FUNC void pushconv2d_2_to_conv2d_7_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_2_to_conv2d_7_synStateFromDevice();
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
EXPORT_FUNC void allocatekernelgconv2d_4_to_conv2d_7_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_4_to_conv2d_7_syn();
EXPORT_FUNC void pushkernelgconv2d_4_to_conv2d_7_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_4_to_conv2d_7_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_4_to_conv2d_7_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_4_to_conv2d_7_synFromDevice();
EXPORT_FUNC void pushconv2d_4_to_conv2d_7_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_4_to_conv2d_7_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_5_to_conv2d_6_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_5_to_conv2d_6_syn();
EXPORT_FUNC void pushkernelgconv2d_5_to_conv2d_6_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_5_to_conv2d_6_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_5_to_conv2d_6_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_5_to_conv2d_6_synFromDevice();
EXPORT_FUNC void pushconv2d_5_to_conv2d_6_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_5_to_conv2d_6_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_6_to_conv2d_10_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_6_to_conv2d_10_syn();
EXPORT_FUNC void pushkernelgconv2d_6_to_conv2d_10_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_6_to_conv2d_10_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_6_to_conv2d_10_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_6_to_conv2d_10_synFromDevice();
EXPORT_FUNC void pushconv2d_6_to_conv2d_10_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_to_conv2d_10_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_6_to_conv2d_12_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_6_to_conv2d_12_syn();
EXPORT_FUNC void pushkernelgconv2d_6_to_conv2d_12_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_6_to_conv2d_12_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_6_to_conv2d_12_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_6_to_conv2d_12_synFromDevice();
EXPORT_FUNC void pushconv2d_6_to_conv2d_12_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_to_conv2d_12_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_6_to_conv2d_8_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_6_to_conv2d_8_syn();
EXPORT_FUNC void pushkernelgconv2d_6_to_conv2d_8_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_6_to_conv2d_8_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_6_to_conv2d_8_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_6_to_conv2d_8_synFromDevice();
EXPORT_FUNC void pushconv2d_6_to_conv2d_8_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_6_to_conv2d_8_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_7_to_conv2d_10_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_7_to_conv2d_10_syn();
EXPORT_FUNC void pushkernelgconv2d_7_to_conv2d_10_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_7_to_conv2d_10_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_7_to_conv2d_10_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_7_to_conv2d_10_synFromDevice();
EXPORT_FUNC void pushconv2d_7_to_conv2d_10_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_7_to_conv2d_10_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_7_to_conv2d_12_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_7_to_conv2d_12_syn();
EXPORT_FUNC void pushkernelgconv2d_7_to_conv2d_12_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_7_to_conv2d_12_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_7_to_conv2d_12_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_7_to_conv2d_12_synFromDevice();
EXPORT_FUNC void pushconv2d_7_to_conv2d_12_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_7_to_conv2d_12_synStateFromDevice();
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
EXPORT_FUNC void allocatekernelgconv2d_9_to_conv2d_10_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_9_to_conv2d_10_syn();
EXPORT_FUNC void pushkernelgconv2d_9_to_conv2d_10_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_9_to_conv2d_10_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_9_to_conv2d_10_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_9_to_conv2d_10_synFromDevice();
EXPORT_FUNC void pushconv2d_9_to_conv2d_10_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_9_to_conv2d_10_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_9_to_conv2d_12_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_9_to_conv2d_12_syn();
EXPORT_FUNC void pushkernelgconv2d_9_to_conv2d_12_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_9_to_conv2d_12_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_9_to_conv2d_12_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_9_to_conv2d_12_synFromDevice();
EXPORT_FUNC void pushconv2d_9_to_conv2d_12_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_9_to_conv2d_12_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_to_conv2d_1_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_to_conv2d_1_syn();
EXPORT_FUNC void pushkernelgconv2d_to_conv2d_1_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_to_conv2d_1_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_to_conv2d_1_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_to_conv2d_1_synFromDevice();
EXPORT_FUNC void pushconv2d_to_conv2d_1_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_to_conv2d_1_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_to_conv2d_3_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_to_conv2d_3_syn();
EXPORT_FUNC void pushkernelgconv2d_to_conv2d_3_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_to_conv2d_3_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_to_conv2d_3_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_to_conv2d_3_synFromDevice();
EXPORT_FUNC void pushconv2d_to_conv2d_3_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_to_conv2d_3_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_to_conv2d_5_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_to_conv2d_5_syn();
EXPORT_FUNC void pushkernelgconv2d_to_conv2d_5_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_to_conv2d_5_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_to_conv2d_5_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_to_conv2d_5_synFromDevice();
EXPORT_FUNC void pushconv2d_to_conv2d_5_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_to_conv2d_5_synStateFromDevice();
EXPORT_FUNC void allocatekernelgconv2d_to_conv2d_7_syn(unsigned int count);
EXPORT_FUNC void freekernelgconv2d_to_conv2d_7_syn();
EXPORT_FUNC void pushkernelgconv2d_to_conv2d_7_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelgconv2d_to_conv2d_7_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSynconv2d_to_conv2d_7_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynconv2d_to_conv2d_7_synFromDevice();
EXPORT_FUNC void pushconv2d_to_conv2d_7_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullconv2d_to_conv2d_7_synStateFromDevice();
EXPORT_FUNC void allocatekernelginput_1_to_conv2d_syn(unsigned int count);
EXPORT_FUNC void freekernelginput_1_to_conv2d_syn();
EXPORT_FUNC void pushkernelginput_1_to_conv2d_synToDevice(unsigned int count);
EXPORT_FUNC void pullkernelginput_1_to_conv2d_synFromDevice(unsigned int count);
EXPORT_FUNC void pushinSyninput_1_to_conv2d_synToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSyninput_1_to_conv2d_synFromDevice();
EXPORT_FUNC void pushinput_1_to_conv2d_synStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinput_1_to_conv2d_synStateFromDevice();
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
