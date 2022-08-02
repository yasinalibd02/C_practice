#include<stdio.h>

int main(){
    double  cow,goat1,goat2,goat3,goat4,goat5;

    printf("enter cow amount : ");
    scanf("%lf",&cow);

    printf("enter 5 goat amount: ");
    scanf("%lf %lf %lf %lf %lf",&goat1,&goat2,&goat3,&goat4,&goat5);
  

    if ( goat1 +goat2+goat3+goat4+goat5 / 5 >= cow)
    {
        printf("aziz is win");
    }

    else{
        printf("aziz is loss");
    }
    

}