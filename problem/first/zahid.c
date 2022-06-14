#include <stdio.h>

int main()
{
    int floor, feet = 1000, first10, second10, third, totalBricks;

    printf("enter number of your building : ");
    scanf("%d",&floor);

    if (floor <= 10)
    {
        first10 = floor * feet * 10;
        printf("%d\n",first10);
    }

    else if (floor >= 11 && floor <= 20)
    {
        second10 = floor * feet * 12;
          printf("%d\n",second10);
    }

    else if (floor >= 21)
    {
        third = floor * feet * 15;
          printf("%d\n",third);
    }


}