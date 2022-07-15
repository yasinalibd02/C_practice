#include<stdio.h>

int main(){
int  sit,passengers,friend=5;

printf("enter your sit number : ");
scanf("%d",&sit);


printf("enter your passenger number: ");
scanf("%d",&passengers);


if (sit - passengers >=  friend )
{
  printf("we  are enough sit");

}

if (sit - passengers <  friend )
{ 
  printf("we  are not enough sit");
}


}