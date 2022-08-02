#include<stdio.h>

int main(){
    int chada,spot,every_man_spend;

    printf("enter your chada : ");
    scanf("%d",&chada);

    printf("enter your spot : ");
    scanf("%d",&spot);

    printf("enter your every : ");
    scanf("%d",&every_man_spend);

    if (6*chada >= spot + every_man_spend * 6)
    {
        printf("we can go ");
    }

     if (6*chada < spot + every_man_spend * 6)
    {
        printf("we can't go ");
    }
    

}