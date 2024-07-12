#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("123456!\a\n");
	printf("123\b456!\n");
	printf("123\r456!\n");
	printf("123\f456");
	 
	
	return 0;
}

/* \a 會發出警告聲 
	\b 會向左刪除一位數 
*/
