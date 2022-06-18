#include <stdio.h>

struct Product
{
    int amount;
    float pice;
};

int main()
{

    struct Product product1;

    printf("enter your amount : ");
    scanf("%d", &product1.amount);

    product1.pice = product1.amount / 4;

    printf("product amount =  %d\n", product1.amount);
    printf("product pice   = %.2f\n", product1.pice);
}