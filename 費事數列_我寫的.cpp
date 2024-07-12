#include<stdio.h>
int i = 1;	//2
int j = 2;	//3
int time = 3;

int formula(int a ){
	//no1+no2=2		no(n)=no(n-1)+no(n-2)
	int temp;
	while(a > time){
		temp = j; 
		j = i + j;	//4=(2+3)
		i = temp;	//3
		time++; 
	}
	return j;
}

int main(){
	int get;
	scanf("%d", &get);
	int ans = formula(get);
	printf("費式數列第 %d 項為 %d", get, ans);
	
	return 0;
}
