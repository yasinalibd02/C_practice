#include<stdio.h>

int main(){
    int num1,num2,num3;

    printf("enter your 3 number : ");
    scanf("%d %d %d",&num1,&num2,&num3);


    if (num1 > num2 && num1 > num3)
    {
       printf("biggest number is : num1 = %d\n",num1);
    }
     else if (num2 > num1 && num2 > num3)
    {
       printf("biggest number is : num2 = %d\n",num2);
    }

     else if (num3 > num1 && num3 > num2)
    {
       printf("biggest number is : num3 = %d\n",num3);
    }

    else{
        printf("not a number ");
    }
}