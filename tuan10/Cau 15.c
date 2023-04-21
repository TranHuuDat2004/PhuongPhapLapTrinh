#include <stdio.h>

int search (int a[], int n, int k) {
	int i;
    for (i=0; i < n; i++) {
        if (a[i] == k)  {
            return i;
        }
    }
    return -1;
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

    printf ("Gia tri can tim: ");
    scanf ("%d", &k);
    if (search(arr, n, k) == -1)   {
        printf ("Khong tim thay gia tri %d",k);
    }
    else    {
        printf ("Gia tri tim thay tai phan tu %d trong mang", search(arr, n, k));
    }
    return 0;
}
