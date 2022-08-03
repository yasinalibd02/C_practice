#include<stdio.h>
void main(){
    int sibling1,sibling2,sibling3;

    printf("enter 3 sibling do : ");
    scanf("%d %d %d",&sibling1,&sibling2,&sibling3);

    if (sibling1 && sibling2 && sibling2)
    {
       printf("pizza");
    }

    else if ((sibling1 && sibling2 )|| (sibling1 && sibling3) || (sibling2 && sibling3))
    {
        printf("chines");
    }

    else if ( sibling1 || sibling2 || sibling3)
    {
        printf("icecream");
    }

    else
    {
        printf("chocolate");
    }
    

    
    


    
}