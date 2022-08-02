#include<stdio.h>

int main(){
int my_amount,ticket_price=200;

printf("enter your amount : ");
scanf("%d",&my_amount);

if (ticket_price > my_amount)
{
  printf("you can't go in,you don't have enough money ");

}

if (ticket_price <  my_amount)
{
  printf("you can go in,you have enough money ");

}

}