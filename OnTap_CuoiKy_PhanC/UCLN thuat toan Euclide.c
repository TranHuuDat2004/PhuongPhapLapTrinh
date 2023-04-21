#include<stdio.h>
#include<math.h>

int UCLN(int a, int b ){
    int r = a % b;         // a = b*x + r;
    while (r!=0) {
        // Gan lai a = b, quay ve bai toan tim UCLN cua b và r
        a = b;  
        b = r;
        r = a % b;   // r la phan du cua phép chia a/b
    }
     
    return b;
}

int main(){
	int a, b, ketqua;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	ketqua = UCLN(a, b);
	printf("UCLN cua a va b la: %d", ketqua);
	return 0;
}
