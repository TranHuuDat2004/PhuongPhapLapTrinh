#include <stdio.h>
#include <math.h>

int so_mu(int n);

int main(){
	int n, m;
	printf("Nhap n:");
	scanf("%d",&n);
	m = so_mu(n);
	printf("Ket qua la %d:",m);
	return 0;
}

int so_mu(int n){
	if (n==0)
		return 1;
	return so_mu(n-1)* 2;
}
