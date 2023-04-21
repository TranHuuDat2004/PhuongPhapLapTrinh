#include <stdio.h>
int main()
{
    int i, j, end, tong;
    printf("Vui long nhap so bat ki:");
    scanf("%d", &end);
    printf("Perfect numbers tu 1 den %d la:\n", end);
    for(i=1; i<=end; i++){
        tong = 0;
        for(j=1; j<i; j++){
            if(i % j == 0){
                tong += j;
            }
        }
        if(tong == i){
            printf("%d, ", i);
        }
    }
    return 0;
}

