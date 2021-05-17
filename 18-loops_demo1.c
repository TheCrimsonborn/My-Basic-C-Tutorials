//
// Created by Halil Acar on 12.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <ctype.h>

/* Password Security Compliance Checker */

int main(int argc,char **argv){
    int lowercaseQuery=0,uppercaseQuery=0,numberQuery=0,charCount=0;
    char ch;
    printf("Please enter a password:");
    do{
        ch=getchar();
        if(lowercaseQuery==0){
            if(islower(ch)){
                lowercaseQuery=1;
            }
        }
        if(uppercaseQuery==0){
            if(isupper(ch)){
                uppercaseQuery=1;
            }
        }
        if(numberQuery==0){
            if(isdigit(ch)){
                numberQuery=1;
            }
        }
        charCount++;
    }while(ch!='\n');

    if(lowercaseQuery && uppercaseQuery && numberQuery && charCount>=8 && charCount<=16){
        printf("The security level of your password is high.");
    }
    else{
        printf("The security level of your password is low. Please enter a high security password.");
    }
}


