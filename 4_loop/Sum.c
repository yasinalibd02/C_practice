#include <stdio.h>

int main()
{
    int tem, r, num, sum = 0;

    

    printf("Enter your numbers : ");
    scanf("%d ", &num);
     tem = num;

   

    while (tem != 0)
    {
       r =tem % 10;
       sum =sum + r;
       tem =tem /10;
    }
    

    printf("The sum of = %d\n", sum);
}