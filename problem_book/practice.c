#include<stdio.h>

int main(){
    int a,b,c,condition;

    printf("enter your number : ");
    scanf("%d %d %d",&a,&b,&c);

    condition=a && (b||c);
    printf("man nirroi %d\n",condition);
    
}