#include<stdio.h>

void main(){
    char C;

    printf("enter your charecter : ");
    scanf("%c",&C);

    if (C <a && C>z)
    {
       printf("small english letter");
    }


//   else  if (C <A && C >Z)
//     {
//        printf("capital english letter");
//     }
 else if (C >0 && C <101)
 {
    printf("math number ",(int)C);
 }
    
    
}