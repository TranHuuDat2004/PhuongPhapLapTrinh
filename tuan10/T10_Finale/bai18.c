#include <stdio.h>

void find_max (int a[], int n) {
    int i, t = a[0];
    for (i = 1; i < n; i++) {
        if (t < a[i])   {
            t = a[i];
        }
    }
    printf ("Gia tri lon nhat trong mang la: %d", t);
}

int main (void) {
    int n, k, i, arr[50];
    printf ("Nhap so luong cua phan tu: ");
    scanf ("%d", &n);

    printf ("Nhap gia tri cua tung phan tu:\n");
    for (i = 0; i < n; i++) {
        printf ("Gia tri %d: ", i+1);
        scanf ("%d", &arr[i]);
    }

    find_max(arr, n);
    return 0;
}
