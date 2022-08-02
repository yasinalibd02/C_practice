#include<stdio.h>

int main(){
    int row,col,n;
//follow tech crash course in google for better petern
    printf("enter your number : ");
    scanf("%d",&n);

    for ( row = n; row >=1; row--)
    {
       for ( col= 1; col <=row ; col++)
       {
          printf(" *");
       }

       printf("\n");
       
    }
    
}