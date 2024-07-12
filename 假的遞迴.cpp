#include<stdio.h>
#include<stdlib.h>
int main();

int f(int n){
	int sum;
	if(n % 2 == 1){
		sum = (n+1)/2;
	}else{
		sum = -(n+1)/2;
	}
		if(n % 3 != 1){
			printf("\n輸入資料不符，請重新輸入");
			
		}else{
			for(int i = 1 ; i <= n ; i +=3){
				if(i % 2 == 1 && i != 1){
					printf("+ %d ", i);
				}else if(i == 1) printf("1 ");
				else printf("- %d", i);
			}
			printf("= %d", sum);
		}
}

int main(){
	int n;
	do{
	printf("n = ");
	scanf("%d", n);
 	int sum = f(n);
 	}while(n % 3 == 1);
 	return 0;
}
