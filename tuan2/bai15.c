#include <stdio.h>
int main(){
    int i, j, so, isPrime;
    printf("Vui long nhap so bat ki:");
    scanf("%d", &so);
    printf("Tat ca cac so nguyen to ma ban da nhap la:\n", so);
    for(i=2; i<=so; i++)
    {
     	 isPrime = 1; 
        for(j=2; j<=i/2; j++){
        	if(i%j==0){
            	isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d, ", i);
        }
    }
    return 0;
}

