#include <stdio.h>

int armstrong(int num){
    int n, rem, sum;
    n = num;
    sum = 0;
    while (n != 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

int main(){
    int i, n;
    do {
		printf("Vui long nhap so duong: ");
		scanf("%d", &n);		
	}
	while ( n <=0 );
    printf("Tat ca so Armstrong tu 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (armstrong(i)==1)
            printf("%d ", i);
    }
    return 0;
}
