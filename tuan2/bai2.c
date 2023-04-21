#include <stdio.h>
#include <math.h>
int main()
{
	int n ;	
	do {
		printf("nhap n : ");
		scanf("%d", &n);		
	}
	while ( n <=0 );	
	int s = 0;
	int i = 1;
	for ( i =1 ; i <=n ; i +=2)	{
		s += i ;		
	}
	printf("tong cac so le tu 1 toi n = %d \n" , s);	
	int d = 0 ;	
	int j = 1 ;	
	while (j <= n){
		d += j ;
		j+= 2;
	}
	printf("tong cac so le tu 1 toi n = %d \n" , d);	
	int l = 0;	
	int k = 1;	
	while ( k <=n ){
		l += k ;
		k += 2;
		}
	printf("tong cac so le tu 1 toi n = %d \n" , l);
	return 0;
	}
		
	
