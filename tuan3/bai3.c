#include <stdio.h>
#include <math.h>
int bang(int n){
	int num=1, a, m;
	printf("so cot la : ");
	scanf("%d", &a);
	printf("so dong la : ");
	scanf("%d", &m);
	int i, j;
	for ( i = 1 ; i <= m ; i++){
		n = i;
		for (j = 1 ; j <=a ; j++){	
			printf("%4d", n * j);
		}
		printf("\n");
	}	
	return num;
}
	
int main(){
	int  n, a, m, num ;
	int i, j;
	num=bang(n);
	printf("bang du lieu la:", num);
	return 0;	
}

