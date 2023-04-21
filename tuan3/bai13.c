#include <stdio.h>
#include <math.h>
int armstrong(int num) {
    int socuoi, tong, sogoc, chuso;
    tong = 0;
    sogoc = num;
    chuso = (int) log10(num) + 1;
    while(num > 0)
    {
        socuoi = num % 10;
        tong = tong + round(pow(socuoi, chuso));
        num = num / 10;
    }
    return (sogoc == tong);
}

int main(){
    int num, x;
    printf("Vui long nhap so bat ki: ");
    scanf("%d", &num);
    if(armstrong(num))    {
        printf("%d la so Armstrong \n", num);
    }
    else{
        printf("%d khong phai la so Armstrong \n", num);
    }
    return 0;
}
