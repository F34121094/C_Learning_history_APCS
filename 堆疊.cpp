#include<stdio.h>
#include<stdlib.h>

void stack(int m,char arr[][20]){	
	static int n = 0;
	printf("\n");
	for(int i = 0;i<=n;i++){
		printf("%s ", arr[i]);		//�Ĥ@�����ɭ� ��X�@��(arr[0]) 
	}
	
	if(n>=(m-1)){		// m-1 �� 3 ->�� n �ܬ� 3 �ɡA�|return 
		return ;
	}else{
		n = n + 1;			//�o�� n �ܬ� 1  
		stack(m, arr);
	}
	n = n-1;
	printf("\n");
	for(int j = 0; j<=n; j++)
		printf("%s ", arr[j]);
}


int main(){
	char arr[4][20]={"AAAAA","#####","@@@@@","DDDDD"};
	stack(4,arr);
	
	return 0;
} 
