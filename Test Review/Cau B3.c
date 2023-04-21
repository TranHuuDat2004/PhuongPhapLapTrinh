#include <stdio.h> 
void main(){  
	int i, a, b;
	i = 2023; 
	a = 2 + ++i; 
	b = 2 + --i; 
	printf("a = %d, b = %d",a,b);  // a = 2026, b = 2025
}  

