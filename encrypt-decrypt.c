#include<stdio.h>

int encrypt(int);
int decrypt(int);

int main() {
	int n;
	printf("Enter an integer");scanf("%d", &n);
	printf("%d", encrypt(n));
	puts("");
	printf("%d", decrypt(encrypt(n)));
	return 0;
}

int encrypt(int n){
	
	int temp=0, encrypt=0,i;
	int arr[4]={0};
	while(n>0){
		temp = temp*10 + (n%10+7)%10;
		n /= 10;
	}
	for(i=0;i<4;i++){
		arr[i] = temp%10;
		temp /= 10;
	}
	for(i=0;i<=1;i++){
		temp = arr[i];
		arr[i] = arr[i+2];
		arr[i+2] = temp;
	}
	for(i=0;i<4;i++){
		encrypt = encrypt*10 + arr[i];
	}
	return encrypt;
}

int decrypt(int encrypt){
	int temp, arr[4], decrypt=0,i;
	for(i=3;i>=0;i--){
		arr[i] = encrypt%10;
		encrypt /= 10;
	}
	for(i=0;i<=1;i++){
		temp = arr[i];
		arr[i] = arr[i+2];
		arr[i+2] = temp;
	}
	for(i=0;i<4;i++){
		arr[i] = (arr[i]+3)%10;
	}
	decrypt = 0;
	for(i=0;i<4;i++){
		decrypt = decrypt*10 + arr[i];
	}
	return decrypt;
}