#include<stdio.h>
#include<stdlib.h>

int main(){
	int year, month, date;
	
	printf("�п�J���(yyyy/mm/dd) : ");
	scanf("%4d/%2d/%2d", &year, &month, &date);
	printf("���ѬO%d/%d/%d", year, month, date);
	
	return 0;
} 
