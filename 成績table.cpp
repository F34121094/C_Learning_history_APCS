#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[5][20] = {"John","Kent","Mary","Tom","Helen"};
	int score[5][3]; 
	for(int a = 0 ; a < 5 ; a++){
		printf("��J %s �� �p���B�L�n���B�^�� ���Z(�ΪŮ�j�}) : ",name[a]);
		scanf("%d %d %d",&score[a][0],&score[a][1],&score[a][2]);
		printf("\n");
	}
	printf("\n");
	printf("�m�W\t�p��\t�L�n��\t�^��\t����\n");
	printf("======================================\n");
	for(int a = 0; a<5;a++){
		float avg = 0;
		printf("%s\t",name[a]);
		for(int b = 0; b<3; b++){
			printf("%d\t",score[a][b]);
			avg += score[a][b];
		}
		printf("%.2f\n", avg / 3);
	}
	return 0;
} 
