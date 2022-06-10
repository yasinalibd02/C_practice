#include<stdio.h>

int main(){

   int choise;

    float number,Tempareture;

    printf("Temparator Change \n");
    printf(" 1. Farenhite to Celcius\n");
    printf(" 2. Celcius to Farenhite\n");

     printf("Enter your choise : ");
    scanf("%d",&choise);

    switch (choise)
    {
    case 1:
        printf("ENter your farenhite number : ");
        scanf("%f",&number);
        Tempareture=(number-32)/1.8;
        printf(" your Celcius number : %f\n",Tempareture);
        break;

    case 2:
        printf("ENter your Celcius number : ");
        scanf("%f",&number);
        Tempareture=(1.8*number)+32;
        printf(" your Farenhite number :  %f\n",Tempareture);
        break;    
    
    default:
    printf("Not Valid Number");
        break;
    }
   


}