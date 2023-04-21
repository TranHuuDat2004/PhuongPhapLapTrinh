#include<stdio.h>
#include<math.h>

int giaithua(int x){
	if (x<=1) return 1;
	return x* giaithua(x-1);
}

int main(){
	int n, ketqua;
	printf("Vui long nhap so nguyen: ");
	scanf("%d", &n);
	ketqua = giaithua(n);
	printf("Ket qua = %d", ketqua);
	return 0;
}

