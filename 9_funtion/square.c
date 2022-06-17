#include<stdio.h>

int Squre(int p)
{
    return p*p;
}

int main(){
    int num;
    printf("enter your number : ");
    scanf("%d",&num);

    int rezult = Squre(num);
    printf("The Squre is %d\n",rezult);
}