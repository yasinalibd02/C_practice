#include<stdio.h>
void main(){
    int anindita_birth_year,anindita_birth_month,anindita_birth_day,
    maliha_birth_year,maliha_birth_month,maliha_birth_day;

    printf("anindita birth date :");
    scanf("%d %d %d",&anindita_birth_year,&anindita_birth_month,&anindita_birth_day);

    printf("maliha birth date : ");
    scanf("%d %d %d",&maliha_birth_year,&maliha_birth_month,&maliha_birth_day);
 

 //comparision year 
    if (anindita_birth_year  >  maliha_birth_year)
    {
        printf("maliha elder than anindita");
    }
    else if (anindita_birth_year  <  maliha_birth_year)
    {
        printf("anindita elder than maliha");
    }

    else if (anindita_birth_year  ==  maliha_birth_year)
    {
       // comparision month
          if (anindita_birth_month >  maliha_birth_month)
          {
             printf("maliha elder than anindita");
            }
             else if (anindita_birth_month  <  maliha_birth_month)
               {
             printf("anindita elder than maliha");
               }

              else if (anindita_birth_month  ==  maliha_birth_month)
                 {
                         
                //comparision day
                    if (anindita_birth_day  >  maliha_birth_day)
                    {
                      printf("maliha elder than anindita");
                    }
                    else if (anindita_birth_day  <  maliha_birth_day)
                      {
                      printf("anindita elder than maliha");
                       }
                        else if (anindita_birth_day  ==  maliha_birth_day){
                            printf("maliha and anindita are same age");


                        }



                        
                 }

    }

  
  



    
    
}