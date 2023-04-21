#include<stdio.h>


void dao_arr(int array[], int n){
	int i;
  	for(i=0; i<n; i++){
  	printf("%d ",array[i]);
  	}
  	printf("\n"); 
}
 
int main(){
	
  	int x, array[6];
  	printf("Hay nhap 5 gia tri: ");
    for(x=0; x<5; x++)
        scanf("%d", &array[x]);
  	int temp, length = 5;

  	int i=0;         
  	int j=length-1;  

  	printf("Original array:   ");
  	dao_arr(array, length);


  	while(i<j){

    temp = array[i];
    array[i] = array[j];
    array[j] = temp;


    i++;  
    j--;  
  }


  	printf("Reverse of array: ");
	dao_arr(array, length);

  	return 0;
}
