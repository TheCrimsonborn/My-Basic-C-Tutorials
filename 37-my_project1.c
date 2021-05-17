//
// Created by Halil Acar on 13.05.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROOMS 100

typedef struct{
    char *customerFName;
    char *customerLName;
}customerInfos;

typedef struct{
    int day;
    int month;
    int year;
}dateInfos;

typedef struct{
    int customerCount;
    int roomStatus;
    int roomNumber;
    double priceInfo;
    customerInfos customer;
    dateInfos enteredDate;
    dateInfos leftDate;
}roomInfos;

typedef enum{
    customer=0,staff=1
}authLevels;

int calculateDays(dateInfos enteredDate, dateInfos leftDate){
    if(enteredDate.day>leftDate.day){
        leftDate.month-=1;
        leftDate.day+=30;
    }
    if(enteredDate.month>leftDate.month){
        leftDate.year-=1;
        leftDate.month+=12;
    }
    dateInfos dateDifference;
    dateDifference.day=leftDate.day-enteredDate.day;
    dateDifference.month=leftDate.month-enteredDate.month;
    dateDifference.year=leftDate.year-enteredDate.year;

    int dayDifference=dateDifference.year*365+dateDifference.month*30+dateDifference.day;
    return dayDifference;

}


double calcPrice(roomInfos *rooms,int roomNumber){
    int dayDifference=calculateDays(rooms[roomNumber-1].enteredDate,rooms[roomNumber-1].leftDate);
    printf("Number of days customers will visit:%d\n",dayDifference);
    return dayDifference*150*rooms[roomNumber-1].customerCount;
}


void clearBooking(roomInfos *rooms,int roomNumber){
    rooms[roomNumber-1].roomStatus=0;
    free(rooms[roomNumber-1].customer.customerFName);
    free(rooms[roomNumber-1].customer.customerLName);
    printf(" The exit/cancellation process of room number %d has been completed.\n",roomNumber);
}

void fullRoomStatus(roomInfos *rooms){
    int i;
    for(i=0;i<ROOMS;i++){
        if(rooms[i].roomStatus!=0){
            printf("-------------------------------------------------------------------------\n");
            printf("Room Number:%d\n",rooms[i].roomNumber);
            printf("Customer Name:%s %s\n",rooms[i].customer.customerFName,rooms[i].customer.customerLName);
            printf("Customer Count:%d\n",rooms[i].customerCount);
            printf("Price:%.2lf$\n",rooms[i].priceInfo);
            printf("Date Entered:%d:%d:%d\n",rooms[i].enteredDate.day,rooms[i].enteredDate.month,rooms[i].enteredDate.year);
            printf("Date Left:%d:%d:%d\n",rooms[i].leftDate.day,rooms[i].leftDate.month,rooms[i].leftDate.year);
        }
    }
}

void addNewCustomer(roomInfos *rooms){

    int roomQuery;
    char customerFName[20],customerLName[20],ch;

    printf("Please enter the room you want to register:");
    scanf("%d",&roomQuery);

    if(rooms[roomQuery-1].roomStatus!=0){
        printf("Sorry. The room you want to register is occupied until %d:%d:%d.",rooms[roomQuery-1].leftDate.day,rooms[roomQuery-1].leftDate.month,rooms[roomQuery-1].leftDate.year);
        return;
    }

    rooms[roomQuery-1].roomNumber=roomQuery;

    printf("Please enter your name and surname in order:");
    scanf("%s%s",&customerFName,&customerLName);

    rooms[roomQuery-1].customer.customerFName=(char*)malloc(sizeof(char)*strlen(customerFName)+1);
    rooms[roomQuery-1].customer.customerLName=(char*)malloc(sizeof(char)*strlen(customerLName)+1);
    strcpy(rooms[roomQuery-1].customer.customerFName,customerFName);
    strcpy(rooms[roomQuery-1].customer.customerLName,customerLName);

    printf("Please enter how many customer you will be:");
    scanf("%d",&rooms[roomQuery-1].customerCount);

    printf("Please enter the entry date information as (day:month:year):");
    scanf("%d:%d:%d",&rooms[roomQuery-1].enteredDate.day,&rooms[roomQuery-1].enteredDate.month,&rooms[roomQuery-1].enteredDate.year);

    printf("Please enter the exit date information as (day:month:year):");
    scanf("%d:%d:%d",&rooms[roomQuery-1].leftDate.day,&rooms[roomQuery-1].leftDate.month,&rooms[roomQuery-1].leftDate.year);

    rooms[roomQuery-1].priceInfo=calcPrice(rooms,roomQuery);
    printf("The total amount you have to pay:%.2lf$\n",rooms[roomQuery-1].priceInfo);
    printf("Do you confirm (Y-N): ");
    fflush(stdin);
    ch=getchar();
    if(ch=='N'){
        clearBooking(rooms,roomQuery);
        return;
    }
    rooms[roomQuery-1].roomStatus=1;
}
void roomInfoQuery(roomInfos *rooms,int roomNumber){
    if(rooms[roomNumber-1].roomStatus!=0){
        printf("Room number %d is occupied until %d:%d:%d.\n",roomNumber,rooms[roomNumber-1].leftDate.day,rooms[roomNumber-1].leftDate.month,rooms[roomNumber-1].leftDate.year);
    }
    else{
        printf("Room %d is currently empty\n",roomNumber);
    }
}
void priceInfoCheck(){
    int customerCount;
    double totalAmount=0.0;
    dateInfos enteredDate,leftDate;

    printf("Please enter how many customer you will be:");
    scanf("%d",&customerCount);
    printf("Please enter the entry date information as (day:month:year):");
    scanf("%d:%d:%d",&enteredDate.day,&enteredDate.month,&enteredDate.year);

    printf("Please enter the exit date information as (day:month:year):");
    scanf("%d:%d:%d",&leftDate.day,&leftDate.month,&leftDate.year);

    totalAmount=calculateDays(enteredDate,leftDate)*customerCount*150;
    printf("The total amount you have to pay:%.2lf$\n",totalAmount);
}

