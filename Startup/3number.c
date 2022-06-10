#include<stdio.h>
#include<math.h>

//input a total apple and average in centimerters output in miters..... 

int main(){
    float apple,avg,weight;

    printf("Enter your apple and avg : ");
    scanf("%f %f",&apple ,&avg);

    weight=apple*avg /1000;
    printf("Weight is = %2.f\n",weight);
  
}