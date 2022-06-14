#include<stdio.h>

int main(){
    int i,j,numberOfRows,numberOfCols,a[10][10],b[10][10],c[10][10];

    printf("enter your Rows and Cols : ");
    scanf("%d",&numberOfRows,&numberOfCols);

    for ( i = 0; i <numberOfRows; i++)
    {
        for ( j = 0; i < numberOfCols; i++)
        {
            printf("\n enter numbers : ");
            scanf("%d",&i,&j);
        }
        printf("\n");
        
    }
    
}