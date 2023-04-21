#include <stdio.h>

void even_sum (int a[], int n) {
    int i, s = 0;
    for (i= 0; i < n; i++) {
        if (a[i] % 2 == 0)  {
            s += a[i];
        }
    }
    printf ("Tong gia tri chan trong mang la: %d", s);
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

    even_sum(arr, n);
    return 0;
}
