
#include<stdio.h>

void main(){

     char c;
     int n;

     printf("enter your number and char : ");
     scanf("%d %c",&n,&c);

   

    for ( int i = 0; i <n; i++)
    {
       printf(" %d %c \n", i+1 , c);
    }
    
}


