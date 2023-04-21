#include<stdio.h>
#include<math.h>

// tinh bieu thuc bang de quy
double f(int x){
	if (x == 0)
		return 1;
	else if (x>0){
		return 2*f(x-1) + 3/4;
	}
}

int main(){
	int x;
	double ketqua;
	ketqua = f(3);
	printf("Ket qua %.2lf:", ketqua);
	return 0;
}


