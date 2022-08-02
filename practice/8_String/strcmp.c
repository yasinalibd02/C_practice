#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "programming";
    char b[20] = "programming";

   int d= strcmp(a, b);

   if (d==0)
   {
  printf("it's equal");

   }
   else
   {
    printf("not equal");

   }
   
   


    return 0;
}