#include<stdio.h>

int main()
{

    int row,col,n;

    printf("Enter your number : ");
    scanf("%d",&n);
    
//follow tech crash course in google for better petern
   for (row= 1; row<=n; row++)
   {
       //for space
       for (col=1; col <=n-row; col++)
       {
         printf(" ");
       }
         //for peramid
       for (col=1; col <=row; col++)
       {
         printf("* ");
       }
       printf("\n");
       
   }

}