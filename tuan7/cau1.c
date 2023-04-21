#include<stdio.h>
#define MAX 100

int search(int a[], int n, int k){
	int i;
	for(i = 0; i < n; i++)
		if(a[i] == k) 
			return i;
	return -1; // khong tim thay gia tri
}

int main(){
	int a[MAX], n, k, i, x;
	printf("Nhap so phan tu mang:");
	scanf("%d",&n);
	for(x=0; x<n; x++){	
		printf("Nhap phan tu:");
		scanf("%d",&a[x]);
		}
	printf("Nhap so can tim:");
	scanf("%d",&k);
	i = search(a, n, k);
	printf("Phan tu duoc tim thay la:%d",i);
	return 0;
}
	
