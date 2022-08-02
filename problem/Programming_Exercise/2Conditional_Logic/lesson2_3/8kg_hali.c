#include<stdio.h>

int main(){
    int x,y,m;
    
    printf("enter your x,y,m : ");
    scanf("%d %d %d",&x,&y,&m);
    
    
    
    
    
   int   rahmat_1gm_price = x / (4 * m);
   int   bijoy_1gm_price = y / 1000;

   if (rahmat_1gm_price >  bijoy_1gm_price)
   {
    printf("buying rahmat will be benifit");
   }

   else
   {
    printf("buying bijoy will be benifit");
   }
   
   
}