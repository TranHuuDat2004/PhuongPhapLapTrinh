#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int search(char *arr, int i, int key);
int Bsearch(char *arr, int i, int key);

int main () {
    FILE *fin;
    FILE *fout;

    int option, key, grade, n, i = 0;
    char fname[SIZE], arr[SIZE];
    printf("Enter a file name: ");
    gets(fname);

    fin = fopen("input03.txt", "r");
    fout = fopen("output03.txt", "w");

    if (fin == NULL) {
        printf("Can not open file!");
        exit(0);
    }
    else {
        printf("\n========MENU OF THE ALGORITHMS=======\n");
        printf("1. Sequential search.\n");
        printf("2. Binary search.");
        printf("\n=====================================\n");
        printf("\nChoose one of these search algorithms: ");
        scanf("%d", &option);
        printf("Enter a value to search for: ");
        scanf("%d", &key);

        for(i=0; i<SIZE; i++){
        	fscanf(fin, "%d", arr[i]);
		}

        if (option == 1) {
            if (search(arr, i, key) == -1) {
                fprintf(fout, "Not found!");
            }
            else {
                fprintf(fout, "The number %d exists at a[%d] in the array.", key, search(arr, i, key));
            }
        }
        else if (option == 2) {
            if (Bsearch(arr, i, key) == -1) {
                fprintf(fout, "Not found!");
            }
            else {
                fprintf(fout, "The number %d exists at a[%d] in the array.", key, Bsearch(arr, i, key));
            } 
        }
    }
    fclose(fin);
    fclose(fout);
    return 0;
}

int search(char *arr, int i, int key) {
    int j;
    for (j = 0; j <= i; j++) {
		if (key == arr[j])
			return j;
	}
    return -1;
}

int Bsearch (char *arr, int i, int key) {
    int low = 0, high = i - 1;
    while (low <= high) {
        int mid = (low + high)/2;
        if (key > arr[mid])
            low = mid + 1;
        else if (key == arr[mid]) {
            return mid;
            break;
        }
        else
            high = mid - 1;
    }
    return -1;
}
