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

//�����ܼ� �P �ϰ��ܼ� ���Ľd������ 
