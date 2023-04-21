#include <stdio.h>
#include <math.h>
int main(){
    int n, swap;
    int sodau, socuoi, chuso;
    printf("Vui long nhap so bat ki:\n");
    scanf("%d", &n);
    socuoi  = n % 10; 
    chuso     = (int) log10(n); 
    sodau = (int) (n/ pow(10, chuso));
    swap  = socuoi;
    swap *= (int) round(pow(10, chuso));
    swap += n % ((int)round(pow(10, chuso)));
    swap -= socuoi;
    swap += sodau;
    printf("So ban dau la = %d \n", n);
    printf("So sau khi hoan doi la: %d", swap);
    return 0;
}
