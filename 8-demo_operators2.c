//
// Created by Halil Acar on 8.05.2021.
//
#include <stdio.h>
#include <math.h>


int main(int argc,char **argv){
    //DeltaCalc
    int a,b,c;
    float deltaResult;
    printf("Please enter the values of a, b, c in order:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The values you entered are in the order:%d %d %d\n",a,b,c);
    //deltaResult=b*b-4*a*c;
    deltaResult=pow(b,2)-4*a*c;
    printf("Delta= %.2f\n",deltaResult);
    printf("Delta comparison result= %d",deltaResult>=0);
}
