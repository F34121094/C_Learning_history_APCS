#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand((unsigned)time(NULL));
	for(int i = 1 ; i <= 4 ; i++){
		printf("�� %d �Ӷü� : %d\n\n",i, rand()%(59-20+1)+20);
	}
	return 0;
}

/*�n��rand�u���ܦ��üƥ����ϥ�srand�禡
	��Ϊk�� srand((unsigned)time(NULL)); �o�O���ɶ������M�w�üƪ��]�l
	�M��o�Ӯɭ�rand���Ϊk�� rand%(n2-n1+1)+n1  �i�H�w�q�@�ӥ�n1~n2���üƲ��;� 
