#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* Prototypes */
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);


#endif /*SEARCH_ALGOS_H*/
