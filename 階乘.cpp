#include<stdio.h>
#include<stdlib.h>
int f(int a){
	if(a >= 1){
		return a * f(a-1); 
	}else return 1;		//回傳一個 1 才不會讓階乘的結果變成 0 
}
int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	printf("\n%d ! = ", n);
	int total = f(n);
	printf("%d", total);
	return 0;
}
