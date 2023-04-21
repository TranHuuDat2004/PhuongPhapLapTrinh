#include <stdio.h>
#include <math.h>

int main(){
	float x, y1, y2, y3, y4, y5;
	printf("Nhap x:");
	scanf("%f",&x);
	
	y1 = 2*pow(x, 3) + 5*pow(x, 2) + 7*x + 15;
	printf("ket qua y1:%.2f", y1);
	
	y2 = (sin(x)*sin(x)) + (cos(2*x)*cos(2*x)) + (tan(3*x)*tan(3*x));
	printf("\nket qua y2:%.2f", y2);
	
	y3 = pow((x+10), (x+5));
	printf("\nket qua y3:%.2f", y3);
		
	y4 = 3*exp(1)*cos(x+1);
	printf("\nket qua y4:%.2f", y4);
		
	y5 = log10(x+100)	;
	printf("\nket qua y5:%.2f", y5);
	
	return 0;
}
	
	
