#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char ch;
	printf("\n�п�J�@�Ӧr�� : ");
	ch = getchar();
	printf("����J���r���O : ");
	putchar(ch);
	printf("\n");
	
	printf("\n�п�J�@�Ӧr�� : ");
	ch = getche();
	printf("\n����J���r���O : ");
	putchar(ch);
	printf("\n");
	
	printf("\n�п�J�@�Ӧr�� : ");
	ch = getch();
	printf("\n����J���r���O : ");
	putchar(ch);
	printf("\n");
	return 0;
}


/* ���ެO getchar getche getch �n�Ϊ���X�Ҭ� putchar
	�b dev c++�sĶ�����A�����ϥ�<conio.h>�禡�w �~��ϥ�getche getch 
	
	getch ���|��ܧA��J���r�� �ӷ|��ܩ�putchar()��
	getche ���|���A��enter 
	getchar �|���A��enter���L�u�|�s�@�Ӧr�� 
*/ 
