#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char data[][2][20]={{"Helen","0911443300"},{"Mary","0928000001"},{"David","0431748484"},{"Cindy","0912345678"},
						{"Kent","0255111111"},{"Jenny","0977229900"},{"Peter","0928888888"}};
	int i,find = 0;
	char name[20];
	printf("�п�J�d�ߪ��m�W : ");
	scanf("%s", &name);
	int len = sizeof(data)/sizeof(data[0]);
	for(i = 0 ; i < len ; i++){
		if(strcmp(name, data[i][0]) == 0){
			printf(" %s ���q�ܸ��X�� %s \n",name, data[i][1]);
			find = 1;
			break;
		}
	}
	if(find==0) printf("�L %s ����� \n", name);
	
	return 0;
}

//���r�꦳�@��strcmp()�i�H�� 
