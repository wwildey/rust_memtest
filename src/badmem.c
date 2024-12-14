// src/num.c
#include <stdio.h>
#include <stdlib.h>

int *intarray;

#define ARRAY_SIZE 256

void print_num(int num) {
    int i = 0;

    intarray = malloc(ARRAY_SIZE * sizeof(int));

    if ( intarray ) {
    for(i = 0; i < ARRAY_SIZE; ++i)
        intarray[i] = i + 1;
    }

    for(i = 0; i < ARRAY_SIZE; ++i)
        printf(" intarray[%d] is %d\n", intarray[i]);

    // free(intarray);
}