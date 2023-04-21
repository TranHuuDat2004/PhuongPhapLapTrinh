#include <stdio.h>

int fact (int n)   {
    if (n <= 1) {
        return 1;
    }
    return n * fact (n-1);
}

int main (void) {
    int n;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    printf ("Factorial of entered number: %d", fact(n));
    return 0;
}