#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n, int i);

int main(){
	int n, m;
	printf("Nhap n:");
	scanf("%d",&n);
	m = so_nguyen_to(n, 2);
	if (m==1)
		printf("%d la so nguyen to",n);
	else 
		printf("%d khong la so nguyen to",n);
	return 0;
}

int so_nguyen_to(int n, int i){
	if (i<2||i>sqrt(n))
		return 1;
	else if(n%i==0)
		return 0;
	return so_nguyen_to(n, i+1 );
	}


