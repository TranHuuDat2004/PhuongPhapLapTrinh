#include <stdio.h>

int max( int a[], int n){
	int m=a[0]=0, i;
	for (i=1; i<=n; i++){
		if(a[i]>m)
			m=a[i];
	}
	return m;
}

int main(){
 	int n, x, i, m;
 	printf("Nhap so phan tu:");
 	scanf("%d",&n);
 	int arr[n];
	for ( i=1; i<=n; i++) {
    	printf("Nhap so bat ki:%d ", i);
    	scanf("%d", &arr[i]);
   }
 	x = max(arr,n);
 	printf("So lon nhat la: %d",x);
 	return 0;
}

