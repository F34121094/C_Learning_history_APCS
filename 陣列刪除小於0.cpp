#include<stdio.h>
#include<stdlib.h>

int main(){
	int ary[]={23,0,12,-4,7,-29,65,0,4,-3,53,65,0,12,8,-3,100,-24,28,-4};
	int length = sizeof(ary)/sizeof(1);
	printf("刪除前陣列 : \n");
	for(int a = 0; a < length ; a++){
		printf("%d ",ary[a]);
	}
	printf("\n\n刪除後的陣列 : \n");
	for(int a = 0; a < length ; a++){
		if(ary[a] <=0 ) continue;
		else printf("%d ", ary[a]);
	}
	return 0;
}
