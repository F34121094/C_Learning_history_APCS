#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("�п�J�@�Ӿ�ƭ� : ");
	
	scanf("%d", &a);
	printf("%d �O ", a);
	printf("%s",(a > 0)?"����":((a == 0)?"�s":"�t��"));
	
	return 0;
} 

/*��ı�o�i�H�⥦�z�Ѭ� (a > 0)? �b�� a �j�� 0 ��?�p�G�O�N��X����*/ 
