#include <stdio.h>

void countDuplicate (int a[], int n, int k) {
    int i, c = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == k)  {
            c++;
        }
    }
    printf ("So lan xuat hien cua %d la: %d lan",k, c);
}

int main (void) {
    int numArr[50], n, k, i;
    printf ("Nhap so luong cua phan tu: ");
    scanf ("%d", &n);

    printf ("Nhap gia tri cua tung phan tu:\n");
    for (i = 0; i < n; i++) {
        printf ("Gia tri %d: ", i+1);
        scanf ("%d", &numArr[i]);
    }

    printf ("Nhap vao gia tri can dem: ");
    scanf ("%d", &k);
    countDuplicate (numArr, n, k);

    return 0;
}
