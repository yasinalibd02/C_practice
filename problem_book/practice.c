#include<stdio.h>

int main(){
  int s=0;
  char c;


  printf("enter your number: ");
 while (scanf("%c",&c) && c!='\n')
 {
   s += c-'0';
 }
 if (s%3 ==0)
 {
  printf("yes\n");
 }

 else{
  printf("no\n");
 }
 
 




  


  
}