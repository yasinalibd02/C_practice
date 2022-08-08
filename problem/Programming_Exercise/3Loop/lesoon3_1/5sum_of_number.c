#include<stdio.h>

void main(){
    int i,n,sum=0,r;

    printf("enter your number : ");
    scanf("%d",&n);
    

    while (n !=0)
    {
       
    sum += (n % 10);
    n /= 10;
    }

    printf("%d\n",sum);
    
    
}