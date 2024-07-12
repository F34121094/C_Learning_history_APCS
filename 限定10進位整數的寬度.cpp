#include<stdio.h>
#include<stdlib.h>

int main(){
	int year, month, date;
	
	printf("請輸入日期(yyyy/mm/dd) : ");
	scanf("%4d/%2d/%2d", &year, &month, &date);
	printf("今天是%d/%d/%d", year, month, date);
	
	return 0;
} 
