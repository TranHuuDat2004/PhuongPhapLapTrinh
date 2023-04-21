#include <stdio.h>
#include <math.h>
int sochan(int n){
	int s = 0;
	int i = 1;
	for ( i =2 ; i <=n ; i +=2)	
		s += i ;		
	return s;
}
int main(){
	int n, s, i ;	
	do {
		printf("nhap n : ");
		scanf("%d", &n);		
	}
	while ( n <=0 );
	s=sochan(n);
	printf("tong cac so chan tu 1 toi n = %d \n" , s);
	return 0;
}

