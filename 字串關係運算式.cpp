#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char st1[]="ABC", st2[]="ABCD";
	printf("%d\n", strcmp(st1, "ABC"));
	printf("%d\n", strcmp(st1, st2));
	printf("%d\n", strcmp(st2, st1));
	printf("\n%d\n", strcmp(st1, "ABCDEFG"));
	
	return 0;
}

/* 在使用字串關係運算式 strcmp() 時，需引入 <string.h> 函式庫 
	strcmp()結果為0為相等 負值為小於 正值為大於*/ 
