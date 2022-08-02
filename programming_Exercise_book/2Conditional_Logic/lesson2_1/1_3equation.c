#include<stdio.h>
int main(){
    int a,b,or_conditon, and_condition,or_not_condition,not_and_not_condition;

    printf("enter your two bool input : ");
    scanf("%d%d",&a,&b);

     or_conditon = a || b;
     and_condition = a && b;
     or_not_condition = !( a || b);
     not_and_not_condition = !( a && !b);
    

     printf("         OR           = %d\n",or_conditon);
     printf("        AND           = %d\n",and_condition);
     printf("     OR_NOT           = %d\n",or_not_condition);
     printf("NOT_AND_NOT           = %d\n",not_and_not_condition);

}