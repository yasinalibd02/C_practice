#include <stdio.h>

int main()
{
    int tem, r, num, sum = 0;

    printf("Enter your numbers : ");
    scanf("%d", &num);
    tem = num;

    while (tem != 0)
    {
        r = tem % 10;
        sum = sum + r*r*r;
        tem = tem / 10;
    }

    if (num == sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not a Armstrong");
    }
}