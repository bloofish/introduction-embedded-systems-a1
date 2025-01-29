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
 * @brief Assignment 1 header file
 *
 *
 * @author Fraser Geddes
 * @date 28/01/25
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics(unsigned char * data, unsigned int size);

/**
 * @brief print array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param data Pointer to data array
 * @param size Size of the data array
 *
 * @return void
 */
void print_array(unsigned char * data, unsigned int size);

/**
 * @brief find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param data Pointer to data array
 * @param size Size of the data array
 *
 * @return median value
 */
unsigned char find_median(unsigned char * data, unsigned int size);

/**
 * @brief find mean
 *
 * Given an array of data and a length, returns the mean value
 *
 * @param data Pointer to data array
 * @param size Size of the data array
 *
 * @return mean value
 */
unsigned char find_mean(unsigned char * data, unsigned int size);

/**
 * @brief find maximum
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param data Pointer to data array
 * @param size Size of the data array
 *
 * @return maximum value
 */
unsigned char find_maximum(unsigned char * data, unsigned int size);

/**
 * @brief find minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param data Pointer to data array
 * @param size Size of the data array
 *
 * @return minumum value
 */
unsigned char find_minimum(unsigned char * data, unsigned int size);

/**
 * @brief sort array
 *
 *  Given an array of data and a length, sorts the array from largest to smallest. 
 *
 * @param data Pointer to data array
 * @param size Size of the data array
 *
 * @return void
 */
void sort_array(unsigned char * data, unsigned int size);



#endif /* __STATS_H__ */
