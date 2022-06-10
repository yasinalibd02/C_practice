#include<stdio.h>

int main(){
    int digit;

    printf(" Enter your Digit : ");
    scanf("%d",&digit);

    switch (digit)
    {
    case 0:
        printf(" zero",digit);
        break;

        case 1:
        printf(" one",digit);
        break;

        case 2:
        printf(" two",digit);
        break;

        case 3:
        printf(" three",digit);
        break;

        case 4:
        printf(" four",digit);
        break;

        case 5:
        printf(" five",digit);
        break;

        case 6:
        printf(" six",digit);
        break;

        case 7:
        printf(" seven",digit);
        break;

        case 8:
        printf(" eight",digit);
        break;

        case 9:
        printf(" nine",digit);
        break;
    
    default:
     printf(" not a digit");
        break;
    }
}