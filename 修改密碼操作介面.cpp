#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[30], str2[30];
	printf("�s�K�X : ");
	gets(str1);
	printf("�T�{�K�X : ");
	gets(str2);
	
	if(strcmp(str1, str2) == 0)
		printf("�U���n�J�п�J�s�K�X !");
	else 
		printf("�K�X�ק異��!");
	
	return 0;
}
