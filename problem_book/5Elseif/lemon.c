#include<stdio.h>

void main(){
    int x,y,m;

   printf("enter input x,y,z : ");
   scanf("%d %d %d",&x,&y,&m);

  int  rohomot_1kg_price =  x/(4*m);
  int bijoy_1kg_price  =  y/1000;

   if (rohomot_1kg_price > bijoy_1kg_price)
   {
    printf("buying from bijoy will be benifit");
   }

else
   {
    printf("buying from rohot will be benifit");
   }
   
}