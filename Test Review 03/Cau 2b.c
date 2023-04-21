#include<stdio.h>

int main(){
	const int x=5; 
	const int *ptrx;
	ptrx = &x;
//	*ptrx = 10;  // ket qua "Loi bien dich"
	printf("%d\n", x);
	return 0;
}
