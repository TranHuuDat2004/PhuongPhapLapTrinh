#include <stdio.h>
#include <math.h>
int main(){
	long n, m ;	
	printf(" nhap n : ");	
	scanf("%ld", &n);	
	m = n;		
	int socuoi = n % 10;	
	while ( n >=10){	
		n = n / 10 ;		
	}
	printf("so dau %ld, so cuoi %d cua %ld",n, socuoi, m);
	return 0;
}
	
	
