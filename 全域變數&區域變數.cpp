#include<stdio.h>
#include<stdlib.h>
void fun(int);
int x = 0;

int main(){
	int b = 3;
	fun(b);
	b = 6;
	fun(b);
	b = 9;
	fun(b);
	return 0;
}

void fun(int a){
	int b = 1;
	printf("%d + %d + %d = %d\n", a, b, x, a + b + x);
	x++;
	b++;
}

//全域變數 與 區域變數 有效範圍的釋例 
