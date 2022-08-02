#include<stdio.h>

int main(){

    int fish,food;

    printf("enter your fish number : ");
    scanf("%d",&fish);

    printf("enter your food number : ");
    scanf("%d",&food);

    if (fish * 3 < food)
    {
        printf("enough food");
    }

    if (fish * 3 == food)
    {
        printf("enough food");
    }

    if (fish * 3 > food)
    {
        printf("not enough food");
    }
    
}