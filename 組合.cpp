#include<stdio.h>
#include<stdlib.h>
int f(int a, int b){
	if(b == 0 || a == b){
		return 1;
	}else return f(a-1, b-1) + f(a-1 ,b);
		//C 5 取 2 從5個不同的裡面挑2個 
}
int main(){
	int a, b;
	while(1){
		printf("a = ");
		scanf("%d", &a);
		printf("b = ");
		scanf("%d", &b);
		if(a > 0 && b > 0 && a >= b) break;
		else printf("資料輸入不符，請重新輸入"); continue; 
	}
	int ans = f(a,b);
	printf("\n組合 C(a,b) = %d", ans);
	
	return 0;
}
