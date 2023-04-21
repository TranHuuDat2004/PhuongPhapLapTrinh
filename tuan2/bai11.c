#include <stdio.h>
int main()
{
    int n, num, sodao = 0;
    printf("Vui long nhap so bat ki: ");
    scanf("%d", &n);
    num = n; 
    while(n != 0)
    {
        sodao = (sodao * 10) + (n % 10);
        n  /= 10;
    }
    if(sodao == num){
        printf("%d is palindrome.", num);
    }
    else{
        printf("%d is not palindrome.", num);
    }
    return 0;
}
