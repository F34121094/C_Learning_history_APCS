#include<stdio.h>
#include<stdlib.h>

int main(){
	int mon;
	printf("�п�J���(1~12) : ");
	scanf("%d", &mon);
	switch(mon){
		case 2:
		case 3:
		case 4:
			printf("%d�� �O�K�u",mon);
			break;
		case 5:
		case 6:
		case 7:
			printf("%d�� �O�L�u",mon);
			break;
		case 8:
		case 9:
		case 10:
			printf("%d�� �O��u",mon);
			break;
		case 11:
		case 12:
		case 1:
			printf("%d�� �O�V�u",mon);
			break;
		default:
			printf("��J���~");
	}
	return 0;
} 

/*�n�O�ocase�᭱�O�� :���O���� �M��default�]�O��: 
