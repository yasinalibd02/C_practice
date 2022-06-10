#include<stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("enter your marks : ");
    scanf("%d",&marks);

     if (marks <= 100 && marks >=80)
     {
        printf("A+");
     }

     else if (marks <=79 && marks >=70)
     {
        printf("A");
     }
      else if (marks <=69 && marks >=60)
     {
        printf("A-");
     }
      else if (marks <=59 && marks >=50)
     {
        printf("B");
     }
       else if (marks <=49 && marks >=40)
     {
        printf("C");
     }
       else if (marks <=39 && marks >=33)
     {
        printf("D");
     }
     else
     {
        printf("fail");
     }
     
     
     


    return 0;
}
