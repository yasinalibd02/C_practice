#include<stdio.h>

int main(){

    int sum=0, a=1, num;

    printf("Enter your number :");
    scanf("%d",&num);
    printf("1 + 3 + 5 ..... + %d",num);

    while (a <= num)
    {
      sum = sum + a;
      a = a + 2;
    }

    printf("  =  %d\n",sum);
    
}