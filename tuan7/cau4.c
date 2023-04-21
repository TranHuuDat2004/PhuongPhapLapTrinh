#include<stdio.h>
#define MAX 100

void bubble_Sort(int a[], int n){ 	// n = size
	int i, limit, temp;
	for (limit = n-2; limit >= 0; limit--){
	// limit is where the inner loop variable i should end
		for (i=0; i <= limit; i++){
			if (a[i] < a[i+1]){
	// swap a[i] with a[i+1]
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			}				
		}			
	}
}

void in_ket_qua(int a[], int n){
	int i;
	for (i = 0; i < n; i++) {
    	printf("\n a[%d] = %d ", i, a[i]);
   }
}

int main(){
	int a[MAX], n, k, i, x;
	printf("Nhap so phan tu mang:");
	scanf("%d",&n);
	for(x=0; x<n; x++){	
		printf("Nhap phan tu:");
		scanf("%d",&a[x]);
		}
	bubble_Sort(a, n);
	printf("sap xep tu lon den be:");
	in_ket_qua(a, n);
	return 0;
}
