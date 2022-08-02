#include<stdio.h>

int main()
{
//follow tech crash course in google for better petern
    int row,col,n,count=1;

    printf("Enter your number : ");
    scanf("%d",&n);
    

   for (row= 1; row<=n; row++)
   {
      
        
       for (col=1; col <=row; col++)
       {
      printf("%d ", count++);
      
       
   }
   printf("\n");

   
    

}
}