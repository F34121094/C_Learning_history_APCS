#include<stdio.h>
#include<stdlib.h>

int f(int n){
	if(n >= 1){
		if(n % 2 == 0){
			return -n + f(n-3);
		}else{
			return n + f(n-3);
		}
	}else return 0;	
}

int main(){
	int n;
	while(1){
		printf("n = ");
		scanf("%d", &n);
		if(n % 3 == 1){
			break;
		}else{
			printf("輸入資料不符，請重新輸入\n\n");
			continue;
		}
	}
	if(n % 2 == 1){
		printf("1 - 4 + 7 - 10 + ... - %d + %d = ",n-3, n);
	}else printf("1 - 4 + 7 - 10 + ... + %d - %d = ",n-3, n);
	
	int sum = f(n);
	printf("%d", sum);
	
	return 0; 
}
