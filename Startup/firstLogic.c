#include<stdio.h>

void main(){
    int height,needTicket; 

    printf("enter  your height : ");

    scanf("%d",&height);

    needTicket= height >=100 ;
    printf(" Need Ticket : %d\n",needTicket);

}