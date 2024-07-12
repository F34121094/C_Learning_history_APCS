#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num[]={41,32,57,33,26,19,89,64,77,54};
	int x;
	//氣泡排序法
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
	
	printf("=== 循序搜尋 === : \n");
	do{
	printf("請輸入欲查找的數值 : ");
	scanf("%d", &x);
	low = 0;
	high = total - 1;
	mid = (low+high)/2;
	find = 0;
	//二分搜尋法 氣泡排序法最重要的是懂 high low mid之間的關係 
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
		if(find == 1) printf("%d 有找到\n\n", x);
		else printf("\nSorry! %d 找不到\n\n",x);
		printf("是否繼續(Y/任一鍵) : ");
		scanf("%s", &ans);
		printf("\n");
	}while(ans == 'y' || ans=='Y');
	return 0;
} 
