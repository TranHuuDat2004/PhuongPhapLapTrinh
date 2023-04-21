#include<stdio.h>
#include<math.h>

void xuatNP(int n){
	if(n < 2){
		printf("%d", n);
		return;
	}
	int du = n % 2;
	n = n / 2;
	xuatNP(n);
	printf("%d", du);
} 

int main (){
	int n;
	printf("Nhap vao so nguyen: ");
	scanf("%d", &n);
	printf("So nhi phan: ");
	xuatNP(n);
	return 0;
}
