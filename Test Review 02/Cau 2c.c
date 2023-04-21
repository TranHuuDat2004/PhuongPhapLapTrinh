#include <stdio.h>
#include <string.h>

int main(){
	char a[100] = "", b[100] = "", c[100] = "abcdefg";
	strncpy(a, c, 2);   // dan chuoi c nam vi tri thu 2 (b) 
	strncpy(b, "12345", 7); // so 7 vo nghia vi khong co chuoi de dan
	printf(" a: %s\n b: %s\n c: %s\n", a,b,c);
	
/*	
	Ket qua:
	a = ab
	b = 12345
	c = abcdefg
*/
	return 0;
}
	
