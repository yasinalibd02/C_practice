#include<stdio.h>

int main(){

  int i,n,count=0;

  printf("enter your n : ");
  scanf("%d",&n);

  for ( i = 2; i <=n; i++)
  {
    if (n % 2==0)
    {
     count++;
     break;
    }

    
    
  }

  
    if (count == 0)
    {
    printf("prime");
    }

  else
  {
    printf("not a prime");
  }
  
}