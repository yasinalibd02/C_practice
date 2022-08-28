#include<stdio.h>

void main(){
    int n;

    printf("enter your number : ");
    scanf("%d",&n);

  while (n !=0)
  {
   if (n%6)
   {
  printf("%d",n);
   }
   else if (n==0)
   {
     break;
     printf("not a valid number : ");
   }
   
   
  }

  printf("remainder %d",n);
  
    
}