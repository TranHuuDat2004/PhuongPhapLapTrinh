#include<stdio.h>

int main(){
	int x = 10, y= 20;
	if(!(!x)&&x)
		printf("x = %d\n", x);  // ket qua x = 10
	else 
		printf("y = %d\n", y);
	return 0;
}
