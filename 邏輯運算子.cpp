#include<stdio.h>
#include<stdlib.h>

int main(){
	int x = 18, y = 23;
	printf("((%d >= 16) && (%d <= 22)) = %d\n", x, x, ((x >= 16) && (x <= 22)));
	printf("((%d >= 65) || (%d < 12)) = %d", y, y, ((y >= 65) && (y < 12)));
	
	return 0;
}
