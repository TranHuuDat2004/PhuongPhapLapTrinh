#include <stdio.h>

void bnrCnv (int n) {
    if (n < 2)  {
        printf ("%d", n);
        return;
    }
    int bnr = n % 2;
    n /= 2;
    bnrCnv (n);
    printf ("%d", bnr);
}

int main (void) {
    int n;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    bnrCnv (n);
    return 0;
}