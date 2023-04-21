#include<stdio.h>
#include<string.h>

// Kiem tra co phai la chuoi doi xung
void check(char word[], int index){
	int len = strlen(word) - (index + 1);
	if (word[index] == word[len]){
		if (index + 1 == len || index == len){
			printf("Do la chuoi doi xung\n");
			return;
		}
		check(word, index + 1);
	}	
	else{
		printf("Do khong phai la chuoi doi xung\n");
	}
}

int main(){
	char word[15];
	printf("Nhap vao chuoi de kiem tra doi xung: ");
	scanf("%s", word);
	check(word, 0);
	 return 0;
}


