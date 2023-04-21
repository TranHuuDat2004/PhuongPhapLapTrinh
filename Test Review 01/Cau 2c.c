#include <stdio.h>
#include <math.h>

// thuat toan dao so
int main(){
	int n = 123456;
	int s = 0;
	while (n>0){
		s = (s * 10) + ( n % 10);
		n = n / 10;
	}
	printf("%d", s);  // s = 654321
	return 0;
}
