#include <stdio.h>
#define SIZE 100
int main(){
	char y[SIZE];
	char x[SIZE];
	printf("Nhap chuoi ki tu 1:");
	fgets(x, SIZE, stdin);
	fflush(stdin);
	printf("Nhap chuoi ki tu 2:");
	fgets(y, SIZE, stdin);
	fflush(stdin);
	printf("Ca 2 chuoi ki tu la: %s%s", x,y);
	return 0;
}
