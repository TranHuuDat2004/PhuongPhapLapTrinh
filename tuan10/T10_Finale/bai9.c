#include <stdio.h>

int sum (int x) {
    if (x == 0) {
        return 3;
    }
    if (x == 1) {
        return 5;
    }
    if (x >= 1) {
        return sum(x-1) + 2*sum(x-2);
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