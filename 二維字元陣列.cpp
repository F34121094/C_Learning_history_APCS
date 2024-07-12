//一個英文字占用 1 byte 一個中文字占用 2 byte
#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[5][20]={"Peter", "小華", "Tom Smith", "保羅 安德森", "陳明仁"};
	for(int a = 0; a < 5; a++){
		printf("name[%d] = %s\n", a, name[a]);		//因為字元陣列的第二維度陣列是存放字元的，故不用將其打出來 
	} 
	return 0;
} 
