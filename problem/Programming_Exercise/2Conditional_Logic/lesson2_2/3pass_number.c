#include<stdio.h>

int main(){
int pass,number;

printf("enter your pass number : ");
scanf("%d",&pass);

printf("enter your number: ");
scanf("%d",&number);

if (pass > number)
{
  printf("you fail ");

}

if (pass <  number)
{
  printf("you passed ");

}

}