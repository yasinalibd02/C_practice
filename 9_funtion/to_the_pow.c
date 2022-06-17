#include <stdio.h>
#include <math.h>



// int main(){
//     double base,exponent;
//     printf("enter your base : ");
//     scanf("%lf",&base);

//     printf("enter your exponent : ");
//     scanf("%lf",&exponent);

//   double  rezult =pow(base,exponent);
//     printf("The Squre is = %.1lf\n",rezult);
// }


void ToTHePower(double base,double exponent){
  double i,rezult=1;
     for ( i = 0; i < exponent; i++)
  {
    rezult=rezult*base;// rezult 1 *base 2 =2,
                       //rezult 2  *base 2 =4,
  }
  
    printf("The Squre is = %.1lf\n",rezult);
}

int main(){
    double base,exponent;
    printf("enter your base : ");
    scanf("%lf",&base);

    printf("enter your exponent : ");
    scanf("%lf",&exponent);
    

    ToTHePower(base,exponent);


 
}