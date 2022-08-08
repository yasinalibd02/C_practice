#include<stdio.h>

void main(){
    int x,y,z,m;
    int number_of_books = 0;

    printf("enter your amount : ");
    scanf("%d",&m);

    printf("enter your books price : ");
    scanf("%d%d%d",&x,&y,&z);

    if (m>=x+y+z)
    {
       number_of_books=3;
       printf("computer programming,gonit korbo joy,programming ashchorjo");
    }
    else if (m>= (x+y) || m>= (x+z) ||m>= (y+z)  )
    {
      number_of_books=2;
       if (m>=(x+y))
       {
        printf("computer programming & gonit korbo joy");
       }
       else if (m>= (x+z))
       {
       printf("computer programming & programming ashchorjo");
       }
        else if (m>= (y+z))
       {
       printf("gonit korbo joy & programming ashchorjo");
       }
       
       
    }
    else if ( m >= x || m>= y || m>= z)
    {
        number_of_books=1;
        if (m >=x)
        {
           printf("computer programming");
        }
        else if (m>= y)
        {
            printf("gonit korbo joy");
        }
        else if (m>= z)
        {
            printf("programming ashchorjo");
        }

        
        printf(" number of book %d",number_of_books);
        
    }
    printf("I can't buy any books");
  
    
    
    
}