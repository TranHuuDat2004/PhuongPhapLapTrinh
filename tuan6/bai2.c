#include <stdio.h>
#include <math.h>

int gt(int n);

int main(){
	int n, m;
	printf("Nhap n de tinh giai thua:");
	scanf("%d",&n);
	m = gt(n);
	printf("Ket qua la %d:",m);
	return 0;
}

int gt(int n){
	if (n==1)
		return 1;
	return gt(n-1)*n;
	}
	
