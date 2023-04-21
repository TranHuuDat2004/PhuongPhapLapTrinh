#include<stdio.h>

int main(){
	int d,tien;
	printf("nhap quang duong chay la:");
	scanf("%d", &d);
	if(d<=1)
		tien = d*18000;
	else if((d>1)&&(d<=10))
		tien = 1*18000 + (d-1)*8000;
	else if((d>10)&&(d<=30))
		tien = 1*18000 + 9*8000 + (d-10)*6000;
	else if(d>30)
		tien = 1*18000 + 9*8000 + 20*6000 + (d-30)*4000;
	printf("so tien can phai tra la: %d", tien);
	return 0;
}
