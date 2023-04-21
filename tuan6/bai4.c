#include <stdio.h>
#include <math.h>

int so_mu(int x, int n);

int main(){
	int x, n, m;
	printf("Nhap x:");
	scanf("%d",&x);
	printf("Nhap n:");
	scanf("%d",&n);
	m = so_mu(x, n);
	printf("Ket qua la %d:",m);
	return 0;
}

int so_mu(int x, int n){
	if (n==0)
		return 1;
	return so_mu(x, n-1)* x;
}
