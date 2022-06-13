#include<stdio.h>

int main(){

   int i,n,sum=0,r;

   printf("enter your number : ");
   scanf("%d",&n);
  int tem=n;

   while ( tem != 0)
   {
      r=tem%10;
      sum=sum+r;
      tem=tem/10;
   }


printf("%d",sum);

   
   



    
    
}