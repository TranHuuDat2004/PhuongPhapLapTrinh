#include<stdio.h> 

int main () {
	char str1[100], str2[100];
	int n, m, k, p;
	int i, j;
	printf("Nhap ki tu 1: ");
	gets(str1);
	printf("Nhap ki tu 2: ");
	gets(str2);
	printf("Nhap vi tri de chen 2 ki tu : ");
    scanf("%d", &p);
	
	while (str1[n] != '\0') {
		n++;
	}
	while (str2[m] != '\0') {
		m++;
	}
	for (i = 0; i < n; i++) {
		if (i != p) {
			printf("%c", str1[i]);
		} else if (i == p) {
			for (k = 0; k < m; k++) {
				printf("%c", str2[k]);
			}
		}
	}
	return 0;
}
