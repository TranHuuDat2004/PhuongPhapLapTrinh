#include <stdio.h>
#include <math.h>
int Palindrome(int num);
int main(){
    int num;
    printf("Vui long nhap so bat ki: ");
    scanf("%d", &num);
    if(Palindrome(num) == 1)
    {
        printf("%d la so palindrome \n", num);
    }
    else
    {
        printf("%d khong phai la so palindrome\n", num);
    }
    return 0;
}

int Palindrome(int n){
	int sotam,tong;
  	if(n){
    	sotam=n%10;
    	tong=tong*10+sotam;
    	Palindrome(n/10);
  	}
  	else
    	return tong;
  	return tong;
}

