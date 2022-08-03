#include<stdio.h>

int main(){
    char character ;

    printf("enter your charecter : ");
    scanf("%c",&character);

    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122)) {
			if (character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i'
					|| character == 'I' || character == 'o' || character == 'O' || character == 'u'
					|| character == 'U') {
				printf("Vowel.\n");
			} else {
				printf("Consonent.\n");
			}
		} else {
			printf("Not an alphabet.\n");
		}
	}


