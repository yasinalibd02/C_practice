#include<stdio.h>

void main(){
     int num[100],sum=0,i,n;
     
   
    printf("How many numbers : ");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        scanf("%d",&num[i]);
    }
    


    for ( i =0; i <n; i++)
    {
        sum =sum + num[i];
    }

    printf(" : %d\n", sum);
    printf(" : %.2f\n", (float)sum/n);
    
    

    

    
    
}