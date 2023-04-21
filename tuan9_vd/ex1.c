#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int n, m, i;

    FILE *fIn;
    FILE *fOut;
    fIn = fopen("input01.txt", "r");
    fOut = fopen("output01.txt","w+");

    if (fIn == NULL) {
        fprintf(fIn, "Error Reading File\n");
    }
    else {
        fscanf(fIn, "%d", &n);
        for (i = 0; i < n; i++) {
            fscanf(fIn, "%d,", &m );
            sum += m;
        }
        fprintf(fOut, "%d", sum);
    }
    fclose(fIn);
    fclose(fOut);
    return 0;
}

