#include<stdio.h>
#include<stdlib.h>

void stack(int m,char arr[][20]){	
	static int n = 0;
	printf("\n");
	for(int i = 0;i<=n;i++){
		printf("%s ", arr[i]);		//第一次的時候 輸出一個(arr[0]) 
	}
	
	if(n>=(m-1)){		// m-1 為 3 ->當 n 變為 3 時，會return 
		return ;
	}else{
		n = n + 1;			//這時 n 變為 1  
		stack(m, arr);
	}
	n = n-1;
	printf("\n");
	for(int j = 0; j<=n; j++)
		printf("%s ", arr[j]);
}


int main(){
	char arr[4][20]={"AAAAA","#####","@@@@@","DDDDD"};
	stack(4,arr);
	
	return 0;
} 
