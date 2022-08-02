#include<stdio.h>

int main(){
    int porbot,pahar,tilar,shoe;

    printf("enter three brothers size : ");
    scanf("%d %d %d",&porbot,&pahar,&tilar);

     printf("enter shoe size : ");
    scanf("%d",&shoe);

    if (porbot == shoe)
    {
     printf("porbot");
    }

    
    else if (pahar == shoe)
    {
     printf("pahar");
    }

else if (tilar == shoe)
    {
     printf("tilar");
    }

    else{
        printf("sell in online market place");
    }
    

}