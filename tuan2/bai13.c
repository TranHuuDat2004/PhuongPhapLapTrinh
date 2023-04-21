#include <stdio.h>
#include <math.h>

int main()
{
    int originalNum, num, lastDigit, digits, sum;
    printf("Nhap so bat ki: ");
    scanf("%d", &num);

    sum = 0;
    originalNum = num;
    digits = (int) log10(num) + 1;

    while(num > 0){
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
    }

    if(originalNum == sum) {
        printf("%d la so armstrong", originalNum);
    }
    else{
        printf("%d khong phai la so armstrong", originalNum);
    }
    return 0;
}
