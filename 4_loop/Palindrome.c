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
        sum = sum * 10 + r;
        tem = tem / 10;
    }

    if (num == sum)
    {
       printf("Palindrome");
    }

    else{
        printf("Not A Palindrome");
    }
    
}