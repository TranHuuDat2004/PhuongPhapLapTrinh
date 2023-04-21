#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct {
	int day, month, year;
}date_t;

typedef struct {
	char name[100];
	char mssv[8];
	float dtb;
	int ngaynghi;
	date_t ngaysinh;
}sinhvien_t;

void nhap_du_lieu_sv(sinhvien_t a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("\n--------------------------------------\n");
		fflush(stdin);
		printf("\nNhap ho va ten SV: ");
		gets(a[i].name);
		fflush(stdin);
		printf("\nNhap MSSV: ");
		gets(a[i].mssv);
		fflush(stdin);
		printf("\nNhap ngay sinh: ");
		scanf("%d", &a[i].ngaysinh.day);
		printf("\nNhap thang sinh: ");
		scanf("%d", &a[i].ngaysinh.month);
		printf("\nNhap nam sinh: ");
		scanf("%d", &a[i].ngaysinh.year);
		printf("\nNhap diem trung binh: ");
		scanf("%f", &a[i].dtb);
		printf("\nNhap so ngay nghi: ");
		scanf("%d", &a[i].ngaynghi);
	}
}

void xuat_du_lieu_sv(sinhvien_t a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("\n--------------------------------------\n");
		printf("\nHo va ten: %s", a[i].name);
		printf("\nMSSV: %s", a[i].mssv);
		printf("\nNgay sinh: %d/%d/%d", a[i].ngaysinh.day, a[i].ngaysinh.month, a[i].ngaysinh.year);
		printf("\nDiem trung binh: %0.1f", a[i].dtb);
		printf("\nNgay nghi: %d", a[i].ngaynghi);
		printf("\n--------------------------------------\n");
	}
}

void thanh_tich_tot(sinhvien_t a[], int n){
	int i; 
	for (i=0; i<n; i++){
		if(a[i].dtb > 7.0){
			printf("\nHo va ten: %s", a[i].name);
			printf("\nMSSV: %s",a[i].mssv);
		}
	}
}

void nghi_phep_nhieu(sinhvien_t a[], int n){
	int i; 
	for (i=0; i<n; i++){
		if(a[i].ngaynghi > 3){
			printf("\nHo va ten: %s", a[i].name);
			printf("\nMSSV: %s",a[i].mssv);
		}		
	}
}

int main(){
	int n;
	char a[MAX];
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	nhap_du_lieu_sv(a, n);
	xuat_du_lieu_sv(a, n);
	printf("\nsinh vien co dtb > 7");
	thanh_tich_tot(a,  n);
	printf("\nsinh vien nghi hon 3 ngay");
	nghi_phep_nhieu(a, n);
	return 0;
}
