#include <stdio.h>
#include <string.h>

int chkSym (char *s)    {
    int i, n = strlen(s);
    for (i = 0; i < n/2; i++)   {
        if (s[i] != s[n-i-1])   {
            return 0;
        }
    }
    return 1;
}

int main (void) {
    char str[20];
    scanf ("%s", &str);
    if (chkSym (str))  {
        printf ("1");
    }
    else    {
        printf ("0");
    }
    return 0;
}