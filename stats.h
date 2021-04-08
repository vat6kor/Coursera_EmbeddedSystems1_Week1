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
 * @date 08.Apr.2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
typedef unsigned char 	uint8_t;
typedef unsigned short int uint16_t;

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return void
 */
void print_statistics(uint8_t* data, uint8_t size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return void
 */
void print_array(uint8_t* data, uint8_t size);

 /**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return uint8_t median value
 */
uint8_t find_median(uint8_t* data, uint8_t size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return uint8_t mean value
 */
uint8_t find_mean(uint8_t* data, uint8_t size); 

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return uint8_t median value
 */
uint8_t find_maximum(uint8_t* data, uint8_t size); 

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return uint8_t minimum value
 */
uint8_t find_minimum(uint8_t*  data, uint8_t size); 

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 * <Add Extended Description Here>
 *
 * @param[IN] data A constant unsigned char pointer to the base address of the array containing the data.
 * @param[IN] size The size of the array in terms of number of elements contained in it.
 *
 * @return void
 */
void sort_array(uint8_t* data, uint8_t size); 


#endif /* __STATS_H__ */
