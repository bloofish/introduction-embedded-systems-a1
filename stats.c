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
 * @brief Assignment 1 main file
 *
 *
 * @author Fraser Geddes
 * @date 29/01/25
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Orginal array:\n");
  print_array(test, SIZE);
  printf("\nMedian: ");
  printf("%d", find_median(test, SIZE));
  printf("\nMean: ");
  printf("%d", find_mean(test, SIZE));
  printf("\nMaximum: ");
  printf("%d", find_maximum(test, SIZE));
  printf("\nMinimum: ");
  printf("%d", find_minimum(test, SIZE));
  printf("\nSorted array:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("\n");
}
void print_array(unsigned char * data, unsigned int size){
  for (int i = 0 ; i < size ; i++){
    printf("%d ", *(data + i));
  }
}

unsigned char find_median(unsigned char * data, unsigned int size){
  unsigned char temp[size];
  for (int i = 0 ; i < size ; i++){
    *(temp + i) = *(data + i);
  }
  sort_array(temp, size);
  if (size % 2 == 0) {
    return (*(temp + (size / 2) - 1) + *(temp + (size / 2))) / 2;
  } else {
    return *(temp + (size / 2));
  }
}

unsigned char find_mean(unsigned char * data, unsigned int size){
  int total = 0;
  for (int i = 0 ; i < size ; i++){
    total += *(data + i);
  }
  unsigned char mean = total / size;
  return mean;
}

unsigned char find_maximum(unsigned char * data, unsigned int size){
  unsigned char maximum = 0;
  for (int i = 0 ; i < size ; i++){
    if (*(data + i) > maximum){
      maximum = *(data + i);
    }
  }
  return maximum;
}

unsigned char find_minimum(unsigned char * data, unsigned int size){
  unsigned char minimum = 255;
  for (int i = 0 ; i < size ; i++){
    if (*(data + i) < minimum){
      minimum = *(data + i);
    }
  }
  return minimum;
}

void sort_array(unsigned char * data, unsigned int size){
  int i, j;
  unsigned char temp;
  for (i = 0 ; i < size - 1 ; i++) {
    for (j = 0 ; j < size - 1 - i ; j++){
      if (*(data + j) < *(data + j + 1)) {
        temp = *(data + j);
        *(data + j) = *(data + j + 1);
        *(data + j + 1) = temp;
      }
    }
  }
}

