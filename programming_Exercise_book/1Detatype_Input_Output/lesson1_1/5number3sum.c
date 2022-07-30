#include<stdio.h>

void main(){
    // printf("enter your nubmer : ");//book problem 8
    // scanf("%d",&num);
    // printf("%o",num);


  int i,num,tem,r,sum=0;

  printf("enter your digit number : ");
  scanf("%d",&num);
  tem=num;

  while (tem != 0)
  {
   r =  tem % 10;
   sum = sum + r;
   tem =tem /10;
  }

  printf("your sum of digit = %d\n",sum);
  
     
}