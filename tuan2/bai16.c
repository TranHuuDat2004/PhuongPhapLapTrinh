#include <stdio.h>
#include <math.h>
int main()
{	int n, socuoi, chuso, tong, i, end;
    printf("Vui long nhap so bat ki: ");
    scanf("%d", &end);
    printf("armstrong number tu 1 den %d la: \n", end);
    for(i=1; i<=end; i++){
        tong = 0;
        n = i;
        chuso = (int) log10(n) + 1;
        while(n > 0){
            socuoi = n % 10;
            tong = tong + ceil(pow(socuoi, chuso));
            n = n/ 10;
        }
        if(i == tong) {
            printf("%d, ", i);
        }
    }
    return 0;
}
