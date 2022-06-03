#include <stdio.h>

int main()
{

  int number1, number2, n1, n2, rem, lcm, gcd;

  printf("Enter two number : ");
  scanf("%d %d", &number1, &number2);

  n1 = number1;
  n2 = number2;

  while (n2 != 0)
  {
    rem = n1 % n2;
    n1 = n2;
    n2 = rem;
  }

  gcd = n1;
  lcm = (n1 * n2) / gcd;

  printf(" GCD = %d\n", gcd);
  printf(" LCM = %d", lcm);
}