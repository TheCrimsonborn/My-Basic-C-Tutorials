//
// Created by Halil Acar on 5.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc,char **argv){

    int num=5;
    short int shortNum;
    long int longNum;
    long long int longlongNum;
    float floatNum=5.345678998765;
    double doubleNum=1.3456789987654321;

    printf("Storage Size of  Int= %lu bit\n",8*sizeof(num));
    printf("Storage Size of Short Int= %lu bit\n",8*sizeof(shortNum));
    printf("Storage Size of Long Int= %lu bit\n",8*sizeof(longNum));
    printf("Storage Size of Long Long Int= %lu bit\n",8*sizeof(longlongNum));
    printf("Storage Size of Float= %lu bit\n",8*sizeof(floatNum));
    printf("Storage Size of Doubbe= %lu bit\n",8*sizeof(doubleNum));

    printf("No Cap Float=%f  ",floatNum);
    printf("No Cap Double=%f\n",doubleNum);

    printf("Cap Float=%.12f  ",floatNum);
    printf("Cap Double=%.15f\n",doubleNum);


    int convNum=(int)floatNum;
    printf("Converted Number=%i\n",convNum);

    float convNum2=(float)num;
    printf("Converted Number 2=%f", convNum2);


    //Limits
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;

}


