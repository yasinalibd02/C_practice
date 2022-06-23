#include<stdio.h>
#include<math.h>

int main(){
double inch,feet,meter;

printf("enter meter : ");
scanf("%lf",&meter);

feet =meter *3.28084;
inch=(feet -(int ) feet)*12;

printf("feet %d , inch %lf\n",(int) feet , inch);



}