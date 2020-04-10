/*
 * free_allocated.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "board.h"
#include "MKL25Z4.h"

#include "global_defines.h"
#include "fsl_debug_console.h"
#include "memtest.h"
#include "source/logger.h"

mem_status_t free_alloc;

void free_allocated(uint8_t* mem){
	if(mem){
		free(mem);
		free_alloc = MEM_SUCCESS;
		Log_string("Allocated memory freed");
	} else{
		free_alloc = MEM_FAILED;
		Log_string("No allocated memory to free");
	}

	//
}
