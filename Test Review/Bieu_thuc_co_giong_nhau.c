#include<stdio.h>

int main(){
	int a = 5;
	int c;
	int *ptr = &a;
	
	c = ++(*ptr);
	printf("ket qua c= %d, *ptr = %d", c, *ptr);
	return 0;
}
