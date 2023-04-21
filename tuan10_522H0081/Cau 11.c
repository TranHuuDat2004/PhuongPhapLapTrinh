#include <stdio.h>

void sum (int arr[], int n) {
    int i, s = 0;
    for (i = 0; i < n; i++) {
        s += arr[i];
    }
    printf ("Tong gia tri cua cac phan tu la: %d", s);
}

int main (void) {
    int numArr[50], n, i;
    printf ("Nhap so phan tu cua mang: ");
    scanf ("%d", &n);
    printf ("Nhap cac so trong phan tu:\n");
    for (i = 0; i < n; i++) {
        printf ("Gia tri %d: ", i+1);
        scanf ("%d", &numArr[i]);
    }
    sum(numArr, n);
    return 0;
}
