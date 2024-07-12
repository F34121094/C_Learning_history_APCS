#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("請輸入一個整數值 : ");
	
	scanf("%d", &a);
	printf("%d 是 ", a);
	printf("%s",(a > 0)?"正數":((a == 0)?"零":"負數"));
	
	return 0;
} 

/*我覺得可以把它理解為 (a > 0)? 在說 a 大於 0 嗎?如果是就輸出正數*/ 
