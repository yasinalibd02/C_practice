#include<stdio.h>

void main(){
    int total_apple,avg_of_apple,Weight_kg;

printf("enter your apple number : ");
scanf("%d",&total_apple);

printf("enter your avg of apple : ");
scanf("%d",&avg_of_apple);

Weight_kg=total_apple *avg_of_apple /1000;

printf("your total Weight in KG = %d\n",Weight_kg);
}