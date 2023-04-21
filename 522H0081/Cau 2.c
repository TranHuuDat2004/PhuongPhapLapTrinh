#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
	int num_a, num_b, num_c, num_d, num_e;
	char a[MAX], b[MAX], c[MAX], d[MAX], e[MAX];
	FILE *input, *output;
	
	input = fopen("input02.txt", "r");
	output = fopen("output02.txt", "w");
	
	if (input == NULL) {
		fprintf(output, "Error Reading File\n");
        printf("Error Reading File\n");
	}
	
	fgets(a, MAX, input);
	fgets(b, MAX, input);
	fgets(c, MAX, input);
	fgets(d, MAX, input);
	fgets(e, MAX, input);
	
	num_a = strlen(a) -1 ;
	num_b = strlen(b) -1 ;
	num_c = strlen(c) -1 ;
	num_d = strlen(d) -1 ;
	num_e = strlen(e) -1 ;
	
	fprintf(output,"do dai cua moi chuoi la: %d %d %d %d %d",num_a, num_b, num_c, num_d, num_e);
	fclose(input);
	fclose(output);
	return 0;
}
	
	
	
