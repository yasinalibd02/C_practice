#include<stdio.h>

int main()
{

    int i,a[100],number;

    a[0]=0;
    a[1]=1;

    printf("enter your terms of number : ");
    scanf("%d",&number);

    for ( i = 2; i <=number; i++)
    {
       a[i]= a[i-1] + a[i-2];
    }
  printf(" \n");

   for ( i = 0; i < number; i++)
   {
    printf(" %d",a[i]);
   }
   
   
    



    
}