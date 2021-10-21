/* code calculates factorial of a number */
#include <stdio.h>
int fact(int);
int main(){
	int x = 5;
	if(fact(x) == -1){
		printf("%s\n", "[ERROR] The number should be non-negative!");
		return;
	}
	printf("%d! = %d", x, fact(x));
	return 0;
}
int fact(int n){
	int i, result = 1;
	if(n < 0)
		return -1;	
	else if (n <= 1)
		return 1;

	for (i = 2; i <= n; ++i){
		result *= i;
	}
	return result;
}
