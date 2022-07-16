#include<stdio.h>

int main(){
int Celcius;

printf("enter your Celcius Temparature : ");
scanf("%d",&Celcius);


if (Celcius >= 0 && Celcius <= 100)
{
  printf("lequade");
 
}

else if (Celcius < 0)
{
  printf("ice");

}


else 
{
  printf("air");
}







}