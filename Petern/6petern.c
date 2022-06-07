#include<stdio.h>

int main(){
    int row,col,n;

    printf("enter your number : ");
    scanf("%d",&n);

    for ( row = 1; row <=n; row++)
    {
        //printing space
       for ( col=1 ; col <=n-row ; col++)
       {
          printf("  ",col);
       }
       //printing number
       for ( col = 1; col <=row; col++)
       {
          printf(" *");
       }
       printf("\n");
       
       
    }
    
    for ( row = n-1; row >=1; row--)
    {
        //printing space
       for ( col=1 ; col <=n-row ; col++)
       {
          printf("  ",col);
       }
       //printing number
       for ( col = 1; col <=row; col++)
       {
          printf(" #");
       }
       printf("\n");
       
       
    }

    
}