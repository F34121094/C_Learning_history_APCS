#include<stdio.h>
#include<stdlib.h>

int main(){
	int mon;
	printf("請輸入月份(1~12) : ");
	scanf("%d", &mon);
	switch(mon){
		case 2:
		case 3:
		case 4:
			printf("%d月 是春季",mon);
			break;
		case 5:
		case 6:
		case 7:
			printf("%d月 是夏季",mon);
			break;
		case 8:
		case 9:
		case 10:
			printf("%d月 是秋季",mon);
			break;
		case 11:
		case 12:
		case 1:
			printf("%d月 是冬季",mon);
			break;
		default:
			printf("輸入錯誤");
	}
	return 0;
} 

/*要記得case後面是接 :不是分號 然後default也是接: 
