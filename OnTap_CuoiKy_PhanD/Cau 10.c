#include<stdio.h>
#include<math.h>
#define MAX 100

// tim tong bang de quy

int tong(int arr[], int n){
	// base case
	if ( n == 1)
		return arr[n-1];
	// recursive case
	else 
		return tong(arr, n-1) + arr[n-1]  ;
}                               
	
int main(){
	int arr[MAX], n;
	printf("Nhap vao so phan tu: ");
	scanf("%d", &n);
	
	int i;
	for (i=0; i<n; i++){
		printf("Nhap vao so nguyen: ");
		scanf("%d", &arr[i]);		
	}
	
	int result = tong(arr, n);
	printf("Tong la: %d",result);
	return 0;
}
