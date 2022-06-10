#include <stdio.h>

int main()
{
    char ch;

    printf(" Enter your Letter : ");
    scanf("%c", &ch);

    switch (ch)

    {
    case 'a':
    

        printf("vowel\n");
        break;
      

    
    case 'e':

        printf("vowel\n");
        break;

    default:
        printf("consonant");
    }
}