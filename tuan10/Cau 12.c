#include <stdio.h>

void swap (int *x, int *y)  {
    int t = *x;
    *x = *y;
    *y = t;
}

void selection_sort (int arr[], int n) {
    int i, j, k, t;
    for (i = 0; i < n; i++) {
        k = i;
        for (j = i+1; j < n; j++)   {
            if (arr[k] > arr[j])    {
                k = j;
            }
        }
        swap (&arr[i], &arr[k]);
    }
}

void bubble_sort (int arr[], int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++)   {
            if (arr[i] > arr[j])    {
                swap (&arr[i], &arr[j]);
            }
        }
    }
}

int main (void) {
    int numArr[50], n, i, c;
    printf ("Nhap so luong phan tu trong mang: ");
    scanf ("%d", &n);

    printf ("Nhap cac gia tri trong mang:\n");
    for (i = 0; i < n; i++) {
        printf ("Gia tri %d: ", i+1);
        scanf ("%d", &numArr[i]);
    }

    printf ("Chon mot trong cac tuy chon sap xep:\n");
    printf ("---1. Selection Sort---\n");
    printf ("----2. Bubble Sort----\n");
    printf ("Nhap vao sap xep can muon: ");
    scanf ("%d", &c);

    switch (c)  {
        case 1:
            selection_sort (numArr, n);
            break;
        case 2:
            bubble_sort (numArr, n);
            break;
        default:
            printf ("Du lieu khong hop le!");
            return 0;
    }

    for (i = 0; i < n; i++) {
        printf ("Gia tri %d: %d\n", i+1, numArr[i]);
    }
    return 0;
}
