#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("%3d\n", 1234);
	printf("%f\n", 123.67);
	printf("%.3f\n", 1234.5677);
	printf("%g\n", 1234.5678);
	printf("%g\n\n", 1234567.89);
	
	printf("%c\n", 'M');
	printf("%4c\n", 'M');
	printf("%c\n", 65);
	printf("%s\n","ABCDEF");
	printf("%6.2s\n","ABCDEF");
	
	return 0;
}

/*�u���|�ɪŮ�A�e�׳]�w�����ɳ]�w�L�ġA�|�אּ%d (�u�n�e�׳]�w��������]�w�L�� ���ެO%d �٬O %f) 
	%f ���w�]�p���I�� 6 �ӡA���� 6 �Ӥp���I�Q�|�� 0 
	%.2f �Y�p�Ʀ�Ƥj�� 2 �h�ĤT��|�ˤ��J
	%g ���@���`�e�׹w�]�� 7 �쪺�ഫ�r�� �Y�W�L 7 ��A�|�N�ѥ��ӥk�ĤK��ƥ|�ˤ��J(�u���p�Ʒ|�o��)
	�Y %g ����Ƴ����W�L 7 ��ɡA�|�H��ǰO�� (e) �Ӫ��
	
	65������ ASCII �X�� A
	%6.2s �N�q�� �䦳 6 �ӪŶ��A���2��r��*/
	
	
