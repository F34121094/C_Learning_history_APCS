#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num[]={41,32,57,33,26,19,89,64,77,54};
	int x;
	//��w�ƧǪk
	int i, j, temp; 
	int high,low,mid;
	char ans;
	int find  = 0;
	int total = sizeof(num)/sizeof(1);
	
	for(i= total-1 ;i>=0;i--){
		for(j=0;j<total;j++){
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	
	printf("=== �`�Ƿj�M === : \n");
	do{
	printf("�п�J���d�䪺�ƭ� : ");
	scanf("%d", &x);
	low = 0;
	high = total - 1;
	mid = (low+high)/2;
	find = 0;
	//�G���j�M�k ��w�ƧǪk�̭��n���O�� high low mid���������Y 
		while(low <= high && find  == 0){
			mid = (high+low)/2;
			
			if(x != num[mid]){
				if(x>num[mid]){
					low = mid + 1;
				}
				else if(x<num[mid]){
					high = mid - 1;
				}
				mid = (high+low) / 2;
				continue;
			} 
			else find = 1;
		}
		if(find == 1) printf("%d �����\n\n", x);
		else printf("\nSorry! %d �䤣��\n\n",x);
		printf("�O�_�~��(Y/���@��) : ");
		scanf("%s", &ans);
		printf("\n");
	}while(ans == 'y' || ans=='Y');
	return 0;
} 
