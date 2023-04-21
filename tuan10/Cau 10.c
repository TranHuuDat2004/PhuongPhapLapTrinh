#include<stdio.h>
#include<math.h>

double f(int x){
	x = x - 1; // do de cho la f(x+1)
	if (x == 0) return 4;
	if (x == 1) return 7;
	return 4*f(x) - f(x-1);
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
