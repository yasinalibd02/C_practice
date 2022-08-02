#include<stdio.h>
#include<math.h>
int main(){
     
     double number,squre;
  
   
     printf("enter your number : ");
     scanf("%lf",&number);
      squre = sqrt(number);

     if ((squre * squre) == number)
     {
        printf("a perfect squre");
     }

      if ((squre * squre ) != number)
     {
        printf("Not a perfect squre");
     }
     
    
    }