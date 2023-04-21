#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
	char str[SIZE];
	int toupper(str);
	printf("Nhap ki tu bat ki: ");
	fgets(str, SIZE, stdin);
	fflush(stdin);
	char *token = strtok(str, " ");
	printf("Ki tu sau khi sua la:", str);
	return 0;
}
