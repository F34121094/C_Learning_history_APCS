// A��n1 = 12�� $��15�� A+1�ǭ�n1 + 5��

#include<stdio.h>
#include<stdlib.h>

void output(char ch, int num){
	for(int i = 0; i<num; i++){
		printf("%c",ch);
	}
	printf("\n\n");
	return;		//�S���n�^�ǪF�誺�ɭԴN�g�@�� return �Y�i(���{�����D�n�^�h�D�{���~�����) 
}

int main() {
	char ch1 ='A';
	int n1 = 12;
	
	output(ch1,n1);
	output('$',15);
	output(ch1+1,n1+5);
	
	return 0;
}
