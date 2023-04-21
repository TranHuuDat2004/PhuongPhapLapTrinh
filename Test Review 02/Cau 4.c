//preprocessor - diractive
#include <stdio.h>
#include <string.h>

// ngay sinh
typedef struct{
	int day, month, year;
}ngay_sinh_t;

// ngay di lam
typedef struct{
	int day, month, year;
}ngay_lam_t;

// Ham struct ( tao kieu du lieu moi )
typedef struct {
	char maso[15];
	char ten[102];
	ngay_sinh_t ngay_sinh;   // struct ngay_sinh_t, bien ngay_sinh
	ngay_lam_t ngay_lam;	// struct ngay_lam_t, bien ngay_lam
} nhan_vien_t;   // du lieu nhan vien

//function prototype - Khai bao cac ham
nhan_vien_t input_nhan_vien(void);
void print_sinh_vien(sinhvien_t);
int inputString(char [], int );

//main function
int main(void) {
	// kieu du lieu moi nhan_vien_t, ten bien nv
	nhan_vien_t nv = input_nhan_vien();  // nhap du lieu nhan vien
	printf("\n");
	printf("Thong tin nhan vien:\n");
	print_nhan_vien (nv); // xuat du lieu sinh vien ( main )
	printf("\n");
	if( (2023-nv.ngay_sinh.year)>=40 && (2023-nv.ngay_lam.year>=5) ){
		printf("Danh scah nhan vien duoc tri an\n");
		print_nhan_vien (nv);
	}		
	return 0;
}

//function definition - Nhap du lieu nhan vien ( function )
nhan_vien_t input_nhan_vien(){
	// kieu du lieu moi nhan_vien_t, ten bien nv
	nhan_vien_t nv;
	
	printf("Nhap vao ma nhan vien (8 ky tu): ");
	inputString(nv.maso, 15);
	
	printf("Nhap vao ho va ten (toi da 100 ky tu):");
	inputString(nv.ten, 102);
	
	printf("Nhap vao ngay sinh (dd mm yyyy): ");
	scanf("%d %d %d", 
		&nv.ngay_sinh.day,
		&nv.ngay_sinh.month,
		&nv.ngay_sinh.year);
	
	printf("Nhap vao ngay di lam (dd mm yyyy): ");
	scanf("%d %d %d", 
		&nv.ngay_lam.day,
		&nv.ngay_lam.month,
		&nv.ngay_lam.year);
	return nv;	
}

// xuat du lieu sinh vien ( function )
void print_nhan_vien(nhan_vien_t nv)
{
	printf(" Ma nhan vien: %s\t\n Ho va ten: %s\t\n", nv.maso, nv.ten);
	printf("Ngay sinh: %d/%d/%d",nv.ngay_sinh.day, nv.ngay_sinh.month, nv.ngay_sinh.year);
	printf("Ngay di lam: %d/%d/%d",nv.ngay_lam.day, nv.ngay_lam.month, nv.ngay_lam.year);
}

// Ham nhap va kiem tra chuoi
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
