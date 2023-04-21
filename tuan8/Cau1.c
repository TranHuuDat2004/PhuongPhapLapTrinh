#include <stdio.h>  
#define SIZE 10
typedef struct {
	int id;
	char name[50];
	int gioi_tinh;  // 0 nam, 1 nu
	int day, month, year;
}employee_t;

int find_employee(employee_t a[], int n, int id){
	int i;
	for (i=0; i<n; i++){
		if (a[i].id == id) return i;
	}
	return -1;
}

int input_employee(employee_t a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("Nhap id:");
		scanf("%d", &a[i].id);
	}
}

int main() {
	employee_t a[SIZE];
	int n;
	printf("Nhap so luong nhan vien: ");
	scanf("%d", &n);
	input_employee(a, n);
	return 0; 
} 

