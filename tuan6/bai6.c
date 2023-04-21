#include <stdio.h>
#include <math.h>

double cau_a(int n){
	if(n==1)
		return 1;
	return cau_a(n-1) + (2*n+1)	;
}

double cau_b(int n){
	if(n==1)
		return n/2.0; 
	return cau_b(n-1) + (n/2.0);
}

int gt(int n){
	if (n==1)
		return 1;
	return gt(n-1)*n;
	}

double cau_c(int n){
	if (n==1)
		return 1;
	return cau_c(n-1)+gt(n);
	}
	
double cau_d(int n){
	if (n==0)
		return sqrt(n);
	return cau_d(n-1) + sqrt(n);
}

double cau_e(int n){
	if (n==1)
		return 1;
	return cau_e(n-1)*gt(n);
	}

int main(){
	int n;
	double a, b, c, d, e;
	printf("Nhap n:");
	scanf("%d",&n);
	
	a = cau_a(n);
	b = cau_b(n);
	c = cau_c(n);
	d = cau_d(n);
	e = cau_e(n);
	
	printf("Ket qua cau a la :%.2lf",a);
	printf("\nKet qua cau b la :%.2lf",b);
	printf("\nKet qua cau c la :%.2lf",c);
	printf("\nKet qua cau d la :%.2lf",d);
	printf("\nKet qua cau e la :%.2lf",e);
	return 0;
}


