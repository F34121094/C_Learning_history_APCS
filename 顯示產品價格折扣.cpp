#include<stdio.h>
#include<stdlib.h>
float off = 0.85;
void get_off(int);	//自訂義函式 


int main(){
	int price =  1200;
	printf("原價為 %d 元，折扣為 %.2f\n", price, off);
	get_off(price);
	return 0;
}

void get_off(int p){		//price 變數會傳給 p 引數 
	printf("折扣後為 %.0f 元\n", p * off);
}
