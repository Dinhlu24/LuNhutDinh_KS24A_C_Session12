#include <stdio.h>

int giaiThua(int n){
	int gt=n;
	while(--n){
		gt*=n;
	}
	return gt;
}

int main(){
	int n=5;
	
	printf("GIai thua cua %d: %d",n,giaiThua(n));
}
