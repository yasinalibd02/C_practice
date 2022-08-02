#include <stdio.h>

double Squre(double b, double h)
{
    return 0.5 * b * h;
}

int main()
{
    double base, height;
    printf("enter your number : ");
    scanf("%lf  %lf", &base, &height);

    int rezult = Squre(base, height);
    printf("The Squre is = %d\n", rezult);
}