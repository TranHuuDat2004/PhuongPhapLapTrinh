#include<stdio.h>

int f2(int x, int y){
	if (x < y) return -1;
	if( x == y) return 1;
	return y * f2(x, y + 1); 
}

int main(){
	printf("%d\n", f2(3, 1));  // 1 * 2 * 1;  vi x = y = 3 nen return 1
	printf("%d\n", f2(3, 2));  // 2 * 1
	printf("%d\n", f2(1, 1));  // 1 
	return 0;
}
