#include<stdio.h>

void main(){
     int num={2,55,22,25,74,88}
     
  
  int value,i;
  int postiton = -1,

  for ( i = 1; i <6; i++)
  {
    if (value == num[i])
    {
       postiton = i+1;
       break;
    }
    
  }
  if (postiton ==-1)
  {
     printf("item is not found");
  }
  else{
      printf("The value is found %d\n",postiton);
  }
  
  
    

    
    
}