#include <stdio.h>
#include <math.h>

int main (void) {
    double xa, ya, xb, yb, d;
    printf ("Nhap xa: ");
    scanf ("%lf", &xa);
    printf ("Nhap xb: ");
    scanf ("%lf", &xb);
    printf ("Nhap ya: ");
    scanf ("%lf", &ya);
    printf ("Nhap yb: ");
    scanf ("%lf", &yb);
    d = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
    printf ("KHoang cach giua A va B: %lf", d);
    return 0;
}
