#include <stdio.h>

int sum (int x) {
    if (x == 0) {
        return 1;
    }
    if (x == 1) {
        return 2;
    }
    if (x >= 1) {
        return 2*sum(x-1) + 3*sum(x-2);
    }
}

int main (void) {
    int x;
    printf ("Enter a positive integer value for x: ");
    scanf ("%d", &x);
    if (x < 0)  {
        printf ("Invalid value");
    }
    printf ("f(x) = %d", sum(x));
    return 0;
}