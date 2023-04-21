#include <stdio.h>
#include<math.h>
int main(){
		int songay,sonam,sotuan,num1,num2;
		printf("Nhap so ngay can chuyen doi:");
		scanf("%d",&songay);
		
		sonam = songay/365;
		num1 = songay-(sonam*365);
		sotuan = num1/7;
		num2 = num1-(sotuan*7);
		
		printf("so nam:%d \n",sonam);
		printf("so tuan:%d \n",sotuan);
		printf("so ngay:%d \n",num2);
		return 0;
		}
		
