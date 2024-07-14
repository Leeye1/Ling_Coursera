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
 * @file <stats.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Yi Ling>
 * @date <2024.7.14>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char* arr, unsigned int size){
	printf("Minimun:%d\n",find_minimum(arr,size));
	printf("Maximun:%d\n",find_maximum(arr,size));
	printf("Mean:%d\n",find_mean(arr,size));
	printf("Median:%d\n",find_median(arr,size));
}

void print_array(unsigned char* arr, unsigned int size){
	sort_array(arr,size);
	for(unsigned int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void sort_array(unsigned char* arr, unsigned int size){
	for(unsigned int i=0;i<size-1;i++){
		for(unsigned int j=0; j<size-i-1;j++){
			if(arr[j]<arr[j+1]){
				unsigned char temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

unsigned char find_median(unsigned char* arr, unsigned int size){
	sort_array(arr,size);
	if(size%2==0){
		return(arr[size/2-1]+arr[size/2])/2;
	}else{
		return arr[size/2];
	}
}
	
unsigned char find_mean(unsigned char* arr, unsigned int size){
	unsigned int sum=0;
	for(unsigned int i=0; i<size; i++){
		sum += arr[i];
	}
	return sum/size;
}

unsigned char find_maximum(unsigned char* arr, unsigned int size){
	sort_array(arr,size);
	return arr[0];
}

unsigned char find_minimum(unsigned char* arr, unsigned int size){
	sort_array(arr,size);
	return arr[size-1];
}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	print_array(test,SIZE);
	print_statistics(test,SIZE);
	
	return ;
}

/* Add other Implementation File Code Here */
