#include <stdio.h>
#include <math.h>
int main(){	
	long n, m ;	
	printf(" nhap n : ");		
	scanf("%ld", &n);		
	m = n;		
	int sum = 0;	
	while ( n !=0){
		sum += n % 10;	
		n = n / 10 ;		
	}
	printf("so %ld co tong cac chu so la %d",m, sum);
	return 0;	
}
	
	
