#include<stdio.h>
int main(){
    int a,b,c,d,or_condition;

    printf("enter your two bool input : ");
    scanf("%d%d%d",&a,&b,&c,&d);

    // or_condition=a || b || c;
    or_condition=(a || b) && ( c|| d);
    or_condition=a || (b && (!));


 
    

     printf("OR = %d\n",or_condition);
 

}