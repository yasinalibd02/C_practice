#include<stdio.h>
int main(){
    float length,width,rectangle;

    printf("enter your length : ");
    scanf("%f",&length);

    printf("enter your width : ");
    scanf("%f",&width);

    rectangle=length * width;

    printf("this is your Squre = %.2f\n",rectangle);
}