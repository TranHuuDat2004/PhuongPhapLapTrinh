#include <stdio.h>

int main (void) {
    int n, m, h;
    printf ("Nhap vao so giay: ");
    scanf ("%d", &n);

    m = n/60;
    n %= 60;
    h = m/60;
    m %= 60;

    printf ("Tong thoi gian la: %d gio %d phut %d giay", h, m, n);
    return 0;
}
