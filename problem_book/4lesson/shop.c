#include<stdio.h>

int main(){
    int person1_taka,person2_taka,person3_taka,eat_biriyani;

    printf("Taka person 1 : ");
    scanf("%d",&person1_taka);

    printf("Taka person 2 : ");
    scanf("%d",&person2_taka);

    printf("Taka person 3 : ");
    scanf("%d",&person3_taka);


    eat_biriyani = person1_taka + person2_taka + person3_taka >= 375 ;
    
    printf("Eat Biriyani = %d\n ",eat_biriyani);




}