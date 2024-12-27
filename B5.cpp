#include <stdio.h>

int isPrime(int n);
void printPrime(int x);

int main(){
	int a,b;
	printf("Moi nhap vao so nguyen A: ");	scanf("%d", &a);
	printf("Moi nhap vao so nguyen B: ");	scanf("%d", &b);
	printPrime(a);
	printPrime(b);
}

int isPrime(int n){
	if(n < 2)	return 0;
	for(int i=2;i*i<=n;i++){
		if(n % i == 0)	return 0;
	}
	return 1;
}

void printPrime(int x){
	if(isPrime(x))	printf("True\n");
	else	printf("False\n");
}
