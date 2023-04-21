#include <stdio.h>
#include <math.h>
int tong(int x){
	int m, n;
	printf(" nhap n : ");		
	scanf("%ld", &n);		
	m = n;		
	int sum = 0;	
	while ( n !=0){
		sum += n % 10;	
		n = n / 10 ;		
	}
	return sum;
}
	
int main(){	
	long n, m, gt, x ;	
	gt = tong(x);
	printf("tong cac chu so do la %d", gt);
	return 0;	
}
	
	
