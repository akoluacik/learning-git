#include<stdio.h>
#include<math.h>
int main(){
	int p=61, q=53;
	int n = (p)*(q); // mod value
	int tot = (p-1)*(q-1);
	int e = 17; // common key
	int d = 2753; // private power
	
	double message;
	printf("Enter the message: "); scanf("%lf", &message);
	double m = 1783;
	unsigned int encrypted = fmod(pow(m,e), n);
	printf("encrypted:%lf\n", encrypted);
	unsigned int decrypted = fmod(pow(encrypted, d), n);
	printf("Decrypted:%lf\n", decrypted);
	return 0;
}