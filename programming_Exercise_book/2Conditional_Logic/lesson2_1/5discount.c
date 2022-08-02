#include<stdio.h>

int main(){
    int mother,father,brother,me,discount;

    printf("Mother Years : ");
    scanf("%d",&mother);



    printf("Father Years : "); 
    scanf("%d",&father);


    printf("Brother Years: ");
    scanf("%d",&brother);

    printf("My Years: ");
    scanf("%d",&me);


    discount = mother < 12 ||  mother > 72 || father < 12  || father > 72 || brother < 12 ||  brother > 72 || 
               me < 12 || me > 72;

    
    printf("Discount = %d\n ",discount);




}