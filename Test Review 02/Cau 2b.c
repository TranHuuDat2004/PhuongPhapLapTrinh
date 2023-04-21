#include <stdio.h>

int main(){
	int n1 = 365, n2 = 850;
	while(n1 != n2){
		if (n1 > n2)
			n1 -= n2;
		if (n2 > n1)
			n2 -= n1;
	}
	printf("ket qua = %d", n1); // ket qua = 5
	return 0;
}
