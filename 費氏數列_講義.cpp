#include<stdio.h>
#include<stdlib.h>

int fib(int n){
	if(n == 1 || n == 2){
		return 1; 		//�� n ���Ĥ@�өβĤG�Ӫ��ɭԴN�^�Ǥ@�� 1  
	}else{
		return fib(n-1) + fib(n-2);
	}
}

int main(){
	int n = 8;
	printf("\n�O��ƦC�� %d ���� %d\n", n, fib(n));
	n = 20;
	printf("\n�O��ƦC�� %d ���� %d\n", n, fib(n));
	
	return 0;
}
