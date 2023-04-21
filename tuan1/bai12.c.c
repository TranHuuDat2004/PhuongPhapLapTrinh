#include<stdio.h>
#include<math.h>
int main()
{
		int x,y,z;
		printf("nhap x:");
		scanf("%d", &x);
		printf("nhap y:");
		scanf("%d", &y);
		printf("nhap z:");
		scanf("%d", &z);
		if(x+y+z==180){printf("Do la hinh tam giac");
		}
		else {printf("Do khong phai la hinh tam giac");
		}
		return 0;
}
