#include<stdio.h>

int tong(int arr[], int n){
	int i, sum=0;
	for(i=0; i<5; i++)
    {
        if(arr[i]%2==0)
            sum=sum+arr[i];
    }
    return sum;
	
}

int main(){
    int arr[6],i,x, n;
    printf("Hay nhap 5 gia tri: ");
    for(i=0; i<5; i++)
        scanf("%d",&arr[i]);
    x=tong(arr, n);
    printf("Tong gia tri la: %d ",x);
    return 0;
}
