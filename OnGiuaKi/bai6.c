#include <stdio.h>
#include <math.h>

int main(){
	float x, f;
	printf("Nhap x:");
	scanf("%f",&x);
	
	if (x<0)
		f = sin(x)* cos(5*x);
	else if(x==0)
		f = pow(5, x);
	else if((x>0) && (x<5))
		f = exp(x);
	else if(x>=5)
		f =( pow(5, x) )  / (x+5);
	printf("ket qua cua f la:%.2f", f);
	
	return 0;
}
