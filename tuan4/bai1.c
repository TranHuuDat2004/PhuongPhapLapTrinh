#include <stdio.h>

double caua ( int n){
	double tong=0, i	;
	for(i=1; i<=n; i++){
		tong = tong +  i/2.0;
	}
	return tong;
}

int caub( int n){
	int tong=0, i;
	for(i=1; i<=n; i++){
		tong = tong +  (2*i +1);
	}
	return tong;
}

int cauc( int n){
	int tong=0, i , giaithua = 1;
	for(i=1; i<=n; i++){
		giaithua = giaithua *i;
		tong = tong + (i*giaithua + 1  );
	}
	return tong;
}

int caud( int n){
	int tich=1, i , giaithua = 1;
	for(i=1; i<=n; i++){
		giaithua = giaithua *i;
		tich = tich * (i*giaithua);
	}
	return tich;
}

double caue( int n){
	double tich=1, i ;
	for(i=1; i<=n; i++){
		tich *= (2*i/3);
	}
	return tich;
}



int main(){
	double n,a,b,c,d,e ;
	printf("Vui long nhap so n:");
	scanf("%lf", &n);
	a = caua(n);
	b = caub(n);
	c = cauc(n);
	d = caud(n);
	e = caue(n);
	printf("\nTong cau a la: %lf", a);
	printf("\nTong cau b la: %lf", b);
	printf("\nTong cau c la: %lf", c);
	printf("\nTong cau d la: %lf", d);
	printf("\nTong cau e la: %lf", e);
	return 0;
}
