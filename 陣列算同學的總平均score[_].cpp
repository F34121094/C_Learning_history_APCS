#include<stdio.h>
#include<stdlib.h>

int main(){
	int score[] = {76, 82, 53, 42, 79};
	int sum = 0;
	
	printf("\t�y��\t���Z\t���G\n");
	printf("\t=======================\n");
	for(int a = 0; a < 5; a++){
		printf("\t%d\t%d\t", a+1, score[a]);
		if(score[a] >= 60) printf("�ή�");
		else printf("���ή�");
		printf("\n");
		sum += score[a];
	}
	printf("\t=======================\n");
	printf("\n\t�`���� : %.2f", (float)sum / 5);
	
	return 0;
} 

