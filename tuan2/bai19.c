#include <stdio.h>
#include <math.h>
int main(){
	int n ;
	do {
		printf(" nhap n : ");	
		scanf("%d", &n);		
	}while ( n <= 0);
	int s = 1;
	int i = 1;
	for ( i =1 ; i <= n ; i +=1){		
		s = s*i ;
	}
	printf("tich cac so tu 1 toi n = %d", s);
	return 0;
}
	
