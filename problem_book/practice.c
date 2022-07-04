#include<stdio.h>

int main(){
  float meter,feet,inch;
  

  printf("enter your meter : ");
  scanf("%f",&meter);

  feet = meter *3.28084;
  inch=(feet - (int) feet)*12;

  printf(" feet %d inch %.2f\n",(int)feet , inch);                                                              
}