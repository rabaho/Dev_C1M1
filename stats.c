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
 * @file stats.c
 * @brief A simple application that performs statistical analytics on a dataset
 *
 * A set of function that performs statistical computation on a set of data.
 *
 * @author Rabah Ouldnoughi
 * @date 07/27/2020
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)





void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char mean = 0, median = 0, max = 0, min = 0;

  /* Statistics and Printing Functions Go Here */
  mean = find_mean(test, SIZE);
  median = find_median(test, SIZE);
  max = find_maximum(test, SIZE);
  min = find_minimum(test, SIZE);
  print_array(test, SIZE);
  print_statistics(mean, median, max, min);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum) {
  printf("/----------Array Stats---------/\n");
  printf("  Mean    is %d\n", mean);
  printf("  Median  is %d\n", median);
  printf("  maximum is %d\n", maximum);
  printf("  minimum is %d\n", minimum);
  printf("/------------------------------/\n");
}

void print_array(unsigned char* array, unsigned int length)
{
  unsigned int i;
  printf("Array Size: %d\n", length);

  for(i=0; i < length; ++i) {
    printf("Array[%d] = %d\n", i, array[i]);
  }
}

unsigned char find_median(unsigned char* array, unsigned int length) {
  //sort the array first
  sort_array(array, length);

  //check if number of elements is even or odd
  if(length % 2 != 0) {
    return array[length / 2];
  } else {
    return floor((array[(length - 1) / 2] + array[length/2]) / 2.0);
  }
}

unsigned char find_mean(unsigned char* array, unsigned int length) {
  unsigned int i;
  unsigned int total = 0;
  for(i=0; i < length; ++i) {
    total += array[i];
  }
  return floor(total/length);
}

unsigned char find_maximum(unsigned char* array, unsigned int length) {
  unsigned int i;
  unsigned char max = array[0];
  for(i=0; i < length; ++i) {
    if(array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char* array, unsigned int length) {
  unsigned int i;
  unsigned char min = array[0];
  for(i=0; i < length; ++i) {
    if(array[i] < min) {
      min = array[i];
    }
  }
  return min; 
}

void sort_array(unsigned char* array, unsigned int length) {
  for(unsigned i=0; i < length - 1; ++i) {
    for(unsigned j=0; j < length - i - 1; ++j) {
      if(array[j] < array[j + 1]) {
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}

void swap(unsigned char* c1, unsigned char* c2) {
  unsigned char tmp;
  tmp = *c1;
  *c1 = *c2;
  *c2 = tmp;
}


