#include<stdio.h>

int main(){
  //*****************     copy the element of all in array to array  
    int array1[23],array2[10],i,n;

    printf("how many number : ");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
      scanf("%d",&array1[i]);
    }
   

   printf("array1 : ");
    for ( i = 0; i <n; i++)
    {
     printf("%d ",array1[i]);
    }
    
    

    for ( i = 0; i <n; i++)
    {
      array2[i]=array1[i];
    }
   printf("\ncopy to array1 to array2 : ");
    for ( i = 0; i <n; i++)
    {
      printf("%d ",array2[i]);
    }
    
    

    
    
}