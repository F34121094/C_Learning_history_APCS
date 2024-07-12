#include<stdio.h>
#include<time.h>
#include<conio.h>

int main(){
	
	char tquit;
	time_t t1, t2;		//定義兩個時間函數 time(NULL)紀錄系統目前的時間，可以用於計算經過的時間 (用difftime函示) 
	clock_t ck1, ck2;		//clock是用來取得CPU的震盪時間 
	
	t1 = time(NULL);
	ck1 = clock();

	
	printf("開始計時，按 '/' 停止計時");
	while(tquit != '/'){
		tquit = getch();
	}
	t2=time(NULL);
	ck2 = clock();
	printf("\n\n計時結束\n\n");
	printf("系統經過 %d 秒\n",(int)difftime(t2,t1));
	printf("CPU共經過 %d Ticks",ck2-ck1);
	
	return 0;
}
