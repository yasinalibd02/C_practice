#include<stdio.h>

int main(){
int Celcius;

printf("enter your Celcius Temparature : ");
scanf("%d",&Celcius);


if (Celcius >= 0 || Celcius <= 100)
{
  printf("lequade");
 
}

if (Celcius < 0)
{
  printf("ice");

}


if (Celcius > 100)
{
  printf("air");
}







}