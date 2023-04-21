#include <stdio.h>

int perfect(int num) {
    int i, sum;
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main(){
    int n, x, i;
    do {
		printf("Vui long nhap so duong: ");
		scanf("%d", &n);		
	}
	while ( n <=0 );
    printf("Tat ca so Perfect tu 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (perfect(i)==1)
            printf("%d ", i);
    }
    return 0;
}
