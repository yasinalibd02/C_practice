#include <stdio.h>

int main()
{

    double num1, num2;

    char choise;

    printf("enter two number\n");
    scanf("%lf ,%lf", &num1, &num2);

    printf("Enter your maths (+, - , / , * ) : ");
    scanf("%c",&choise);

    switch (choise)
    {
    case '+':
    {
        printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);

        break;
    }
    case '-':
    {
        printf("%lf  - %lf = %lf\n", num1, num2, num1 - num2);
        break;
    }
    case '*':
        printf("%lf  *  %lf = %lf\n", num1, num2, num1 * num2);
        break;

    case '/':
     {   printf("%lf  /  %lf = %lf\n", num1, num2, num1 / num2);
        break;
     }
    default:
      {  printf("Not Valid Number");
        break;
    }
}