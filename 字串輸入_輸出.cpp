#include<stdio.h>
#include<stdlib.h>

int main(){
	char st[30];
	printf("�п�J�@�Ӧr�� : ");
	gets(st);
	printf("�A��J���r�ꬰ : ");
	puts(st);
	
	return 0;
}

/*�r��A��J���ɭԷ|�b�̫�@�Ӧr����ɤ@�� \0(NULL�r��) �]�����]�H getchar(a)�o��@�Ӧr�� A ��|�� 1 ��O������
  �ӥH gets(a) �o�쪺�@�Ӧr�� A �|�� 2 ��O������
  �O�o�O gets() �� puts() ���O get & put
  �ŧi�r��ɤ]�n���L�w�q�@�ӪŶ� (�o�̬O30)*/ 
