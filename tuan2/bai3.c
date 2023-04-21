#include <stdio.h>
#include <math.h>
int main(){
	int n=1, a, m ;
	printf("so cot la : ");
	scanf("%d", &a);
	printf("so dong la : ");
	scanf("%d", &m);
	int i, j;
	for ( i = n ; i <= m ; i++){
		n = i;
		for (j = 1 ; j <=a ; j++){	
			printf("%4d", n * j);
		}
		printf("\n");
	}	
	return 0;	
}

