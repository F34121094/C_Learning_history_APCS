#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, sum = 1;
	printf("輸入一個正整數 : ");
	scanf("%d", &a);
	
	printf("\n %d! = ", a);
	
	do{
		if(a == 1) printf("%d =", a);
		else 
			printf("%d * ", a);
			sum *= a;
			a--;
	}while(a >= 1);
	
	printf(" %d", sum);
	return 0;
} 
