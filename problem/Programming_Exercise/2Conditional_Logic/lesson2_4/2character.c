#include<stdio.h>
int main(){

    char charecter;

    printf("enter your character : ");
    scanf("%c",&charecter);

    if ( charecter >= 67 && 90 >= charecter)
    {
      printf("Uppercase");
    }

  else  if ( charecter >= 97 && 122>= charecter)
    {
      printf("Lowercase");
    }

     else  if ( charecter >= 48 && 57 >= charecter)
    {
      printf("Digit");
    }

    else
    {
        printf("Special Charecter");
    }
    
    
}