#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, int value, size_t left, size_t right);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int interpolation_search_recursive(int *array,size_t low, size_t high, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif
