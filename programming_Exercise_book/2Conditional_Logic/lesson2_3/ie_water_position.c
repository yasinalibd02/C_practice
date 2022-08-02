#include<stdio.h>

int main(){
int Celcius;

printf("enter your Celcius Temparature : ");
scanf("%d",&Celcius);


if (Celcius < 0)
{
  printf("Ice");
}
else if (Celcius >=0 && Celcius <=100)
{
 printf("Lequde");
}

else
{
  printf("air");
}


}