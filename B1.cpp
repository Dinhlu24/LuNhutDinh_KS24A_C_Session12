#include <stdio.h>

int tong(int a,int b);

int main(){
	int a=3,b=10;
	printf("Tong cua a + b = %d",tong(a,b));
}

int tong(int a,int b){
	return a + b;
}
