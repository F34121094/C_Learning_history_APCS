#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, sum = 1;
	printf("��J�@�ӥ���� : ");
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
