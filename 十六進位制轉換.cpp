#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	printf("�п�J�Q���i����� : ");
	scanf("%x", &i);
	printf("�Q���i�� %#x = �Q�i�� %d\n", i ,i);
	printf("�Q�i�� %d = �K�i�� %#o", i, i);
	
	return 0;
}

/* %x ���Q���i����J��ƫ��O
	%o ���K�i�� 
	�[�W # ���N�q�� ���Q���P�K�i����ܤ覡��ŦX �L�̭쥻���ӭn������ܤ覡(16�i��� : 0x__�B8�i��� : 0__)*/ 
