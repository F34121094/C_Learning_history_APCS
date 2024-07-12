#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, x = 1, i = 0;
	printf("輸入整數(1~100) : ");
	scanf("%d", &n);
	
	while(x < 100){
		if(x % n == 0){
			printf(" %3d,", x);		// %3d給一個數字3個空間讓其看起來不那麼擁擠 
			i++;
			if(i % 5 == 0) printf("\n");		//一個聰明的換行機制 
		}
		x++;
	}
	printf("\n由 1 到 100 之間有 %d 個整數可以被 %d 整除",100/n , n);
	
	return 0;
}
