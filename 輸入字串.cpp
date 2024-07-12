#include<stdio.h>
#include<stdlib.h>

int main(){
	char cname[20], ename[20];		//宣告一個可以存放 20 個字元的陣列 
	printf("請輸入中文名字 : ");
	scanf("%s", &cname);
	printf("你的中文名字為 %s \n", cname);
	printf("\n");
	printf("請輸入英文名字 : ");
	scanf("%s", &ename);
	printf("你的英文名字為 %s \n", ename);
	
	return 0;
}
