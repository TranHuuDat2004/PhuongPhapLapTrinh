#include <stdio.h>
#include <math.h>
long dec_bin(int dec)
{
    long bin = 0;
    int rem, temp = 1;

    while (dec!=0)
    {
        rem = dec%2;
        dec = dec / 2;
        bin= bin + rem*temp;
        temp = temp * 10;
    }
    return bin;
}

int main()
{
    int dec;
    printf("Vui long nhap so tu 1 den 999: ");
    scanf("%d", &dec);
    printf("So nhi phan la: %ld", dec_bin(dec));
    return 0;
}
