#include<stdio.h>


int main(){

  int i,num;

  printf("enter your number : ");
  scanf("%d",&num);

  for ( i = 1; i <=10; i++)
  {
    printf("%d * %d = %d\n",num,i,num*i);
  }
  
   

    
}