#include<stdio.h>

int main(){
    int row,col,n;
    
//follow tech crash course in google for better petern
    printf("Enter your number : ");
    scanf("%d",&n);

    for (row =1; row<=n; row++)
    {
      //print for number
      for (col= 1; col<=n-row; col++)
      {
        printf(" ");
      }

      //print for number
      for (col= 1; col<=row; col++)
      {
        printf("*");
      }
      printf("\n");
      
    }


//second condition
     for (row =n-1; row>=1; row--)
    {
      //print for number
      for (col= 1; col<=n-row; col++)
      {
        printf(" ");
      }

      //print for number
      for (col= 1; col<=row; col++)
      {
        printf("*");
      }
      printf("\n");

      
    }



}
    
    
    
    
    
