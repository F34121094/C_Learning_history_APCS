#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[30], str2[30];
	printf("新密碼 : ");
	gets(str1);
	printf("確認密碼 : ");
	gets(str2);
	
	if(strcmp(str1, str2) == 0)
		printf("下次登入請輸入新密碼 !");
	else 
		printf("密碼修改失敗!");
	
	return 0;
}
