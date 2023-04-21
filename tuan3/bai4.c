#include <stdio.h>
#include <math.h>
int tong(int n){
	int s = 0;
	int i = 1;
	for ( i =1 ; i <=n ; i +=1)	
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
	s=tong(n);
	printf("tong cac so tu 1 toi n = %d \n" , s);
	return 0;
}

