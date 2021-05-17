//
// Created by Halil Acar on 13.05.2021.
//
/*
 * return_type function_name( parameter list ) {
   body of the function
   }
 *return_type function_name( parameter list );
 * int max(int num1, int num2);
 * int max(int, int);

 */
#include <stdio.h>


/* function declaration */
int max(int num1, int num2);

int main () {

    /* local variable definition */
    int a = 100;
    int b = 200;
    int ret;

    /* calling a function to get max value */
    ret = max(a, b);

    printf( "Max value is : %d\n", ret );

    return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2) {

    /* local variable declaration */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
