#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, x = 1, i = 0;
	printf("��J���(1~100) : ");
	scanf("%d", &n);
	
	while(x < 100){
		if(x % n == 0){
			printf(" %3d,", x);		// %3d���@�ӼƦr3�ӪŶ�����ݰ_�Ӥ�������� 
			i++;
			if(i % 5 == 0) printf("\n");		//�@���o����������� 
		}
		x++;
	}
	printf("\n�� 1 �� 100 ������ %d �Ӿ�ƥi�H�Q %d �㰣",100/n , n);
	
	return 0;
}
