#include<stdio.h>

void main(){
     int num[100],i,sum,n;
     
   
    printf("How many numbers : ");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        scanf("%d",&num[i]);
    }
    
     sum=num[0];

    for ( i =1; i <n; i++)
    {
        if (sum<num[i])
          sum=num[i];
        
        
    }

    printf("The MAX number is : %d\n", sum);
   
    
    

    

    
    
}