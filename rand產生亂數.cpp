#include<stdio.h>
#include<stdlib.h>

int main(){
	for(int i = 1 ; i<=5 ; i++){
		printf("第 %d 個亂數 : %d\n\n", i, rand());
	}
	return 0;
} 

//使用rand每次產生的亂數結果都相同 
