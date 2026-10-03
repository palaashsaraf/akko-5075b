#pragma once

#ifndef __ASSEMBLER__
#include <stdint.h>
void md_rf_send_carrier(uint8_t channel, uint8_t power, uint8_t mode);
void md_rf_send_stop(void);
#endif

#undef RGB_MATRIX_DEFAULT_MODE
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE 202
#define RGB_MATRIX_DEFAULT_SAT 130
