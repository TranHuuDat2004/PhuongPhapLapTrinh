#include<stdio.h>
#include<math.h>

// tim max bang de quy

int findMax(int arr[], int count){
	int max; 
	// base case
	if ( count == 1)
		return arr[0];
	// recursive case
	max = findMax(arr, count - 1 );
	if(max > arr[count - 1])
		return max;
	else
		return arr[count - 1 ];
}

int main(){
	int arr[] = {1, 30, 20, 100, 96};
	int result = findMax(arr, 5);
	printf("Expected: %d, Actual %d", 100, result);
	return 0;
}
