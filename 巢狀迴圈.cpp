#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1 = 5, n2 = 4, n3 = 3;
	int max;
	
	printf("�T���Ϊ��T����O�� %d, %d, %d\n", n1, n2, n3);
	if(n1 > n2){
		if(n1 > n3) max = n1;
		else max = n3; 
	}else{
		if(n2 > n3) max = n2;
		else max = n3;
	}
	printf("������G : �̤j�Ȭ� %d", max);
	
	return 0;
}
