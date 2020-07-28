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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an unsigned char array.
 *
 * This function prints the minimum, maximum, mean, and 
 * median of an array to the screen.
 */
void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum);

/**
 * @brief Prints an unsigned char array to the screen
 *
 * This function takes a fixed size array and prints 
 * it to the screen
 *
 * @param array The array to be printed to the screen
 * @param length The length of the array.
 *
 */
void print_array(unsigned char* array, unsigned int length);

/**
 * @brief Find the median of an unsigned char array
 *
 * This function takes a fixed size array and
 * computes its median
 *
 * @param array The array to be perform computation on
 * @param length The length of the array.
 *
 * @return The median of the array
 */
unsigned char find_median(unsigned char* array, unsigned int length);

/**
 * @brief Find the mean of an unsigned char array
 *
 * This function takes a fixed size array and
 * computes its mean
 *
 * @param array The array to be perform computation on
 * @param length The length of the array.
 *
 * @return The mean of the array
 */
unsigned char find_mean(unsigned char* array, unsigned int length);

/**
 * @brief Find the maximum of an unsigned char array
 *
 * This function takes a fixed size array and
 * finds its maximum
 *
 * @param array The array to compute maximum on
 * @param length The length of the array.
 *
 * @return The maximum of the array
 */
unsigned char find_maximum(unsigned char* array, unsigned int length);

/**
 * @brief Find the minimum of an unsigned char array
 *
 * This function takes a fixed size array and
 * finds its minimum
 *
 * @param array The array to compute minimum on
 * @param length The length of the array.
 *
 * @return The minimum of the array
 */
unsigned char find_minimum(unsigned char* array, unsigned int length);

/**
 * @brief Sort an unsigned array from largest to smallest
 *
 * This function takes a fixed size array and
 * sorts it's content from largest to smallest
 *
 * @param array The array to sort
 * @param length The length of the array.
 *
 */
void sort_array(unsigned char* array, unsigned int length);

/**
 * @brief Swap two unsigned char values
 *
 * This function takes two unsignbed chars 
 * and swap their values
 *
 * @param c1 the first character
 * @param c2 the second character
 *
 */
void swap (unsigned char* c1, unsigned char* c2);


#endif /* __STATS_H__ */
