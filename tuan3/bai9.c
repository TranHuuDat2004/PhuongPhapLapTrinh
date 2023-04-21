#include <stdio.h>
#include <math.h>
int chuso(int x){
	int dem, n, tam, sc, sd, m, so;
	dem=0;
	printf("Vui long nhap so bat ki:",n );
	scanf("%d", &n);
	so = n;
	do{
		so = so /10;
		dem++;
	} while (so);
	tam = (int)pow(10, dem-1);
	sc = n % 10;
	sd = n / tam;
	m = n % tam;
	m = m - sc;
	m = m + sd;
	m = sc*tam + m;
	return m;
}
int main (){
	int m, x;
	m = chuso(x);
	printf("So sau khi chuyen doi la: %d", m);
	return 0;
}
	
