#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
	char str[SIZE] ;
	printf("Enter your name: ");
	fgets(str, SIZE, stdin);
	fflush(stdin);
	char *token = strtok(str, " ");
	char *firstname = NULL, *lastname = NULL;
	while (token != NULL){
		if (firstname == NULL){
			firstname = token;
		}
		else {
			lastname = token;
			}
		token = strtok(NULL, " ");
		}
	printf(" first name: %s\n last name: %s\n", firstname, lastname);
	return 0;
}
