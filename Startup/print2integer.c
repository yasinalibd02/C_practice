#include <stdio.h>

int main()
{
    char tem, r, ch, sum = 0;

    

    printf("Enter your numbers : ");
    scanf("%c ", &ch);
     tem = ch;

   

    while (tem != 0)
    {
        r = tem % 10;
        sum = sum * 10 + r;
        tem = tem / 10;
    }

    if (ch == sum)
    {
       printf("Palindrome");
    }

    else{
        printf("Not A Palindrome");
    }
    
}