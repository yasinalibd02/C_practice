//input a number is pass to print 1 or fail to print 0....

#include<stdio.h>
int main(){

int height,need_ticket;

   printf("Enter your height : ");
   scanf("%d",&height);

   need_ticket= height >=36;

   printf("Need ticket : %d\n", need_ticket);

   

}