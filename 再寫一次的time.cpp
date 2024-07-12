#include<stdio.h>
#include<time.h>
#include<conio.h>
int main(){
	time_t t1, t2;
	clock_t ck1, ck2;
	char get;
	
	t1 = time(NULL);
	ck1 = clock();
	printf("開始計時 按下 '/' 停止計時");
	while(get!='/'){
		get = getch();
	}
	t2 = time(NULL);
	ck2 = clock();
	printf("計時結束!!\n\n");
	printf("共經過 %d 秒\n", (int)difftime(t2, t1));		//記得difftime使用時比較大的要放在前面 看成減法 
	printf("CPU共經過 %d ticks", ck2 - ck1);
	
	return 0;
}
