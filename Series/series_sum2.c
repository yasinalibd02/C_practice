#include<stdio.h>

int main(){

     int i,sum=0,num;

     printf("enter your number : ");
     scanf("%d",&num);

     for ( i =1; i <=num; i=i+2)
     {
        printf(" %d\n",i);
        sum =sum+i;
     }

     printf(" The sum is = %d\n",sum);
     
}