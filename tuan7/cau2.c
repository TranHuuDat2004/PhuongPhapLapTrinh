#include<stdio.h>
#define MAX 100

int binary_search(int a[], int n, int k){  // n = size
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high)/2;  
		if(k == a[mid]) 
			return mid;
		else if(k > a[mid]) 
			low = mid + 1;    // dich chuyen low sang mid
		else 
			high = mid - 1;		//dich chuyen high sang mid
}
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
	i = binary_search(a, n, k);
	printf("Phan tu duoc tim thay la:%d",i);
	return 0;
}
	
