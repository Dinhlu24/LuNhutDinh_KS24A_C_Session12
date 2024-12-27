#include <stdio.h>

int timMax(int a[],int n);

int main(){
	int n=10,a[n]={2,3,11,5,6,0,9,1,55,7};
	printf("Day la gia tri lon nha trong mang cua ban: %d",timMax(a,n));
}

int timMax(int a[],int n){
	int maxValue=a[0];
	for(int i=1;i<n;i++){
		if(maxValue < a[i])	maxValue = a[i];
	}
	return maxValue;
}
