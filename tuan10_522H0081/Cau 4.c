#include<stdio.h>
#include<string.h>
#define MAX 100

int ktdx(char input[], int length){
	int i;
	int number_of_loop = length/2;
	
	for (i = 0; i < number_of_loop; i++){
		if (input[i] != input[length - 1 - i])
			return 0;
	}

	return 1;
	
}

int main(){
	int n, length;
	char s[MAX];
	printf("Vui long nhap vao chuoi ki tu: ");
	fgets(s, MAX, stdin);
	n = ktdx(s, strlen(s-1));
	if (n == 1)
		printf("Do la chuoi doi xung");
	else if (n == 0)
		printf("Do khong phai la chuoi doi xung");
	return 0;
}
