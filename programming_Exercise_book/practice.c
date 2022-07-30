#include<stdio.h>

void main(){
  int i,sum=0,temp,num,remainder;

  printf("enter your number : ");
  scanf("%d",&num);



  while (num != 0)
  {
    remainder=  num %10;
    sum = sum +remainder;

    num = num /10;
  }
  printf("%d",sum);
  
}