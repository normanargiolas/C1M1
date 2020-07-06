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
 * @file stat.h
 * @brief Simple application that performs statistical analytics on a dataset.
 *
 * <Add Extended Description Here>
 *
 * @author norman argiolas
 * @date 06/Jul/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


void print_array(unsigned char *test, unsigned int size);
/**
 * @brief prints the array to the screen
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param test array of data
 * @param size array length
 *
 * @return void
 */


unsigned char find_maximum(unsigned char *test, unsigned int size);
/**
 * @brief returns the maximum of an array
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param test array of data
 * @param size array length
 *
 * @return unsigned char - the maximum of an array
 */


unsigned char find_minimum(unsigned char *test, unsigned int size);
/**
 * @brief returns the minimum of an array
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param test array of data
 * @param size array length
 *
 * @return unsigned char - the minimum of an array
 */


unsigned char find_median(unsigned char *test, unsigned int size);
/**
 * @brief returns the median value of an array
 *
 * Given an array of data and a length, returns the median value
 *
 * @param test array of data
 * @param size array length
 *
 * @return float - the median of an array
 */


float find_mean(unsigned char *test, unsigned int size);
/**
 * @brief returns the mean value of an array
 *
 * Given an array of data and a length, returns the mean
 *
 * @param test array of data
 * @param size array length
 *
 * @return float - the mean of an array
 */


int sort_array(unsigned char *test, unsigned int size);
/**
 * @brief sorts the array from largest to smallest
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value, and the last element (n-1)
 * should be the smallest value. )

 *
 * @param test array of data, source and destination
 * @param size array length
 *
 * @return int - 0 Ok, -1 error
 */


void print_statistics(const unsigned char *test, unsigned int size);
/**
 * @brief prints the statistics of an array
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param test array of data
 * @param size array length
 *
 * @return void
 */

#endif /* __STATS_H__ */
