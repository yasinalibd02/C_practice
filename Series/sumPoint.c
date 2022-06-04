#include<stdio.h>

void main(){

    float num,i,sum=0;

   

    printf("enter your number : ");
    scanf("%f",&num);

    for (i = 1.5; i<=num; i++)
    {
        printf("%.1f\n +",i);
        sum =sum +i;
    }
    

    printf(" %.2f\n ",sum);
    
    


}