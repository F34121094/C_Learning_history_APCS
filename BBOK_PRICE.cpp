#include<stdio.h>
#include<stdlib.h>
const int BOOK_PRICE = 450;		//用 const 宣告價格為 450   用 const 宣告的變數值不變 
#define BOOK_NAME " C語言基礎必修課 "		//用 #define 宣告 他的名字 

int main(){
	int num = 2;
	//BOOK_PRICE = 500;
	printf("%s %d本 合計 %d 元", BOOK_NAME, num, num*BOOK_PRICE);
	return 0; 
}
