#include<stdio.h>

int main(){
	int amt[3][4]={{310,278,293,302},{256,200,230,324},{398,320,330,234}};
	
	for(int a = 0; a<3; a++){
		for(int b = 0; b<4; b++){
			printf("amt[%d][%d] = %d\t\t",a,b,amt[a][b]);
		}
		printf("\n\n");
	}
	return 0;
} 
