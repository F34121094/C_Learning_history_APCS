//�@�ӭ^��r�e�� 1 byte �@�Ӥ���r�e�� 2 byte
#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[5][20]={"Peter", "�p��", "Tom Smith", "�Où �w�w��", "������"};
	for(int a = 0; a < 5; a++){
		printf("name[%d] = %s\n", a, name[a]);		//�]���r���}�C���ĤG���װ}�C�O�s��r�����A�G���αN�䥴�X�� 
	} 
	return 0;
} 
