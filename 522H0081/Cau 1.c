#include<stdio.h>
#include<math.h>

int main(){
	int sum = 0, i;
	int num;
	FILE *input, *output;
	input = fopen("input01.txt", "r");
	if (input == NULL) {
		fprintf(output, "Error Reading File\n");
        printf("Error Reading File\n");
	}
        
	for (i = 0; i<20; i++){
		fscanf(input, "%d", &num);
		sum = sum + num; 	
	}
	
	fclose(input);
	output = fopen("output01.txt", "w");
	fprintf(output, "%d", sum);
	fclose(output);
	return 0;
}
