#include <stdio.h>
#include <string.h>

int main(){
	char a[20], b[20];
	
	strcpy(a, "Hello!");
	strcpy(b, "Have a nice day!");
	
	strcat(a, b);  // Them chuoi b vao chuoi a ( KHong co dau cach )
	printf("%s", a); // Hello!Have a nice day! 
	
	return 0;
}
