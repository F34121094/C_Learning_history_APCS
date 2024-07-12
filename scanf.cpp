#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2;
	printf("請輸入兩個整數 : ");
	scanf("%d%d", &n1, &n2);
	printf("n1 = %d, n2 = %d", n1, n2);
	
	return 0;	
} 

/*若把程式寫成 scanf ("請輸入兩個整數 : %d %d", &n1, &n2);
 系統不會自動顯示 請輸入兩個整數 : 這個字串必須由鍵盤來輸入*/
