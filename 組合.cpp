#include<stdio.h>
#include<stdlib.h>
int f(int a, int b){
	if(b == 0 || a == b){
		return 1;
	}else return f(a-1, b-1) + f(a-1 ,b);
		//C 5 �� 2 �q5�Ӥ��P���̭��D2�� 
}
int main(){
	int a, b;
	while(1){
		printf("a = ");
		scanf("%d", &a);
		printf("b = ");
		scanf("%d", &b);
		if(a > 0 && b > 0 && a >= b) break;
		else printf("��ƿ�J���šA�Э��s��J"); continue; 
	}
	int ans = f(a,b);
	printf("\n�զX C(a,b) = %d", ans);
	
	return 0;
}
