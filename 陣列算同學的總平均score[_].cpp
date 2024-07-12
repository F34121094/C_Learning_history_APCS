#include<stdio.h>
#include<stdlib.h>

int main(){
	int score[] = {76, 82, 53, 42, 79};
	int sum = 0;
	
	printf("\t座號\t成績\t結果\n");
	printf("\t=======================\n");
	for(int a = 0; a < 5; a++){
		printf("\t%d\t%d\t", a+1, score[a]);
		if(score[a] >= 60) printf("及格");
		else printf("不及格");
		printf("\n");
		sum += score[a];
	}
	printf("\t=======================\n");
	printf("\n\t總平均 : %.2f", (float)sum / 5);
	
	return 0;
} 

