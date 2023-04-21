#include <stdio.h>

int main (void) {
    int d, m, y, b = 0;
    printf ("Enter date of day, month and year:\n");
    scanf ("%d %d %d", &d, &m, &y);
    switch (m)  {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (d > 31) {
                b++;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (d > 30) {
                b++;
            }
            break;
        case 2:
            if (d > 29) {
                b++;
            }
            break;
        default:
            printf ("Month is invalid");
            return 0;
    }
    if (b)  {
        printf ("Day is invalid");
    }
    else    {
        printf ("Date entered is valid");
    }
    return 0;
}