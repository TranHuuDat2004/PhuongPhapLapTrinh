#include <stdio.h>
int main(){
	int i = 1;
	int s = 0;
	int n = 36;
	while(i <=n){
		if(n % i == 0){
			s = s + (n % i); 
		}
		i++;
	}
	printf("%d", s);
	return 0;
}

