#include<stdio.h>

void main(){
     int num={2,55,22,25,74,88}
     
  
  int value,i,postion;

  printf("enter the number which of you want search : ");
  scanf("%d",&value);

  for ( i = 0; i <value; i++)
  {
   if (value == num[i])
   {
    postion=i+1;
   }
   
  }

  printf("pritn your name  %d\n",postion);
  
  

  
  
    

    
    
}