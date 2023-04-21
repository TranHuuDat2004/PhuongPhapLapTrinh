#include <stdio.h>

void in_thong_bao(double total, double money);

int main(void){

	int choice;
	double money;
	
	printf("Chon tu 1 - 5 :");
	scanf("%d", &choice);
	
	printf("Nhan so tien: ");
	scanf("%lf", &money);
	
	switch (choice){
		case 1:
			printf("San pham: chai coca\n");
			in_thong_bao(3000, money);
			printf("\nHen gap lai");
			break;
		case 2:
			printf("San pham: chai tra xanh\n");
			in_thong_bao(6000, money);
			printf("\nHen gap lai");
			break;
		case 3:
			printf("San pham: chai sting\n");
			in_thong_bao(4000, money);
			printf("\nHen gap lai");
			break;
		case 4:	
			printf("San pham: sua tuoi\n");
			in_thong_bao(5000, money);
			printf("\nHen gap lai");
			break;
		case 5:
			printf("San pham: chai nuoc suoi\n");
			in_thong_bao(3000, money);
			printf("\nHen gap lai");
			break;
	}
}

void in_thong_bao(double total, double money){
	if (total == money){
		printf("Cam on da su dung san pham");
	}
	else if (total < money){
		printf("Cam on da su dung san pham. So tien con lai la %lf", (money - total) );	
	}
	else {
		printf("Rat tiec so tien ban chua du de dung san pham nay");	
	}
}
