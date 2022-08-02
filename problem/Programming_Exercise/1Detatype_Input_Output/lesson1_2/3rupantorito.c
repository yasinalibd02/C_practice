#include<stdio.h>
int main(int argc, char const *argv[])
{
//a. cm to inch 
     float cm = 12 ;
     float inch = 12 *0.393701;
     printf("\n cm to inch =%f",inch);


// b. Inch to cm
    inch = 4.44;
    cm = inch / 0.3937;
    printf("\n inch to cm =%f",cm);
    

//c. Foot to Meter
    float foot =  5;
    float meter= foot * 0.3048;
    printf("\n foot to meter =%f",meter);    

//d. meter to foot 
          meter = 3 ;
          foot = meter/ 3.2808;
          printf("\n meter to foot =%f",foot);


// e. pound to kg
    float pound = 44;
    float kg = pound * 2.20462 ;
    printf("\n pound to kg =%f",kg);
    

//f. kg to pound
          kg =  4;
          pound= kg / 0.3048;
          printf("\n kg to pound =%f",pound);    
    return 0;
}
