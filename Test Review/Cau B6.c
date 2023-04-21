#include <stdio.h>  
void main() {  
	int a,b,c,d; 
	a = b = 404; 
	c = a + a++ + --a + ++a + a--; 
// 	c = 405 + 404 + 404 + 405 + 405
	d = b + ++b + b-- + b++ + --b; 
// 	d = 405 + 405 + 405 + 404 + 404	
	printf("ket qua c = %d, d = %d \n",c,d); // c = 2023, d = 2023
	if(c == d) 	 
		printf("ket qua c bang d");
 	
 	else
	  	printf("ket qua c khac d");
 	
} 

