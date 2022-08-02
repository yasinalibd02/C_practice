#include<stdio.h>
//all number gun fol 
int main(){

    int i,num,sum=1;

    printf("enter your number : ");
    scanf("%d",&num);

    for ( i = 1; i <=num; i++)
    {
       sum = sum *i ;
    }

    printf(" multipied = %d\n",sum);
    
}