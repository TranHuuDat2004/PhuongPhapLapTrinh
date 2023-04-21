#include<stdio.h>
#include<math.h>

// kiem tra doi xung cua chuoi bang de quy
int isSymmetrical(char input[], int length);

int main(){
	// TDD - Test Driven Development
	char test01[] = {"abcba"};
	char test02[] = {"abnmkgj"};
	char test03[] = {"abcddcba"};
	
	printf("Expected 1 , Actual %d\n", isSymmetrical(test01,5));
	printf("Expected 0 , Actual %d\n", isSymmetrical(test02,7));
	printf("Expected 1 , Actual %d\n", isSymmetrical(test03,8));
	
	return 0;
}

int isSymmetrical(char input[], int length){
	int i;
	int number_of_loop = length/2;
	
	for (i = 0; i < number_of_loop; i++){
		if (input[i] != input[length - 1 - i])
			return 0;
	}
	// length = 8
	// number_of_loop = 4
	// if (input[1] != input[8-1-1])
	return 1;
	
}
