#include<stdio.h>
#include<stdlib.h>

float average(int,int);		//�o�̭n���i��쫬�禡�ŧi�A�_�h�D��ܷ|�����D average �Oԣ 

int main(){
	int a, b;
	printf("�гs���J��Ӿ��(�ѪŮ�j�}) : ");
	scanf("%d %d",&a ,&b);
	average(a, b);
	//�p�G�n�A�D�禡�� printf ���ܡA�i�H�ŧi�@���ܼ�(a)�M�� a = average(a, b)�A  printf a �Y�i 
	
	return 0;
} 

float average(int x1, int x2){
	float avg;
	avg = ((float)x1 + (float)x2) / 2;
	printf("\n���ƪ������� %.1f", avg);
	return avg;
}
