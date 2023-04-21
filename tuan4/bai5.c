#include <stdio.h>

int sum( int a[], int n){
	int m=0, i, tong=0;
	for (i=1; i<=n; i++){
			m=a[i];
			tong += m;
	}
	return tong;
}

int main(){
	int n,i;
 	double  x, m;
 	printf("Nhap so phan tu:");
 	scanf("%d",&n);
 	int arr[n];
	for ( i=1; i<=n; i++) {
    	printf("Nhap so bat ki:");
    	scanf("%d", &arr[i]);
   }
 	x = sum(arr,n);
 	printf("Tong so phan tu la: %lf",x);
 	return 0;
}

