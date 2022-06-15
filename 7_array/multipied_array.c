#include<stdio.h>

int main(){
    int a[100][100],b[100][100],c[100][100],i,j,k,c1,r1,c2,r2;

    printf("enter first matrix row & col : ");
    scanf("%d %d",&c1 , &r1);

    printf("enter second matrix row & col : ");
    scanf("%d %d",&c2 ,&r2);

//conditon check
    while (c1 != r2)
    {
        printf("error !! first matrix c and second matrix row both are not same : ");

        printf("\n enter first matrix row & col : ");
        scanf("%d %d",&c1 , &r1);

        printf("\n enter first matrix row & col : ");
        scanf("%d %d",&c2 ,&r2);


    }
//input first matrix

    printf("\n enter elements \n");
    for ( i = 0; i <r1; i++)
    {    
       
        for ( j = 0; j<c1; i++)
        {
            printf(" first =[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }


 //input second matrix
 printf("\n enter elements \n");
     for ( i = 0; i <r2; i++)
    { 
        
        for ( j = 0; j<c2; i++)
        {
             printf(" second [%d] [%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }

   //print first matrix
     printf("\n \n first matrix : ");
        for ( i = 0; i <r1; i++)
    {
         printf("\t");
        for ( j = 0; j<c1; i++)
        {
            printf("%d",&a[i][j]);
        }
        
    }


     // print second matrix
     printf("\n \n first matrix : ");
        for ( i = 0; i <r2; i++)
    {
         printf("\t");
        for ( j = 0; j<c2; i++)
        {
            printf("%d",&b[i][j]);
        }
        
    }


    
    
}