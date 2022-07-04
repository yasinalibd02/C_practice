#include<stdio.h>

int main(){
    int open_school,competiton,early_wakeup;

    printf("Open School : ");
    scanf("%d",&open_school);
    printf("Competition : ");
    scanf("%d",&competiton);


    early_wakeup = open_school || competiton;
    
    printf("%d",early_wakeup);




}