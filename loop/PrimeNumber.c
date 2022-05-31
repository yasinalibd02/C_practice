
#include <stdio.h>
int main()
{

    int num;
    int count = 0;

    printf("Enter any number : ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime");
    }
}