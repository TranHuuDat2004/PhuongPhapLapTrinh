#include <stdio.h>
int main()
{
    int n, sodao = 0;
    printf("Vui long nhap so bat ki: ");
    scanf("%d", &n);
    while(n != 0){	
		 sodao = (sodao * 10) + (n % 10); 
     	 n /= 10;
    }
    printf("So sau khi bi dao = %d", sodao);
    return 0;
}
