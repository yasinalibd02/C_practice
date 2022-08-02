#include<stdio.h>
#include<math.h>


void main(){
    float a,area;
    printf("enter your number : ");
    scanf("%f",&a);

    area = pow(a,3);
    float volume = (6*pow(a,2));
    printf("\n%.2f",area);
    printf("\n%.2f",volume);
}