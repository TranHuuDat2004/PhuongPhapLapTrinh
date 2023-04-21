#include <stdio.h>

int main() {
	FILE *infile, *outfile;
	int n, dc, dg, ld;
	char w[6];
	
	infile = fopen("input.inp", "r");
	outfile = fopen("output2.out", "w");
	
	// nhap file
	fscanf(infile, "%d %d %d %d %s", &n, &dc, &dg, &ld, &w);
	fclose(infile);
	
	// xuat file
	fprintf(outfile, "%d %d %d %d %s", n, dc, dg, ld, w);
	fclose(outfile);
	
	return 0;

}
