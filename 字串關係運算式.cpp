#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char st1[]="ABC", st2[]="ABCD";
	printf("%d\n", strcmp(st1, "ABC"));
	printf("%d\n", strcmp(st1, st2));
	printf("%d\n", strcmp(st2, st1));
	printf("\n%d\n", strcmp(st1, "ABCDEFG"));
	
	return 0;
}

/* �b�ϥΦr�����Y�B�⦡ strcmp() �ɡA�ݤޤJ <string.h> �禡�w 
	strcmp()���G��0���۵� �t�Ȭ��p�� ���Ȭ��j��*/ 
