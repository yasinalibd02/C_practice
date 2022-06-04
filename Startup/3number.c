#include<stdio.h>
#include<math.h>

int main(){
    float apple,avg,weight;

    printf("enter your three apple & avg : ");
    scanf("%f %lf",&apple ,&avg);

   weight=apple * avg *1000;
   
    printf(" area = %.2f\n",weight); 
  
}