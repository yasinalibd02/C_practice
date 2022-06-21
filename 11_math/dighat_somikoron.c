#include<stdio.h>
#include<math.h>
#include <stdlib.h>  
void main(){
    double a,b,c,x,x2,d;

    scanf(" %lf %lf %lf",&a,&b,&c);

    d=sqrt(b*b-4*a*c);

    x  = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf(" x = %lf , x2 = %lf\n",x,x2);


}