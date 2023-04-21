#include <stdio.h>
void main(){
	int a = 20, b = 21;
	int *c = &a, *d = &b; 
	(*d)++;
	*c = *c + *d;  // thay doi gia tri *c va ca gia tri a;   a,c = 42
	printf("a = %d, b = %d, c = %d, d = %d",a,b,*c,*d); // a = 42, b = 22, c = 42, d = 22
} 

