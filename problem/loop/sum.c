#include<stdio.h>

int main(){

    int i,num,sum=0;

    printf("enter your number : ");
    scanf("%d",&num);

    for ( i = 0; i <=num; i++)
    {
       sum =sum + i;
    }

    printf("the sum is : %d\n",sum);
    
}
