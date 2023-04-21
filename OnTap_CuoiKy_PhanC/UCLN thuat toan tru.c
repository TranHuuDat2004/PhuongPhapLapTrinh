#include<stdio.h>
#include<math.h>

// UCLN
int UCLN(int a, int b){
    while(a != b){  // Khi a con khac b
        if(a > b)  // neu a > b
            a = a - b;   // gan lai a
        else    // Truong hop b > a
            b = b - a;   // Gan lai b
    }
    return a; // return b;
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
