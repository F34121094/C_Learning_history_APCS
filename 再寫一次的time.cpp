#include<stdio.h>
#include<time.h>
#include<conio.h>
int main(){
	time_t t1, t2;
	clock_t ck1, ck2;
	char get;
	
	t1 = time(NULL);
	ck1 = clock();
	printf("�}�l�p�� ���U '/' ����p��");
	while(get!='/'){
		get = getch();
	}
	t2 = time(NULL);
	ck2 = clock();
	printf("�p�ɵ���!!\n\n");
	printf("�@�g�L %d ��\n", (int)difftime(t2, t1));		//�O�odifftime�ϥήɤ���j���n��b�e�� �ݦ���k 
	printf("CPU�@�g�L %d ticks", ck2 - ck1);
	
	return 0;
}
