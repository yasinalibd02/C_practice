#include<stdio.h>
int main()
{
    int school_name,shift;
 

    printf("School: enter 1 (plash dangga school ), enter 2 (noren ganguly school)  :  ");
    scanf("%d",&school_name);

    printf("Shift: enter 1 (first shift) , enter 2 (second shift)  :  ");
    scanf("%d",&shift); 

     
     if (school_name == 1)
     {
      if (shift == 1)
      {
       printf("Yellow");
      }
      else if (shift == 2)
      {
        printf("Green");
      }
      
      
       
     }
     else if (school_name == 2)
     {
      
       if (shift == 1)
       {
        printf("Blue");
       }
       else if (shift == 2)
       {
       printf("Red");
       }
     
       
     }
    
     
     

}