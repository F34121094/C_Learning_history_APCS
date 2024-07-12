#include<stdio.h>
#include<stdlib.h>

int main(){
	char st[30];
	printf("請輸入一個字串 : ");
	gets(st);
	printf("你輸入的字串為 : ");
	puts(st);
	
	return 0;
}

/*字串再輸入的時候會在最後一個字元後補一個 \0(NULL字元) 因此假設以 getchar(a)得到一個字元 A 其會佔 1 位記憶體位數
  而以 gets(a) 得到的一個字串 A 會佔 2 位記憶體位數
  記得是 gets() 跟 puts() 不是 get & put
  宣告字串時也要幫他定義一個空間 (這裡是30)*/ 
