#include <stdio.h>
#include <math.h>

int main(){
	float n, i, s1, s2, s3, s4, s5, s6;
	printf("Nhap n:");
	scanf("%f",&n);
	while(n<=0){
		printf("Nhap lai n, n phai lon hon 0:");
		scanf("%f",&n);
	}
	for(i=1; i<=n; i++)
		s1 = (i+1)/sqrt(i) + s1;
	printf("\nket qua s1:%.2f", s1);
	return 0;
}
