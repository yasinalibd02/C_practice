#include<stdio.h>
int main(){
    int marks;

    printf("enter your number : ");
    scanf("%d",&marks);

    if (marks >=80 && 100 >= marks)
    {
       printf("A+");
    }

    //A
   else if (marks >=70 && 79 >= marks)
    {
       printf("A");
    }

    //A-
        else if (marks >=60 && 69 >= marks)
    {
       printf("A-");
    }

    //B
        else if (marks >=50 && 59 >= marks)
    {
       printf("B");
    }
    //C
        else if (marks >=40 && 49 >= marks)
    {
       printf("C");
    }
      //D
        else if (marks >=33 && 39 >= marks)
    {
       printf("D");
    }

    //F
        else if (marks >=00 && 32 >= marks)
    {
       printf("F");
    }
    
    


}