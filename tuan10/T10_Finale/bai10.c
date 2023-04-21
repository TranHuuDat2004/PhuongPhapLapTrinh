#include <stdio.h>

int sum (int x) {
    x--;
    if (x == 0) {
        return 4;
    }
    if (x == 1) {
        return 7;
    }
    return 4*sum(x) - sum(x-1);
}

int main (void) {
    int x;
    printf ("Enter a positive integer value for x: ");
    scanf ("%d", &x);
    if (x < 0)  {
        printf ("Invalid value");
    }
    printf ("f(x) = %d", sum(x+1));
    return 0;
}