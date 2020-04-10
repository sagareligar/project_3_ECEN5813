/*
 * write_pattern.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#include <stdio.h>
#include <stdint.h>
#include "board.h"
#include "MKL25Z4.h"

#include "memtest.h"
#include "source/logger.h"
#include "source/patterngen.h"

mem_status_t pattern_wr;

void write_pattern(uint8_t *mem, uint8_t num_bytes, uint8_t seed){
	// testing
	uint8_t b[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	for(int i = 0; i < num_bytes; ++i){
		*mem = b[i];
		mem++;
	}
	pattern_wr = MEM_SUCCESS;
}
