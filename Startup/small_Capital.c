#include<stdio.h>

void main(){
    
    char letter;

    printf("Enter any letter : ");
    scanf("%c",&letter);
if (letter >='a' && letter <='z')
{
 printf("small letter");
}

else if (letter >='A' && letter <='Z')
{
 printf("Capital letter");
}
else{
    printf("not a letter");
}
    
}