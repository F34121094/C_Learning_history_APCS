#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int i, X, sum;
	char ch;
	
	while(1){
		printf("\n請輸入一個正整數 : ");
		scanf("%d", &X);
		for(i = 1, sum = 0; ;i ++){
			sum += i;
			if(sum >= X){
				printf("1+2+...+n的總合大於等於%d的最小n值是%d\n", X, i);
				break;
			} 
		}
	printf("\n程式是否繼續執行(Y/任一鍵)?");
	ch = getche();
	if(ch == 'y' || ch == 'Y')
		continue;
		printf("\n程式結束!");
		break;
	}
	return 0;
}
