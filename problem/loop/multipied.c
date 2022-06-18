#include<stdio.h>

int main(){

    int i,num,sum;

    printf("enter your number : ");
    scanf("%d",&num);

    for ( i =1; i <=10; i++)
    {

        sum=num*i;

      printf(" %d * %d = %d\n",num ,i, sum);
    
    }

   
    
}