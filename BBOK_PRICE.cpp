#include<stdio.h>
#include<stdlib.h>
const int BOOK_PRICE = 450;		//�� const �ŧi���欰 450   �� const �ŧi���ܼƭȤ��� 
#define BOOK_NAME " C�y����¦���׽� "		//�� #define �ŧi �L���W�r 

int main(){
	int num = 2;
	//BOOK_PRICE = 500;
	printf("%s %d�� �X�p %d ��", BOOK_NAME, num, num*BOOK_PRICE);
	return 0; 
}
