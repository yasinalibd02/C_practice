#include <stdio.h>
int main() {

  int i, n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  int fibo,first=0,second= 1,count=0;

    while (count <n)
    {
      if (count <=1)
      {
        fibo=count;
      }

      else
      {
        fibo=first+second;
        first=second;
        second=fibo;
      }

      printf(" %d,",fibo);
      count++;
      
      
    }
    




  



}
