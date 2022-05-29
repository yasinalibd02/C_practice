#include<stdio.h>

int main(){

    int cut_grass,catch_fish,buy_saree;

    printf(" enter your cut_grass : ");
    scanf("%d",&cut_grass);

    printf(" enter your cath_fish : ");
    scanf("%d",&catch_fish);

    buy_saree= cut_grass && catch_fish;

    printf             you can buy saree : %d\n",buy_saree);


}