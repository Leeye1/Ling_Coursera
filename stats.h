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
 * @file <stats.h> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Yi Ling>
 * @date <2024.7.14>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char* arr, unsigned int size);
/**
 * @brief prints needed data to the screen
 *
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return none
 */
void print_array(unsigned char* arr, unsigned int size);
/**
 * @brief list all the value in the array
 *
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return none
 */
unsigned char find_median(unsigned char* arr, unsigned int size);
/**
 * @brief find the median value of the array
 *
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return the median value of the array
 */
 unsigned char find_maximum(unsigned char* arr, unsigned int size);
/**
 * @brief find the maximum value of the array
 *
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return the maximum value of the array
 */
  unsigned char find_minimum(unsigned char* arr, unsigned int size);
/**
 * @brief find the minimum value of the array
 *
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return the minimum value of the array
 */
  unsigned char find_mean(unsigned char* arr, unsigned int size);
/**
 * @brief find the mean value of the array
 *
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return the mean value of the array
 */
 void sort_array(unsigned char* arr, unsigned int size);
/**
 * @brief sorts the array in an incremental order
 *
 * @param arr the array of data
 * @param size the size of the array

 * @return the sorted array
 */
#endif /* __STATS_H__ */
