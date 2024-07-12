#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int a;
	char b;
	do{
		printf("\n要輸出幾個*號(1~9) : ");
		scanf("%d", &a);
		printf("輸出 : ");
		int i =1;
		for(i; i <= a; i++){
			printf("*");
		}
		printf("\n程式是否繼續執行(Y/任一鍵)?");
		b = getche();
		
	}while(b == 'Y' || b == 'y');
	
	return 0;
}
