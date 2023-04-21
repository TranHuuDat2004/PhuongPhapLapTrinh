#include <stdio.h>
#include <math.h>
int sole(int n){
	int s = 0;
	int i = 1;
	for ( i =1 ; i <=n ; i +=2)	
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
	s=sole(n);
	printf("tong cac so le tu 1 toi n = %d \n" , s);
	return 0;
}

