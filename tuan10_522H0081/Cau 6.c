#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 10

typedef struct{
	char mssv[10];
	char ten[50];
	int diem_pplt, diem_daiso, diem_tinhoc, diem_trungbinh;
	char xeploai[10];
}sinhvien_t;

void input_sinhvien(sinhvien_t a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("Nhap mssv: ");
		fgets(a[i].mssv, 10, stdin);
		printf("Nhap ho va ten: ");
		fgets(a[i].ten, 50, stdin);
		printf("Nhap diem phuong phap lap trinh");
		scanf("%d", &a[i].diem_pplt);
		printf("Nhap diem dai so tuyen tinh");
		scanf("%d", &a[i].diem_daiso);
		printf("Nhap diem tin hoc");
		scanf("%d", &a[i].diem_tinhoc);
	}
}

int main(){
	int n;
	sinhvien_t a[MAX];
	printf("Nhap so luong sinh vien: ");
	scanf("%d", n);
	input_sinhvien(a, n);
	return 0;
}
