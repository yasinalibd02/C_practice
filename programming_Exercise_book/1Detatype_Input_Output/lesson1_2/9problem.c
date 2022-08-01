#include<stdio.h>

void main(){
    float i,sum=0;

    for ( i = 0; i <11; i++)
    {
        sum += i;
    }

    printf("%.2f",sum/10);
    
}