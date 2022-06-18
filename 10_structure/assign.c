#include<stdio.h>

struct Sports
{
    int player;
    int salary;
};

int main(){

    struct Sports bangladesh={11,200000};//change the value it's not equal 
    struct Sports india={11,200000};//change the value it's not equal 

     if (bangladesh.player == india.player && bangladesh.salary == india.salary)
     {
        printf("Bangladesh and india are equal");
     }
     else
     {
        printf("Bangaldesh and india are not equal");
     }
     
     

}