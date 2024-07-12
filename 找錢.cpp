#include<stdio.h>
#include<stdlib.h>

int main(){
	int money;
	money = 1000 - 120 - 345;
	printf("應找 %d 元", money);
	return 0;
} 

/*邏輯運算子
	&& 且 當AB皆為真時，結果才為真
	|| 或 只要AB其中一個是真，結果為真 
	!  非  若 A 為真 則結果為假 ; 若 A 為假 則 A 為真 
	
	在程式中運算元的值若為 1 則為真
						為 0 則為假
						
	!(1 <= 2)的 1 <= 2 為真，則其結果為假 
