#include<stdio.h>

int main(){
    int i,num,even = 0, odd=0;

    printf("enter your number = ");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        if (i%2==0)
        {
           even =even +i;
        }
        else
        odd = odd +i;
        
    }

    printf("your sum is %d\n  " , odd - even);
    
}