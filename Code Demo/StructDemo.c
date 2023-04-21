//preprocessor - diractive
#include <stdio.h>
#include <string.h>

typedef struct {
	int ngay;
	int thang;
	int nam;
} ngay_t;  // du lieu ngay thang nam sinh

typedef struct {
	char maso[15];
	char ten[102];
	ngay_t ngay_sinh;
	double diem_trung_binh;
	int ngay_nghi;
} sinhvien_t;   // du lieu sinh vien

//function prototype
sinhvien_t input_sinh_vien(void);
void print_sinh_vien(sinhvien_t);
int inputString(char [], int );

//main function
int main(void) {
	sinhvien_t sv1 = input_sinh_vien();  // nhap du lieu sinh vien
	printf("\n");
	printf("Thong tin sinh vien:\n");
	print_sinh_vien (sv1); // xuat du lieu sinh vien ( main )
	printf("\n");
	double diem = sv1.diem_trung_binh;	
	int ngay_nghi = sv1.ngay_nghi;
	if (diem > 7){
		printf("Khen thuong sinh vien:\n");
		print_sinh_vien (sv1); // xuat du lieu sinh vien ( main )
		printf("\n");
	}
		
	if (ngay_nghi > 3){
		printf("Nhac nho sinh vien:\n");
		print_sinh_vien (sv1); // xuat du lieu sinh vien ( main )
		printf("\n");
	}
		
	return 0;
}

//function definition
sinhvien_t input_sinh_vien(){
	sinhvien_t sv1;
	
	printf("Nhap vao mssv (8 ky tu): ");
	inputString(sv1.maso, 15);
	
	printf("Nhap vao ten (toi da 100 ky tu):");
	inputString(sv1.ten, 102);
	
	printf("Nhap vao ngay sinh (dd mm yyyy): ");
	scanf("%d %d %d", 
		&sv1.ngay_sinh.ngay,
		&sv1.ngay_sinh.thang,
		&sv1.ngay_sinh.nam);
	
	printf("Nhap vao diem trung binh: ");
	scanf("%lf", &sv1.diem_trung_binh);
	
	printf("Nhap vao so ngay nghi: ");
	scanf("%d", &sv1.ngay_nghi);
	return sv1;	
}

// xuat du lieu sinh vien ( function )
void print_sinh_vien(sinhvien_t sv1)
{
	printf("Sinh vien: %s\t %s\t %d/%d/%d\t %.2lf\t %d ", 
			sv1.maso, 
			sv1.ten, 
			sv1.ngay_sinh.ngay, sv1.ngay_sinh.thang, sv1.ngay_sinh.nam, 
			sv1.diem_trung_binh,
			sv1.ngay_nghi);
}

int inputString(char str[], int size){
	int length;
	fgets(str, size, stdin);
	//delete '\n' character 
	length = strlen(str);
	if(str[length - 1] == '\n'){
		str[length - 1] = '\0';
	}
	
	return strlen(str);	
}
