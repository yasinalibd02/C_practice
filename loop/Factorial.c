#include<stdio.h>

int main(){
int n, 
Fact =1;

printf("enter your number  : ");
scanf("%d",&n);

for (int i = 1; i <=n; i++)
{
    Fact = Fact * i;

}
printf("%d\n",Fact);

    
}