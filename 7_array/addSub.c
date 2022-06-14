#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int a[2][2],b[2][2],c[2][2];


   
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         printf("Enter value for A[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }


   //Displaying array elements
   printf("Two Dimensional A elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         printf("%d ", a[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }

  printf("\n");
   //To DO b array
   for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         printf("Enter value for B[%d][%d]:", i, j);
         scanf("%d", &b[i][j]);
      }
   }


   //Displaying array elements
   printf("Two Dimensional B elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         printf("%d ", b[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }


   printf("\n Add Two Dimensional C elements :\n");
   for ( i = 0; i < 2; i++)
   {
    for ( j = 0; j < 2; j++)
    {
       c[2][2]=a[2][2] + b[2][2];
    }
    printf("\n");
    
   }

   printf("\n Addition of a +b = c :\n " );
   for ( i = 0; i <2; i++)
   {
    for ( j = 0; j< 2; i++)
    {
       printf("%d\n : ",c[i][j]);
    }
    printf("\n");
    
   }
   

   
   return 0;
}