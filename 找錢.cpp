#include<stdio.h>
#include<stdlib.h>

int main(){
	int money;
	money = 1000 - 120 - 345;
	printf("���� %d ��", money);
	return 0;
} 

/*�޿�B��l
	&& �B ��AB�Ҭ��u�ɡA���G�~���u
	|| �� �u�nAB�䤤�@�ӬO�u�A���G���u 
	!  �D  �Y A ���u �h���G���� ; �Y A ���� �h A ���u 
	
	�b�{�����B�⤸���ȭY�� 1 �h���u
						�� 0 �h����
						
	!(1 <= 2)�� 1 <= 2 ���u�A�h�䵲�G���� 
