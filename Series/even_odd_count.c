#include<stdio.h>

int main(){
    int i,n,even=0,odd=0;

    printf("Enter your number : ");
    scanf("%d",&n);

    for (i =1; i <=n; i++)
    {
       if (i % 2==0)
       {
           even =even +i;
       }
       else if (i % 2 !=0)
       {
           odd=odd+i;
       }


       
    }

    printf(" the sum is = %d\n ",odd - even);
    
}