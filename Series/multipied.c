#include <stdio.h>

int main()
{
    int sum = 0, a = 1, b = 2, i, num1, num2;

    printf("Enter your number : ");
    scanf("%d %d", &num1, &num2);
    printf(" 1*2 + 2*3 + 3*4 ..... + %d*%d", num1, num2);

    while (a <= num1 && b <= num2)
    {
        sum = sum + a * b;
        b = b + 1;
        a = a + 1;
    }

    printf(" = %d\n", sum);
}