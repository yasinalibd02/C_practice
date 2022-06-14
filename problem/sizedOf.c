#include<stdio.h>

int main(){
    int intgerValue;
    char characterValue;
    float floatValue;
    double doubleValue;

    printf(" Integer    = %d\n",sizeof(intgerValue));
    printf(" character  = %ld\n",sizeof(characterValue));
    printf(" float      = %ld\n",sizeof(floatValue));
    printf(" double     = %ld\n",sizeof(doubleValue));
}