#include <stdio.h>

int giaiThua(int n);

int main(){
	int n=5;
	
	printf("Giai thua cua %d: %d",n,giaiThua(n));
}

int giaiThua(int n){
	int gt=n;
	while(--n){
		gt*=n;
	}
	return gt;
}
