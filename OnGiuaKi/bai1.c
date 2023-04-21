#include<stdio.h>

int main(){
	int m, h;
	int tien;
	printf("Nhap so tien luong:");
	scanf("%d", &m);
	printf("Nhap so so gio lam:");
	scanf("%d", &h);
	if(h<=40)
		tien = m*h;
	else if((h>40) && (h<=45))
		tien = 40*m + (h-40)*1.8*m;
	else if((h>45) && (h<=50))
		tien = 40*m + 5*1.8*m + (h-45)*2.5*m;
	else if(h>50)
		tien = 40*m + 5*1.8*m + 5*2.5*m + (h-50)*2.5*m;
	printf("So tien nhan duoc là:%d",tien);
	return 0;
}
