#include<stdio.h>
#include<stdlib.h>

int fib(int n){
	if(n == 1 || n == 2){
		return 1; 		//當 n 為第一個或第二個的時候就回傳一個 1  
	}else{
		return fib(n-1) + fib(n-2);
	}
}

int main(){
	int n = 8;
	printf("\n費氏數列第 %d 項為 %d\n", n, fib(n));
	n = 20;
	printf("\n費氏數列第 %d 項為 %d\n", n, fib(n));
	
	return 0;
}
