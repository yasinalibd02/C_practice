#include<stdio.h>

int main()
{
    int y,x;

    char command;

    printf("your now position  (x,y)");


    printf("\nenter your command : ");
    scanf("%c",&command);

    if (command == 'u')
    {
       y++;
    }
    else if (command == 'd')
    {
       y--;
    }
     else if (command == 'l')
    {
       x++;
    }
     else if (command == 'r')
    {
       x--;
    }
    else
    {
        printf("invalid command!");
    }

    printf(" your new position : %d %d\n",x,y);
    
    
    
    return 0;
}
