#include<stdio.h>

int main(){
    int its_rain,france_goal,spain_goal,france_next_round;

    printf("France Goal: ");
    scanf("%d",&france_goal);



    printf("Spain Goal : "); 
    scanf("%d",&spain_goal);


    printf("It's Rain : ");
    scanf("%d",&its_rain);




    france_next_round =  france_goal > spain_goal  && !its_rain;
    
    printf("France go to next round = %d\n ",france_next_round);




}