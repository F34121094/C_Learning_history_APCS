#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[]={17,32,25,49,6};
	int i, j, temp;
	printf("排序前 : ");
	for(i=0;i<=4;i++) printf(" %d ",a[i]);
	printf("\n\n");
	for( i = 3 ; i >= 0 ; i-- ){
		for(j=0;j<=i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n排序後 : ");
	for(i=0;i<=4;i++) printf(" %d ", a[i]);
	return 0;
}
//氣泡排序法至少要兩個 for 迴圈才能用出來 
