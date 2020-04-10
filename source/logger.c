/*
 * logger.c
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#ifndef LOGGING_C_
#define LOGGING_C_

#include "logger.h"
#include <stdint.h>
#include <stdbool.h>
#include "fsl_debug_console.h"
#include "global_defines.h"

log_status_t log_status;

bool enabled = false;

void Log_enable(void){
#if LOGGING
	// begin printing log messages when called
	enabled = true;
#endif
}

void Log_disable(void){
#if LOGGING
	// ignore any log messages until re-enabled
	enabled = false;
#endif
}

bool Log_status(void){
	bool ret = false;
#if LOGGING
	// returns a flag to indicate whether the logger is enabled or disabled
	if(enabled){
		ret = true;
	} else{
		ret = false;
	}
#endif
	return ret;
}

int Log_data(uint8_t* seq, uint8_t len){
	log_status = LOG_FAILED;
#if LOGGING
	// display in hexadecimal an address and contents of a memory location, arguments are a pointer to a sequence of bytes and a specified length
	if(enabled){
		int ret = PRINTF("Memory allocated at 0x%08X	Data: ", seq);
		for(int i = 0; i < len; ++i){
			ret = PRINTF("|%d| ", seq[i]);
		}
		ret = PRINTF("\r\n");
		if(ret >= 0){
			log_status = LOG_SUCCESS;
		}
	}
#endif
	return log_status;
}

int Log_string(const char *string){
	log_status = LOG_FAILED;
#if LOGGING
	// display a string
	if(enabled){
		int ret = PRINTF("%s\r\n", string);
		if(ret >= 0){
			log_status = LOG_SUCCESS;
		}
	}
#endif
	return log_status;
}

int Log_integer(uint8_t integer){
	log_status = LOG_FAILED;
#if LOGGING
	// display an integer
	if(enabled){
		int ret = PRINTF("%d\r\n", integer);
		if(ret >= 0){
			log_status = LOG_SUCCESS;
		}
	}
#endif
	return log_status;
}


#endif /* LOGGING_C_ */
