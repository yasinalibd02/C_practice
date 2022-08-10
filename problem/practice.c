#include <math.h>
#include <stdio.h>

int main() {

 int i,sum=0,n;

 printf("enter your number : ");
 scanf("%d",&n);

 while (n>0)
 {
   i= n%10;
   sum=sum*10+i;
   n/=10;
 }

 printf("%d",sum);
 

  
  
   
}