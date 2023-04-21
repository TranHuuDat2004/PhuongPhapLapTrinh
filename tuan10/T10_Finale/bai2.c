#include <stdio.h>
#define PI 3.14

int main (void) {
    double P, r, S;
    printf ("Nhap chu vi hinh tron: ");
    scanf ("%lf", &P);
    r = P / (2*PI);
    S = PI * r*r;
    printf ("Dien tich hinh tron la: %lf", S);
    return 0;
}
