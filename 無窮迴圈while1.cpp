#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int i, X, sum;
	char ch;
	
	while(1){
		printf("\n�п�J�@�ӥ���� : ");
		scanf("%d", &X);
		for(i = 1, sum = 0; ;i ++){
			sum += i;
			if(sum >= X){
				printf("1+2+...+n���`�X�j�󵥩�%d���̤pn�ȬO%d\n", X, i);
				break;
			} 
		}
	printf("\n�{���O�_�~�����(Y/���@��)?");
	ch = getche();
	if(ch == 'y' || ch == 'Y')
		continue;
		printf("\n�{������!");
		break;
	}
	return 0;
}
