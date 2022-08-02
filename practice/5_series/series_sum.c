#include<stdio.h>

int main(){
    int i,num,sum=0;

    printf("enter your number : ");
    scanf(" %d",&num);

    for ( i =2; i <=num; i=i+3)
    {
       printf("%d",i);
        sum =sum+i;

    }

    printf("The Sum is = %d\n",sum);
    
}