#include <stdio.h>

int perfectNum(int n);
void printPerfect(int x);

int main(){
	int a,b;
	printf("Moi nhap vao so nguyen A: ");	scanf("%d", &a);
	printf("Moi nhap vao so nguyen B: ");	scanf("%d", &b);
	
	printPerfect(a);
	printPerfect(b);
}

int perfectNum(int n){
	int sum=1;
	for(int i=2;i*i<=n;i++){
		if(n % i == 0){
			sum += i;
			if(i != n / i){
				sum += n/i;
			}
		}
	}
	return(sum == n && n != 1);
}

void printPerfect(int x){
	if(perfectNum(x))	printf("True\n");
	else	printf("False\n");
}
