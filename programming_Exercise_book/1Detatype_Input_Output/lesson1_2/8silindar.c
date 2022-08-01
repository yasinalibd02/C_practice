//surfaceArea = (float) (2 * Math.PI * radius * (height + radius));

#include<stdio.h>

void main(){
    float radius,height,surfacearea;

    scanf("%f %f",&radius,&height);

    surfacearea= 2* 3.14* radius *(height +radius);

    printf("%.2f",surfacearea);
}