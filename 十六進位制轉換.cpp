#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	printf("請輸入十六進位制整數 : ");
	scanf("%x", &i);
	printf("十六進位制的 %#x = 十進位制的 %d\n", i ,i);
	printf("十進位制的 %d = 八進位制的 %#o", i, i);
	
	return 0;
}

/* %x 為十六進位制的輸入資料型別
	%o 為八進位制的 
	加上 # 的意義為 讓十六與八進位制的顯示方式能符合 他們原本應該要有的表示方式(16進位制 : 0x__、8進位制 : 0__)*/ 
