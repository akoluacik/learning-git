#include <stdio.h>

void greetings(char []);

int main(){
	printf("%s\n", "Hello, World!");
	greetings("C");
	return 0;
}

void greetings(char name[]){
	printf("%s%s\n", "Hello, ", name);
}
