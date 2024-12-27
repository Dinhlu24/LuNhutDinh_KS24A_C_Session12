#include <stdio.h>

void inMang(int a[],int n);

int main(){
	int n=10;
	int a[n]={1,2,3,4,5,6,7,8,9,10};
	inMang(a,n);
}

void inMang(int a[],int n){
	printf("Day la mang cua ban: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
