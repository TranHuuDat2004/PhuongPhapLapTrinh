#include <stdio.h>
#include <string.h>
#define MAX 100 
int main(){
   	char s[MAX];

   	printf("Enter a string to reverse\n");
   	fgets(s, MAX, stdin);

   	strrev(s);

   	printf("Reverse of the string: %s\n", s);

   	return 0;
}
