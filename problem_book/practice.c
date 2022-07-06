#include<stdio.h>

int main(){
int man1,man2,man3,man4,man5,man6,hundred=0;

printf("enter your amount : ");
scanf("%d%d%d%d%d%d",&man1,&man2,&man3,&man4,&man5,&man6);


if (man1 >=100)
{
  hundred=hundred+1;
}

if (man2 >=100)
{
  hundred=hundred+1;
}

if (man3 >=100)
{
  hundred=hundred+1;
}

if (man4 >=100)
{
  hundred=hundred+2;
}

if (man5 >=100)
{
  hundred=hundred+1;
}

if (man6 >=100)
{
  hundred=hundred+1;
}


printf("hundred = %d",hundred);




}