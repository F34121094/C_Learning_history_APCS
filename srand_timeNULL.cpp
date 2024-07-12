#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand((unsigned)time(NULL));
	for(int i = 1 ; i <= 4 ; i++){
		printf("第 %d 個亂數 : %d\n\n",i, rand()%(59-20+1)+20);
	}
	return 0;
}

/*要讓rand真的變成亂數必須使用srand函式
	其用法為 srand((unsigned)time(NULL)); 這是讓時間成為決定亂數的因子
	然後這個時候rand的用法為 rand%(n2-n1+1)+n1  可以定義一個由n1~n2的亂數產生器 
