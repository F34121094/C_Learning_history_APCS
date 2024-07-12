#include<stdio.h>
#include<stdlib.h>

void f2(int);

void f1(int m ){
	if(m>3){
		printf("%d ", m);
		return ;
	}else{
		printf("%d ", m);
		m = m+2;
		f2(m);
		printf("%d ", m); 
	}
}

void f2(int n){
	if(n>3){
		printf("%d ", n);
		return ;
	}else{
		printf("%d ", n);
		n = n-1;
		f1(n);
		printf("%d ", n);
	}
}

int main(){
	int  m = 1;
	f1(m);
	
	return 0;
}
