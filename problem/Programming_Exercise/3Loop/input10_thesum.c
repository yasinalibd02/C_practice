#include<stdio.h>

int main()
{
    int i,sum=0,n,t,r;

    printf("enter your number : ");
    scanf("%d",&n);

    t=n;

    while (t!=0)
    {
        r   = t % 10;
        sum = sum + r;
         t  = t / 10;

    }

    printf("%d",sum);
    
    return 0;
}
