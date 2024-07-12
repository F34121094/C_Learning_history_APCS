#include<stdio.h>
#include<stdlib.h>

int main(){
	int x;
	
	printf("請輸入一個整數 : ");
	scanf("%d", &x);
	
	if(x == 0) printf("%d 為 零", x);
	else if(x < 0) printf("%d 為 負值", x);
	else if(x > 0) printf("%d 為 正值", x);
	
	return 0;
}
