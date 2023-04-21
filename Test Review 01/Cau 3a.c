#include<stdio.h>
#include<math.h>

// tim trung binh bang de quy

double average(int arr[], int n){
	// base case
	if ( n == 1)
		return (float)arr[n-1];
	// recursive case
	else 
		return (float)( average(arr, n-1)*(n-1)+arr[n-1] )/n;
}
	
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	double result = average(arr, 5);
	printf("Expected: %d, Actual %.2lf", 3, result);
	return 0;
}
