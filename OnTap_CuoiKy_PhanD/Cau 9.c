#include<stdio.h>
#include<math.h>

double p(int n){
	if (n == 1) return (3*1 - (1/3.0) );
	return (3*n - (1/3.0)) + p(n-1);
}

int main(){
	int n;
	double ketqua;
	printf("Vui long nhap so nguyen: ");
	scanf("%d", &n);
	while (n<0){
		printf("Vui long nhap so nguyen lon hon hoac bang 0: ");
		scanf("%d", &n);
	}
	ketqua = p(n);
	printf("Ket qua = %.2lf", ketqua);
	return 0;
}
