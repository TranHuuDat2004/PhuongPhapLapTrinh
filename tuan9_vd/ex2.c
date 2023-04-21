#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main() {
    int m, n, c = 1;
    char s[SIZE];

    FILE *fIn,*fOut;
    fIn = fopen("input02.txt", "r");

    fOut = fopen("output02.txt", "w");
    if (fIn == NULL) {
        fprintf(fOut, "Error Reading File\n");
    }
    else {
        fscanf(fIn, "%d", &n);
        while(c <= n) { 
            fscanf(fIn, "%s", s);
            m = strlen(s);
            fprintf(fOut,"Length of %d string: %d\n",c,m);
            c++;
        }        
    }
    fclose(fIn);
    fclose(fOut);
    return 0;
}