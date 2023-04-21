#include<stdio.h> 

int f(int a, int b){     
	if(a > b) return 0;     
	if(a == b) return 1;     
	return b + f(a,b - 1); 
} 	

int main() {
    printf("%d\n",f(10,20));    // 20 + 19 + 18 + 17 + 16 +... + 12 + 11 + 1 = 156; vi a = b = 10
	printf("%d\n",f(30,40));    // 40 + 39 + 38 + 37 + 36 +... + 32 + 31 + 1 = 356;  
	printf("%d",  f(50,60));    // 60 + 59 + 58 + 57 + 56 +... + 52 + 51 + 1 = 556; 
	return 0; 
} 

