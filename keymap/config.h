#pragma once

#ifndef __ASSEMBLER__
#include <stdint.h>
void md_rf_send_carrier(uint8_t channel, uint8_t power, uint8_t mode);
void md_rf_send_stop(void);
#endif
