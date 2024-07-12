#include<stdio.h>
#include<stdlib.h>

float average(int,int);		//這裡要先進行原型函式宣告，否則主函示會不知道 average 是啥 

int main(){
	int a, b;
	printf("請連續輸入兩個整數(由空格隔開) : ");
	scanf("%d %d",&a ,&b);
	average(a, b);
	//如果要再主函式裡 printf 的話，可以宣告一個變數(a)然後 a = average(a, b)再  printf a 即可 
	
	return 0;
} 

float average(int x1, int x2){
	float avg;
	avg = ((float)x1 + (float)x2) / 2;
	printf("\n兩整數的平均為 %.1f", avg);
	return avg;
}
