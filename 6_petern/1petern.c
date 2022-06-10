#include<stdio.h>

int main(){
    int i,j,n;
    
   //follow tech crash course in google for better petern
    printf("Enter your number : ");
    scanf("%d",&n);

    for ( i =1; i <=n; i++)
    {
       for (j =1; j<=i ;j++)
       {
         printf("%d ",i);
       }

       printf("\n");
    }


    
    
}