/*
 * allocate_bytes.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "board.h"
#include "MKL25Z4.h"

#include "global_defines.h"
#include "fsl_debug_console.h"
#include "memtest.h"
#include "source/logger.h"

mem_status_t alloc_b;

uint8_t *allocate_bytes(uint8_t num_bytes){
	uint8_t *block;
	if(num_bytes > MAX_SIZE){
		alloc_b = MEM_FAILED;
		Log_string("Allocating bytes failed: exceeded block size");
	} else{
		block = (uint8_t *)malloc(num_bytes * sizeof(uint8_t));
		alloc_b = MEM_SUCCESS;
		Log_string("Allocating bytes success");
	}
	return block;
}
