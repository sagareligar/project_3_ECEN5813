/*
 * logger.h
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <stdint.h>
#include <stdbool.h>

typedef enum log_status_t{
	LOG_SUCCESS = 0,// no error
	LOG_FAILED// failure case} mem_status;
} log_status_t;

void Log_enable(void); // begin printing log messages when called
void Log_disable(void); // ignore any log messages until re-enabled
bool Log_status(void); // returns a flag to indicate whether the logger is enabled or disabled
int Log_data(uint8_t * seq, uint8_t len); // display in hexadecimal an address and contents of a memory location, arguments are a pointer to a sequence of bytes and a specified length
int Log_string(const char * string); // display a string
int Log_integer(uint8_t integer); // display an integer

// The previous three commands should include a new line after each display

#endif /* LOGGER_H_ */
