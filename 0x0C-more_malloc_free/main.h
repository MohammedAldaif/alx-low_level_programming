#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
<<<<<<< HEAD
=======
int *array_range(int min, int max);
>>>>>>> b310187eaf06c01ecc9cc2483ce2713957962809
#endif
