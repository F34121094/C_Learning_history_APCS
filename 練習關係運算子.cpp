#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k = 5;
	i = 'A' > 'B';
	j = ((5 + i) == k);
	k = 5 + (100 < 50) * 3 + (-20 != 20) * 2;		// k在這裡被覆寫了 
	printf("i = %d \t j = %d \t k = %d", i ,j, k);
	return 0; 
} 

/* 因為 A 的 ASCII 碼為 65，B 是 66，因此 i = 0
 	k =5+(0*3)+1*2 = 5 + 2 = 7*/ 
