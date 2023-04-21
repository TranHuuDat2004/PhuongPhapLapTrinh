#include <stdio.h>
#include <math.h>

int dem_so(int n);

int main(){
	int n, m, i;
	printf("Nhap n:");
	scanf("%d",&n);
	if (n>0){
		m= dem_so(n);
		printf("Tong cac chu so la:%d",m);
		}
	else if (n<0)
		printf("Ban da nhap sai");
	return 0;
}

int  dem_so(int n){
	if (n==0)
		return 0;
	return 1+dem_so(n/10);
}


