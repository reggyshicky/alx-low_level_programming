#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* Prototypes */
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);


#endif /*SEARCH_ALGOS_H*/
