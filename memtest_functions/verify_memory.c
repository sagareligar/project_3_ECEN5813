/*
 * verify_memory.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "board.h"
#include "MKL25Z4.h"

#include "global_defines.h"
#include "fsl_debug_console.h"
#include <stdbool.h>
#include "memtest.h"
#include "source/logger.h"

mem_status_t verify_mem;

bool verify_memory(uint8_t* mem){
	bool ret = false;
	if(mem){
		verify_mem = MEM_SUCCESS;
		ret = true;
		Log_string("Allocated memory is available");
	} else{
		verify_mem = MEM_FAILED;
		ret = false;
		Log_string("Allocated memory is NOT available");
	}
	return ret;
}
