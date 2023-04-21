#include<stdio.h>
#include<math.h>

double f(int x){
	if (x == 0) return 1;
	if (x == 1) return 2;
	return 2*f(x-1) + 3*f(x-2);
}

int main(){
	int x;
	double ketqua;
	printf("Vui long nhap so nguyen: ");
	scanf("%d", &x);
	while (x<0){
		printf("Vui long nhap so nguyen lon hon hoac bang 0: ");
		scanf("%d", &x);
	}
	ketqua = f(x);
	printf("Ket qua = %.2lf", ketqua);
	return 0;
}
