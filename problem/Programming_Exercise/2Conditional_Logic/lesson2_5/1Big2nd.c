#include <stdio.h>

int main() {
   int array[4] = {101, 11, 3, 4};
   int loop, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   } else {
      largest = array[1];
      second  = array[0];
   }

   for(loop = 2; loop < 5; loop++) {
      if( largest < array[loop] ) {
         second = largest;
         largest = array[loop];
      } else if( second < array[loop] ) {
         second =  array[loop];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}