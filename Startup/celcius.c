// #include <stdio.h>

// int main(){

//     float f,c; 

//          printf("enter your celcius number : ");
//          scanf("%f",&c);

//          f=c*9 /5 +32;
//          printf(" farenhite %f\n",f);
// }

#include <stdio.h>

int main(){

    float f,c; 

         printf("enter your farenhite number : ");
         scanf("%f",&f);

        c=(f-32)/1.8;
         printf(" celcius %.2f\n",c);
}