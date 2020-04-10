/*
 * display_memory.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#include <stdio.h>
#include <stdint.h>
#include "board.h"
#include "MKL25Z4.h"

#include "global_defines.h"
#include "fsl_debug_console.h"
#include "memtest.h"
#include "source/logger.h"

void display_memory(uint8_t* mem, uint8_t num_bytes){
	PRINTF("0x%08X\r\n", mem);
	//
}
