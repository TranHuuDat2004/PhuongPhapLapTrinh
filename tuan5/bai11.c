#include<stdio.h>
#define SIZE 100
int main () {
	int n, m;
	int i, j; 
	char str[SIZE];
	
	printf("Nhap chuoi ki tu bat ki: ");
	gets(str);
	printf("Nhap vi tri: ");
    scanf("%d", &j);
    printf("Nhap so ki tu can xoa: ");
    scanf("%d", &n);
    while (str[m] != '\0') {
    	m++;
    }
    for (i = 0; i < m; i++) {
    	if (i >= j && i < (j + n)) {
    	} else {
    		printf("%c", str[i]);
    	}
    }
    
    return 0;
}
