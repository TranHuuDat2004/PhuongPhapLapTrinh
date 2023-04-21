#include<stdio.h>
#define MAX 100

void selection_Sort(int a[], int n){   // n = size
	int i, start, max_index, temp;
	for(start = 0; start < n - 1; start++){	// tim phan tu lon nhat
		max_index = start;
	for (i = start + 1; i < n; i++){
		if (a[i] > a[max_index]) 
			max_index = i;
		}
	// hoan doi phan tu lon nhat nam ben trai
	temp = a[start];
	a[start] = a[max_index];
	a[max_index] = temp;
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
	selection_Sort(a, n);
	printf("sap xep tu lon den be:");
	in_ket_qua(a, n);
	return 0;
}
