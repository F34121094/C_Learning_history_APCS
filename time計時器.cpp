#include<stdio.h>
#include<time.h>
#include<conio.h>

int main(){
	
	char tquit;
	time_t t1, t2;		//�w�q��Ӯɶ���� time(NULL)�����t�Υثe���ɶ��A�i�H�Ω�p��g�L���ɶ� (��difftime���) 
	clock_t ck1, ck2;		//clock�O�ΨӨ��oCPU���_���ɶ� 
	
	t1 = time(NULL);
	ck1 = clock();

	
	printf("�}�l�p�ɡA�� '/' ����p��");
	while(tquit != '/'){
		tquit = getch();
	}
	t2=time(NULL);
	ck2 = clock();
	printf("\n\n�p�ɵ���\n\n");
	printf("�t�θg�L %d ��\n",(int)difftime(t2,t1));
	printf("CPU�@�g�L %d Ticks",ck2-ck1);
	
	return 0;
}
