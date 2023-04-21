#include <stdio.h>
int tong=0,sotam;
int hamdao(int n){
  	if(n){
    	sotam=n%10;
    	tong=tong*10+sotam;
    	hamdao(n/10);
  	}
  	else
    	return tong;
  	return tong;
}

int main(){
  	int x,sodao;
  	printf("Vui long nhap so bat ki:");
  	scanf("%d",&x);
  	sodao=hamdao(x);
  	printf("So sau khi dao la:%d",sodao);
  	return 0;
}
