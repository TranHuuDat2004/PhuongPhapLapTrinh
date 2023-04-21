#include <stdio.h>
#include <math.h>

int main(){
	double r, xa, x0, ya, y0, d;
	printf("Nhap ban kinh");
	scanf("%lf", &r);
	printf("Nhap xa:");
	scanf("%lf", &xa);
	printf("Nhap x0:");
	scanf("%lf", &x0);
	printf("Nhap ya:");
	scanf("%lf", &ya);
	printf("Nhap y0:");
	scanf("%lf", &y0);
	d = sqrt((xa-x0)*(xa-x0) + (ya-y0)*(ya-y0));
	if (r==d)
		printf("d nam tren duong tron");
	else if (d>r)
		printf("d nam ngoai duong tron");
	else if (d<r)
		printf("d nam trong duong tron");
	return 0;
}
	
	
	
