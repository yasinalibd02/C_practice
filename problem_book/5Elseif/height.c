#include<stdio.h>

int main(){
    double first_person,second_person,third_person,fouth_person,five_person;

    printf("enter your height person1 : ");
    scanf("%lf",&first_person);

    printf("enter your height person2 : ");
    scanf("%lf",&second_person);

    printf("enter your height person3 : ");
    scanf("%lf",&third_person);

    printf("enter your height person4 : ");
    scanf("%lf",&fouth_person);

    printf("enter your height person5 : ");
    scanf("%lf",&five_person);

  //first person
  if (first_person >=second_person && first_person >= third_person && first_person >= fouth_person && first_person >= five_person)

  {
    printf("The tall person is person 1 :  %.2f\n",first_person);
  }
  
 //second person
  if (second_person >= first_person && second_person >= third_person && second_person >= fouth_person && second_person >= five_person)

  {
    printf("The tall person is person 2 :  %.2f\n",second_person);
  }

//third person
    if (third_person >= first_person && third_person >= second_person && third_person >= fouth_person && third_person >= five_person)

  {
    printf("The tall person is person 3 :  %.2f\n",third_person);
  }

//fouth person
  if (fouth_person >= first_person && fouth_person >= third_person && fouth_person >= second_person && fouth_person >= five_person)

  {
    printf("The tall person is person 4 :  %.2f\n",fouth_person);
  }

//five person
if (five_person >= first_person && five_person >= second_person && five_person >= fouth_person && five_person >= second_person)

  {
    printf("The tall person is person 5 :  %.2f  \n",five_person);
  }
  
    

}