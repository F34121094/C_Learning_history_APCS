#include<stdio.h>
#include<stdlib.h>

int main(){
	float a = 15.6;
	float b = 17.8;
	
	int produce = (int)a + (int)b;
	printf("A廠完成%d台，B廠完成%d台，合計%d台", (int)a, (int)b, produce);
	
	return 0;
} 

//這個為強制資料型別轉換範例 
