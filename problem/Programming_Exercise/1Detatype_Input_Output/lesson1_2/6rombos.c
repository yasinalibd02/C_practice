#include<stdio.h>

void main(){
    float height,land,area;

    printf("enter your height : ");
    scanf("%f",&height);

     printf("enter your land : ");
    scanf("%f",&land);

  area = height * land / 2;
  printf("Area is = %.2f\n",area);

}