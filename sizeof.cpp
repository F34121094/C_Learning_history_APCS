#include<stdio.h>

int main(){
	int num = 123;
	printf("int 佔的記憶體為 %d\n", sizeof(num));
	
	short a = 123;
	printf("short 佔的記憶體為 %d", sizeof(a));
	return 0;
}
