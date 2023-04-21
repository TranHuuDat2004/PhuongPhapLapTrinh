#include <stdio.h>
int  main(){
  	int n,i,sum;
  	int mn,mx;
  	do{ 
		printf("Vui long nhap so duong:");
		scanf("%d", &n);
		}
		while (n<=0);
    sum = 0;
 	printf("Uoc so duong la : ");
    for (i=1; i<n; i++) {
      	if(n%i==0) {
         	sum=sum+i;
         	printf("%d  ",i);
         	}
       }
	printf("\nTong cac so chia là : %d",sum);
    if(sum==n)
      	printf("\n%d la so hoan hao ",n);
    else
      	printf("\n%d khong phai la so hoan hao", n);
	printf("\n");
	return 0;
}
