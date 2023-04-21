#include <stdio.h>
#include <math.h>

int main(){
	double x, y, s;
	printf("Nhap x:");
	scanf("%lf",&x);
	printf("Nhap y:");
	scanf("%lf",&y);
	
	s = (3*pow(x, 3)*y -( (1/2)*pow(x, 2) )  + (1/5)*x*y) * (6*x*pow(y, 3));
	printf("ket qua cua s la:%.2lf",s);
	
	return 0;
}
