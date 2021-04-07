/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief This file contains declarations pertaining to 
 *
 * <Add Extended Description Here>
 *
 * @author Vinay Sathyanarayana
 * @date 04.Apr.2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @enum error_code_t
 *
 * This enum type contains values that can be returned from a function indicating the status which is used for error handling in the calling function.
 */
typedef enum error_code{
	ERROR_OK  			= 0, /*!< Value 0: Success */
	ERROR_UNKNOWN		= 1, /*!< Value 1: Unclassified error*/
	ERROR_INVALID_ARG	= 2, /*!< Value 2: Invalid argument*/
	ERRPR_NULLPTR		= 3, /*!< Value 3: Nullpointer error*/
	ERROR_COUNT
}error_code_t;

typedef unsigned char 	uint8_t;
typedef unsigned short uint16_t;


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * <Add Extended Description Here>
 *
 * @param None
 *
 * @return error_code_t function status for error handling
 */
error_code_t print_statistics();

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return error_code_t function status for error handling
 */
error_code_t print_array(uint8_t const * data, uint8_t size);

 /**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 * @param[OUT] median A double pointer to the variable containing the calculated median.
 *
 * @return error_code_t function status for error handling
 */
error_code_t find_median(uint8_t const * data, uint8_t size, uint8_t * median);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 * @param[OUT] mean A double pointer to the variable containing the calculated mean.
 *
 * @return error_code_t function status for error handling
 */
error_code_t find_mean(uint8_t const * data, uint8_t size, uint8_t * mean); 

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 * @param[OUT] maximum A double pointer to the variable containing the maximum value in the array.
 *
 * @return error_code_t function status for error handling
 */
error_code_t find_maximum(uint8_t const * data, uint8_t size, uint8_t * maximum); 

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 * @param[OUT] minimum A double pointer to the variable containing the minimum value in the array.
 *
 * @return error_code_t function status for error handling
 */
error_code_t find_minimum(uint8_t const * data, uint8_t size, uint8_t * minimum); 

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return error_code_t function status for error handling
 */
error_code_t sort_array(uint8_t * data, uint8_t size); 


#endif /* __STATS_H__ */
