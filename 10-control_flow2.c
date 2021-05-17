//
// Created by Halil Acar on 8.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main () {

    /* local variable definition */
    int a = 100;

    /* check the boolean condition */
    if( a < 20 ) {
        /* if condition is true then print the following */
        printf("a is less than 20\n" );
    } else {
        /* if condition is false then print the following */
        printf("a is not less than 20\n" );
    }

    printf("value of a is : %d\n", a);

    return 0;
}