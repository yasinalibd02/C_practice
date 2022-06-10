#include<stdio.h>

int main(){

   

    for (int  row= 1; row <=100; row+=10)
    {
      for ( int col= row; col<row+10; col++)
      {
         printf("%d ",col);
      }
        printf("\n");
      
    }
  
    
}