void backupReg(roomInfos *rooms){
    int i;
    FILE *hotelRegs=fopen("hotelRegs.txt","a");
    if(hotelRegs==NULL){
        fprintf(stderr,"An error occurred while making backup recording.");
        exit(1);
    }
    for(i=0;i<ROOMS;i++){
        if(rooms[i].roomStatus!=0){
            fprintf(hotelRegs,"-----------------------------------------------------------------------------\n");
            fprintf(hotelRegs,"Room Number:%d\n",rooms[i].roomNumber);
            fprintf(hotelRegs,"Customer Name:%s %s\n",rooms[i].customer.customerFName,rooms[i].customer.customerLName);
            fprintf(hotelRegs,"Customer Count:%d\n",rooms[i].customerCount);
            fprintf(hotelRegs,"Total Amount:%.2lf$\n",rooms[i].priceInfo);
            fprintf(hotelRegs,"Date Entered:%d:%d:%d\n",rooms[i].enteredDate.day,rooms[i].enteredDate.month,rooms[i].enteredDate.year);
            fprintf(hotelRegs,"Date Left:%d:%d:%d\n",rooms[i].leftDate.day,rooms[i].leftDate.month,rooms[i].leftDate.year);
        }
    }
    fclose(hotelRegs);
}

int main(){
    int currentPass=123456,staffsEnteredPass,roomNumber;
    authLevels userAuth;
    char ch;
    roomInfos *roomArray;
    roomArray=(roomInfos*)calloc(ROOMS,sizeof(roomInfos));
    printf("\t\t\t\tHotel Booking System\n");
    printf("Please enter Staff Password: ");
    scanf("%d",&staffsEnteredPass);
    if(currentPass==staffsEnteredPass){
        userAuth=staff;
    }
    else{
        userAuth=customer;
    }
    do{
        printf("1.New Customer 'E'\n2.Room Info Query 'S'\n3.Room Status Query 'G'\n4.Price Query 'F'\n");
        printf("5.Customer Check Out 'C'\n6.Exit 'Q':\n");
        fflush(stdin);
        ch=getchar();
        switch(ch){
            case 'E':
            case 'e':
                if(userAuth==staff){
                    addNewCustomer(roomArray);
                }
                else{
                    printf("This field can only be used by staffs.");
                }
                break;
            case 'S':
            case 's':
                printf("Enter the number of the room you want to query:");
                scanf("%d",&roomNumber);
                roomInfoQuery(roomArray,roomNumber);
                break;
            case 'G':
            case 'g':
                if(userAuth==staff){
                    fullRoomStatus(roomArray);
                }
                else{
                    printf("This field can only be used by staffs.");
                }
                break;
            case 'C':
            case 'c':
                if(userAuth==staff){
                    printf("Enter the number of the room you want to check out:");
                    scanf("%d",&roomNumber);
                    clearBooking(roomArray,roomNumber);
                }
                else{
                    printf("This field can only be used by staffs.");
                }
                break;
            case 'F':
            case 'f':
                priceInfoCheck();
                break;
            case 'Q':
            case 'q':
                backupReg(roomArray);
                break;
            default:
                break;
        }
    }while(ch!='Q');
    return 0;
}
