#include<stdio.h>

int main(){
    int i,n,a,b,c,d;

    printf("Enter your number :");
    scanf("%d",&n);

    a=1;
    b=1;
    c=1;

    printf("%d %d %d",a,b,c);

    for ( i = 1; i <=n-3; i++)
    {
       d=a+b+c;
       printf("%d\n",d);
       a=b;
       b=c;
       c=d;
    }
     
    

    
}