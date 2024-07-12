#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char ch;
	printf("\n請輸入一個字元 : ");
	ch = getchar();
	printf("所鍵入的字元是 : ");
	putchar(ch);
	printf("\n");
	
	printf("\n請輸入一個字元 : ");
	ch = getche();
	printf("\n所鍵入的字元是 : ");
	putchar(ch);
	printf("\n");
	
	printf("\n請輸入一個字元 : ");
	ch = getch();
	printf("\n所鍵入的字元是 : ");
	putchar(ch);
	printf("\n");
	return 0;
}


/* 不管是 getchar getche getch 要用的輸出皆為 putchar
	在 dev c++編譯器中，必須使用<conio.h>函式庫 才能使用getche getch 
	
	getch 不會顯示你鍵入的字元 而會顯示於putchar()中
	getche 不會等你按enter 
	getchar 會等你按enter但他只會存一個字元 
*/ 
