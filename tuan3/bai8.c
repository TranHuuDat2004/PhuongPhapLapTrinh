#include <stdio.h>
#include <math.h>
int demso(int n){
	int so, sodem=0;
  	printf("Vui long nhap so bat ki:");
 	scanf("%d", &so);
 	while(so > 0)	{ 
  		 so = so / 10;
    	 sodem = sodem + 1;  
   }
  	
  	return sodem;
}
	
int main() {
	int so, x, n;
	x = demso(n);
    printf("co %d chu so ", x);
  	return 0;
}
