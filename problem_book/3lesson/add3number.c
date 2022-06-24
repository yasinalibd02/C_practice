#include<stdio.h>

int main(){
    int sum=0,i,n,r,tem;

    printf("enter your number : ");
    scanf("%d",&n);

    tem=n;

   while (tem != 0)
   {
        r=tem%10;
        sum=sum+r;
        tem=tem/10;
   }

   printf("%d\n",sum);
   
    

}