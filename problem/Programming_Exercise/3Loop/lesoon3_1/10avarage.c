#include<stdio.h>
void main(){
    int i,n,sum=0;

    printf("enter your number : ");
    scanf("%d",&n);

    for ( i = 0; i <=n; i++)
    {
       sum = sum + i;
    }

    printf("%d",sum/n);
    
}