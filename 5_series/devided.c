#include<stdio.h>

int main()

{


    double i,num,sum=0;

    printf("enter your number : ");
    scanf("%lf",&num);

    for ( i =1; i <=num; i++)
    {
        sum =sum +(1/i);
    }

    printf("Sum = %.1lf\n",sum);
    
}