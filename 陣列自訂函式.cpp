#include<stdio.h>
#include<stdlib.h>

void max2(int a[]){
	for(int i = 0 ; i < 6 ; i++){
		printf("%d\t", a[i]*2);
	}
	printf("\n\n");
	return;
}

void displayMax(int a[]){
	int temp;
	for(int i = 0 ; i < 5 ; i++){
		if(a[i] > a[i+1]){
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}else continue;
	}
	printf("MAX2 = %d", a[5] * 2);
	return;
}

int main(){
	int ary[6]={-103, 190, 0, 32, -46, 100};
	for(int i  = 0 ; i < 6 ; i++){
		printf("%d\t", ary[i]);
	}
	printf("\n\n");
	
	max2(ary);
	displayMax(ary);
	return 0;
} 
