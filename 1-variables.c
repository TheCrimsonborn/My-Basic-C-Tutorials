//
// Created by Halil Acar on 5.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/*
int    i, j, k;
char   c, ch;
float  f, salary;
double d;
*/

int main(int argc,char **argv){
//  variablesType variablesName=variablesValue;
    int num,num2=9; //integer
    float num3=5.7; //float
    double num4=2.8; //double
    char text='x'; //character

    num=5;

    printf("%d %i %.2f %.2lf %c\n",num,num2,num3,num4,text);
    printf("%x %x %x %x %x\n",&num,&num2,&num3,&num4,&text);



    return 0;
}