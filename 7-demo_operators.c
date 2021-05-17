//
// Created by Halil Acar on 8.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc,char **argv){
    int moneyAmount;
    printf("Amount of money: ");
    scanf("%d",&moneyAmount);

    printf("There are %d units for 200 dollars.\n",moneyAmount/200);
    moneyAmount%=200;
    printf("There are %d units for 100 dollars.\n",moneyAmount/100);
    moneyAmount%=100;
    printf("There are %d units for 50 dollars.\n",moneyAmount/50);
    moneyAmount%=50;
    printf("There are %d units for 20 dollars.\n",moneyAmount/20);
    moneyAmount%=20;
    printf("There are %d units for 10 dollars.\n",moneyAmount/10);
    moneyAmount%=10;
    printf("There are %d units for 5 dollars.\n",moneyAmount/5);
    moneyAmount%=5;
    printf("There are %d units for 1 dollars.\n",moneyAmount/1);
    moneyAmount%=1;
}
