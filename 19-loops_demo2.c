//
// Created by Halil Acar on 12.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <ctype.h>

/* Prime Number Query */

int main(int argc,char **argv){
    int lowerLimit,upperLimit,divisionQuery;
    int i,j;

    printf("Please enter the lower and upper limit information:");
    scanf("%d%d",&lowerLimit,&upperLimit);

    for(i=lowerLimit;i<=upperLimit;i++){
        divisionQuery=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                divisionQuery=1;
                break;
            }
        }
        if(!divisionQuery){
            printf("%d ",i);
        }
    }
}