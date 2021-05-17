//
// Created by Halil Acar on 8.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc,char **argv){
    float accountBalance=1250.0,depositAmount=0,dailyLimit=500.0;
    int operation;
    printf("\t Welcome!\n");
    printf("\t Press 1 to deposit, 2 to withdraw money, 3 to check account balance:");
    scanf("%d",&operation);
    if(operation==1){
        printf("\t Enter the amount you wish to deposit:");
        scanf("%f",&depositAmount);
        if(depositAmount==0){
            printf("\t Please make a deposit within the specified time.");
            _sleep(3);//The program will stop for 3 seconds.
            scanf("%f",&depositAmount);
        }
        accountBalance+=depositAmount;
        printf("\t Your transaction was completed successfully. Thank you.\n");
        printf("\t Your New Balance:%.2f\n",accountBalance);
    }
    else if(operation==2){
        printf("\t Enter the amount you want to withdraw:");
        scanf("%f",&depositAmount);
        if(depositAmount>accountBalance){
            printf("There is not enough money in your account to execute the transaction..\n");
        }
        else if(depositAmount>dailyLimit){
            printf("You exceeded the daily withdrawal limit..\n");
        }
        else{
            accountBalance-=depositAmount;
            printf("Your transaction has been successful. Thank you.\n");
            printf("\t Your New Balance:%.2f\n",accountBalance);
        }
    }
    else if(operation==3){
        printf("\t Account Balance:%.2f\n",accountBalance);
    }
    else{
        printf("You entered an incorrect option.\n");
    }
    return 0;
}