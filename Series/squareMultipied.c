#include<stdio.h>

int main(){
    int i,sum=1,n;
    printf("enter your number ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        sum =sum * i*i;
        // sum =sum * i*i*i; //This is qeube multipied

    }

    printf("sum is = %d\n",sum);
    
}