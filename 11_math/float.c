#include<stdio.h>
#include<math.h>
#include <stdlib.h>  
void main(){


    double x=10.5;


               //round,trunc,ceil,floor used must to be an float float float 
//    double rezult = round(x);           //after . under 5 to print same number but upper 5-9 print +1

//    double rezult = trunc(x);           //it's is just print an integer number 

//    double rezult = ceil(x);             //after . it's print upper number +1

   double rezult = floor(x);               //after . it's print same


   printf("x =%lf , log =%lf",x,rezult);
}