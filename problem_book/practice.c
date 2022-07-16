#include <stdio.h>

int main() {

  int cow1,cow2,cow3 ,cow4,cow5,cow6;

  printf("Enter first person amount: ");
  scanf("%d %d %d",&cow1,&cow2,&cow3);

  printf("Enter second person amount: ");
  scanf("%d %d %d",&cow4,&cow5,&cow6);

  if (cow1+cow2+cow3  >cow4+cow5+cow6)
  {
    printf("first person amount is more");
  }

  else{
  printf("second person amount is more");
  }
  

  
}