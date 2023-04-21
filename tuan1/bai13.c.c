
#include <stdio.h>
#include <math.h>
#define A "\nXep loai A"
#define B "\nXep loai B"
#define C "\nXep loai C"
#define D "\nXep loai D"
#define E "\nXep loai E"
#define F "\nXep loai F"

int main()
{
    float toan;
    float ly;
    float hoa;
    float sinh;
    float maytinh;
    float dtb;
 
    printf("\nNhap diem toan = ");
    scanf("%f", &toan);
    printf("\nNhap diem ly = ");
    scanf("%f", &ly);
    printf("\nNhap diem hoa = ");
    scanf("%f", &hoa);
	printf("\nNhap diem sinh = ");
    scanf("%f", &sinh);
    printf("\nNhap diem may tinh = ");
    scanf("%f", &maytinh);
 
    dtb = (toan + ly + hoa + sinh + maytinh) / 5;
    printf("\nDTB = %.2f", dtb);
    if (dtb < 4)
    {
        printf(F);
    }else if (dtb < 6){
        printf(E);
    }else if(dtb < 7){
        printf(D);
    }else if(dtb < 8){
        printf(C);
    }else if(dtb < 9){
        printf(B);
    }
	else{
        printf(A);
    }
    return 0;
}
