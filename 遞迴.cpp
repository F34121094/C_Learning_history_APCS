#include<stdio.h>
#include<stdlib.h>

int fomula(int n){
	int sum;
	if(n <= 0 ){
		return 0; 		//�|�@���I�s���� return 0 �ɨ禡���� 
	}else{
		sum = n + fomula(n-1);
	}
}

int main(){
	int n = 100;
	int sum = fomula(n);
	printf("100 + 99 +...+ 3 + 2 + 1 = %d", sum);
	
	return 0;
}
