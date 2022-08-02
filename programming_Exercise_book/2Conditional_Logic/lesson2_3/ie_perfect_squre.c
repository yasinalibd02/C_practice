#include<stdio.h>
#include<math.h>

void main(){
    int number,a;

    printf("enter your number :");
    scanf("%d",&number);

    a=sqrt(number);
  
  if (number-(a*a) ==0)
  {
    printf("perfect squre");
  }

  else{
       printf("Not a squre number");
  }
  
    
}