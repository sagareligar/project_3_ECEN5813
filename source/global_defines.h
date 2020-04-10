/*
 * global defines.h
 *
 *  Created on: Feb 8, 2020
 *      Author: Dhruva
 */

#ifndef GLOBAL_DEFINES_H_
#define GLOBAL_DEFINES_H_

#include "fsl_debug_console.h"

//// macros to enable/disable logging, user interaction

#define LOGGING_MODE
#define USER_INTERACTION

// enable/disable logging
#ifdef LOGGING_MODE
#define LOGGING (1)
#else
#define LOGGING (0)
#endif

// define macros for LED_init function
#define RED_LED_SHIFT   (18)	// on port B
#define GREEN_LED_SHIFT (19)	// on port B
#define BLUE_LED_SHIFT  (1)		// on port D
#define MASK(x) (1UL << (x))

// define macros for LED_on and LED_off functions
#define RED (1U)
#define GREEN (2U)
#define BLUE (3U)
#define ALL (4U)

#endif /* GLOBAL_DEFINES_H_ */
