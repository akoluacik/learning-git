/* code calculates factorial of a number */
#include <stdio.h>

int fact(int);

int main(){
	int x = 5;
	printf("%d! = %d", x, fact(x));
	return 0;
}

int fact(int n){
	int i, result = 1;
	for (i = 1; i < n; ++i){
		result *= i;
	}
	return result;
}
