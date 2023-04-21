#include<stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float cv,dt,p;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);	
	printf("Nhap c:");
	scanf("%d", &c);
    if((a + b > c) || (a + c > b) || (b + c > a)){	
    	printf("Do la 1 hinh tam giac");
    	cv = a+b+c;
		p = cv/2;
		dt = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nChu vi là:%.2f",cv);
		printf("\nDien tich là:%.2f",dt);
		if( a==b || a==c || b==c ) 
			printf("\nDo la tam giac can");
		else if( a==b || a==c || b==c ) 
			printf("\nDo la tam giac deu");
		else
			printf("\nDo la tam giac thuong");

	}
	
	else 
		printf("Do khong phai la hinh tam giac");

	return 0;

}
