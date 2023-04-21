#include <stdio.h>
#include <math.h>
int main(){	
	long n ;	
	do {	
		printf(" nhap n : ");		
		scanf("%ld", &n);		
	}
	while (n < 10);	
	long m = n;	
	long dig = 1;	
	while (m !=0){		
		dig = dig * (m%10);		
		m = m / 10;		
	}
	printf("tich cac chu so cua %ld", dig);	
}
	
	
