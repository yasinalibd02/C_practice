#include<stdio.h>

int main(){

    int num1,num2,num3;

    printf("Enter your 3 number : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        printf("Large number is num1  ",num1);
    }

    else if(num2 >num1 && num2 >num3){
        printf("Large number is num2 ",num2);
    }
    else if(num3 >num1 && num3 >num2){
        printf("Large number is num3 ",num3);
    }

    else {
        printf("not a number");
    }
}