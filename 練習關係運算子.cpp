#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k = 5;
	i = 'A' > 'B';
	j = ((5 + i) == k);
	k = 5 + (100 < 50) * 3 + (-20 != 20) * 2;		// k�b�o�̳Q�мg�F 
	printf("i = %d \t j = %d \t k = %d", i ,j, k);
	return 0; 
} 

/* �]�� A �� ASCII �X�� 65�AB �O 66�A�]�� i = 0
 	k =5+(0*3)+1*2 = 5 + 2 = 7*/ 
