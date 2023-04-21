#include <stdio.h>
int main(){
	int ch = 'A';
	printf("%d\t %c\n", ch, ch); // 65      A
	printf("%d\t %c", ch + 32, ch + 32); // 97      a
	return 0;
}

