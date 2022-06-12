#include<stdio.h>

int main(){

    int i,Index[10],number,max;

    printf("how many number : ");
    scanf("%d",&number);

    for (i = 0; i <number; i++)
    {
      scanf("%d",&Index[i]);
    }

   max = Index[0];

    for ( i = 1; i <number; i++)
    {
        if (max < Index[i])//just change the left arrow to right arrow it work to minimum number 
             max=Index[i];
        
        
}

printf("Max Number IS : %d\n",max);
    
    
}