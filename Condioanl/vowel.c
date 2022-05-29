#include<stdio.h>

void main(){
     char letter;

     printf("Enter any letter : ");
     scanf("%c",&letter);

     if( letter == 'a' || letter == 'e' || letter =='i' || letter =='o'|| letter =='u' || letter ==
         'A' || letter == 'E' || letter =='I' || letter =='O'|| letter =='U')
     {
         printf("vowel");
     }
        
       else {
           printf("consonat");
       }
   


}