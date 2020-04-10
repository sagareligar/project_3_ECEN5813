/*
 * memtest.h
 *
 *  Created on: Feb 20, 2020
 *      Author: Dhruva
 */

#ifndef MEMTEST_H_
#define MEMTEST_H_

#include <stdbool.h>
#include <stdint.h>

#define MAX_SIZE 32

typedef enum mem_status_t{
	MEM_SUCCESS = 0,// no error
	MEM_FAILED// failure case} mem_status;
} mem_status_t;

uint8_t *allocate_bytes(uint8_t num_bytes);
void free_allocated(uint8_t* mem);
bool verify_memory(uint8_t* mem);
void display_memory(uint8_t* mem, uint8_t num_bytes);
void write_memory(uint8_t* mem, uint8_t offset, uint8_t len, uint8_t val);
void invert_block(uint8_t* mem, uint8_t offset, uint8_t num_bytes);
void write_pattern(uint8_t* mem, uint8_t num_bytes, uint8_t seed);
bool compare_pattern(uint8_t* mem, uint8_t num_bytes, uint8_t seed);

#endif /* MEMTEST_H_ */
