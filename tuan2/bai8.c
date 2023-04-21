#include <stdio.h>
int main() {
    int so, sodem=0;
  	printf("Vui long nhap so bat ki:\n");
 	 scanf("%d", &so);
 	 while(so > 0)	{ 
  		 so = so / 10;
    	 sodem = sodem + 1;  
   }
  	printf("\n Tong cac chu so la: %d", sodem);
  	return 0;
}
