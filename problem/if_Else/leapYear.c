#include<stdio.h>

int main(){

    int year;

    printf("enter your letter : ");
    scanf("%d",&year);

    if ( year % 400 == 0)
    {
       printf("leap_Year");
    }
    
    else if ( year % 4 == 0)
    {
       printf("leap_Year");
    }
    
   else if ( year % 400 == 0)
    {
       printf("leap_Year");
    }
    

    else
    {
        printf("not a leap_Year");
    }
    
    
}