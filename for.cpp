#include<stdio.h>
#include<stdlib.h>

int main(){
	for(int x = 2; x <= 5 ; x ++){
		printf("f(%d) = %d\n",x, 3 * x*x + 2*x + 1);
	}
	return 0;
}
