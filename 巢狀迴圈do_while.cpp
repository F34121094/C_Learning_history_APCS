#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int a;
	char b;
	do{
		printf("\n�n��X�X��*��(1~9) : ");
		scanf("%d", &a);
		printf("��X : ");
		int i =1;
		for(i; i <= a; i++){
			printf("*");
		}
		printf("\n�{���O�_�~�����(Y/���@��)?");
		b = getche();
		
	}while(b == 'Y' || b == 'y');
	
	return 0;
}
