#include<stdio.h>
#include<stdlib.h>
float off = 0.85;
void get_off(int);	//�ۭq�q�禡 


int main(){
	int price =  1200;
	printf("����� %d ���A�馩�� %.2f\n", price, off);
	get_off(price);
	return 0;
}

void get_off(int p){		//price �ܼƷ|�ǵ� p �޼� 
	printf("�馩�ᬰ %.0f ��\n", p * off);
}
