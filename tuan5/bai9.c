#include<stdio.h> 

int main () {
	int n, m, k;
	int i, j;
	char str1[99], str2[99];
	printf("Nhap ki tu 1: ");
	gets(str1);
	printf("Nhap ki tu 2: ");
	gets(str2);
	while (str1[n] != '\0') {
		n++;
	}
	while (str2[m] != '\0') {
		m++;
	}
	for (i = 0; i <= n; i++) {
		k = 0;
		j = i;
	    while (k < m) {
	    	if (str1[j] == str2[k]) {
	    		k++;
	    	    j++;
	    	} else {
	    		j++;
	    	}
	    }
	    if (k == m) {
	    	printf ("%d", j - k);
	    	break;
	    } else {
	    	k = 0;
	    	j = 0;
	    }
	}
	    	
	return 0;
}
