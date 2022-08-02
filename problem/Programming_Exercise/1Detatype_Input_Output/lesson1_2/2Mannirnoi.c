#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{

        float x ,rezult;
        printf("enter  your x value : ");
        scanf("%f",&x);
    
//1.....       x2 - 5x + 12
    rezult = pow(x,2)- pow(x,5)+12;
    printf("\n x = %.2f",rezult);


//2.....  e^5x -1
    rezult = exp((x*5)-1);
    printf("\n e = %.2f",rezult);


//3.....  sin(x/2)
    rezult = sin(x/2);
    printf("\n sin = %.2f",rezult);


//4.....  cos2(2x-1)
    rezult = pow(cos((2*x)-1),2);
    printf("\n cos2 = %.2f",rezult);    


//4..... log2 x^3+3x-1
    rezult = log(pow(x, 3)) / log(2) + (3 * x) - 1;
    printf("\n log2 = %.2f",rezult);     




    return 0;
}
