#include<stdio.h>
#include<stdlib.h>

int main(){
	int x;
	
	printf("�п�J�@�Ӿ�� : ");
	scanf("%d", &x);
	
	if(x == 0) printf("%d �� �s", x);
	else if(x < 0) printf("%d �� �t��", x);
	else if(x > 0) printf("%d �� ����", x);
	
	return 0;
}
