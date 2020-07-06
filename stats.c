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
 * @file stat.c
 * @brief Simple application that performs statistical analytics on a dataset.
 *
 * In this programming assignment you will create a simple application that performs
 * statistical analytics on a dataset. This assignment will help you get re-oriented
 * with c-programming syntax and host machine compilation. We begin by setting up a
 * version control repository on your local machine. You will then develop and test
 * your code there. When complete, you will upload a zip of your repository to Coursera.
 * Please read through all instructions before starting.
 *
 * @author norman argiolas
 * @date 06/Jul/2020
 *
 */



#include <stdio.h>
#include <stdlib.h>

#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// swap values with respect a type it
#ifndef SWAP
    #define SWAP(type, a, b) \
    { \
        type temp = a; \
        a = b; \
        b = temp; \
    }
#endif

static unsigned char compare( const void* a, const void* b);
static int reverseUnsignedCharArray(unsigned char *array, const size_t length);



void main()
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
							  114, 88,   45,  76, 123,  87,  25,  23,
							  200, 122, 150, 90,   92,  87, 177, 244,
							  201,   6,  12,  60,   8,   2,   5,  67,
								7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);
  print_statistics(test, SIZE);

  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_array(unsigned char *test, unsigned int size)
{
	printf("--------------------\r\n");
	for(unsigned int i = 0; i < size; i++)
	{
		printf("%d  ", test[i]);
	}
	printf("\r\n");

	printf("--------------------\r\n");
}

unsigned char find_maximum(unsigned char *test, unsigned int size)
{
	unsigned char max = test[0];
	for(unsigned int i = 0; i < size; i++)
	{

		if (test[i] > max)
		{
			max = test[i];
		}
	}
	//printf("max: %d\r\n", max);

	return max;
}

unsigned char find_minimum(unsigned char *test, unsigned int size)
{
	unsigned char max = test[0];
	for(unsigned int i = 0; i < size; i++)
	{

		if (test[i] < max)
		{
			max = test[i];
		}
	}
	//printf("max: %d\r\n", max);

	return max;
}

float find_mean(unsigned char *test, unsigned int size)
{
	unsigned char s;
	for(unsigned int i = 0; i < size; i++)
	{
		s += test[i];
	}
	float m = (float) s/size;

//	printf("m: %f\r\n", m);

	return m;
}

unsigned char find_median(unsigned char *test, unsigned int size)
{

	unsigned char t[SIZE];
	memcpy (t, test, SIZE );
	qsort( t, SIZE, sizeof(unsigned char), compare);
	unsigned char m = t[SIZE/2];

//	printf("m: %d\r\n", m);

	return m;
}


int sort_array(unsigned char *test, unsigned int size)
{

	qsort( test, SIZE, sizeof(unsigned char), compare);
	reverseUnsignedCharArray(test, SIZE);
	//todo check error
	return 0;
}

static int reverseUnsignedCharArray(unsigned char *array, const size_t length)
{
    for (int i = 0; i < length / 2; ++i) {
        SWAP(unsigned char, array[i], array[length - i - 1]);
    }
    return 0;
}

static unsigned char compare (const void * a, const void * b)
{
  return ( *(unsigned char*)a - *(unsigned char*)b );
}


void print_statistics(const unsigned char *test, unsigned int size)
{
	printf("--------------------\r\n");

	printf("minimum: %d\r\n", find_minimum(test, SIZE));
	printf("maximum: %d\r\n", find_maximum(test, SIZE));
	printf("mean: %f\r\n", find_mean(test, SIZE));
	printf("median: %d\r\n", find_median(test, SIZE));

	printf("--------------------\r\n");

}
