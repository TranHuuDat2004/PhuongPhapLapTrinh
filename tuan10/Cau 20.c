#include <stdio.h>

void caua (int n)   {
    int i, s = 0;
    for (i = 1; i <= n; i++) {
        s += 2*i + 1;
    }
    printf ("Ket qua cau a: %d\n", s);
}

int giaithua (int i)  {
    int j, s = 1;
    for (j = 1; j <= i; j++) {
        s *= j;
    }
    return s;
}

void caub (int n)   {
    int i, s = 0;
    for (i = 1; i <= n; i++) {
        s += giaithua(i) + 1;
    }
    printf ("Result sigma b: %d\n", s);
}

void cauc (int n)   {
	int i;
    float s = 0;
    for (i = 1; i <= n; i++) {
        s += (float) (2*i + 1) / i;
    }
    printf ("Result sigma c: %f", s);
}

int main (void) {
    int n;
    printf ("Nhap vao gia tri n: ");
    scanf ("%d", &n);
    caua(n);
    caub(n);
    cauc(n);
    return 0;
}
