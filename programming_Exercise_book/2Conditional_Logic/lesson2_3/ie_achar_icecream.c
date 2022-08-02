#include<stdio.h>

int main(){
  int amount,acharwala;

    printf("enter your amount: ");
    scanf("%d",&amount);

    printf("enter acharwala come : ");
    scanf("%d",&acharwala);
  

    if (amount >= 10 && acharwala)
    {
        printf("achar"); 
    } 

    else if (amount >= 10 && ! acharwala)
    {
      printf("icecreame");
    }
    

    else{
        printf("not to eat");
    }
    

}