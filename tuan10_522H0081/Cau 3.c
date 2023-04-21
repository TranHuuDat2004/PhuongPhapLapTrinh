#include<stdio.h>
#include<math.h>

int main(){
	int day, month, year;
	
	printf("Nhap vao ngay: ");
	scanf("%d", &day);
	printf("Nhap vao thang: ");
	scanf("%d", &month);
	printf("Nhap vao nam: ");
	scanf("%d", &year);
	
	if (month < 1 || month > 13){
		printf("Du lieu khong hop le");
		return 0;
	}		
	
	else if (month == 2){
		//	Do la nam nhuan
		if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0) {
			if (day < 1 || day > 29){
				printf("Du lieu khong hop le");
				return 0;
			}
			
		}
		//	Khong phai la nam nhuan		
		else if((year % 4 != 0 && year % 100 ==0) || year % 400 != 0) {
			if (day < 1 || day > 28){
				printf("Du lieu khong hop le");		
				return 0;
			}
		}				
	}
	
	else if (month == 4 || month == 6 || month == 9 || month == 11){
		if (day < 1 || day > 30){
			printf("Du lieu khong hop le");
			return 0;
		}
			
	}
	
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
		if (day < 1 || day > 31){
			printf("Du lieu khong hop le");
			return 0;
		}
	
	printf("%d/%d/%d", day, month, year);
	return 0;
		
}
