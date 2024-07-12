#include<stdio.h>
#include<math.h>

int main(){
	float pi = 3.14159;
	printf("x : 角度量\tr : 弳度量\t sin\t\t csc\n");
	printf("========================================================\n");
	for(int i = 30; i<=150; i += 30){
		float r = float(i)/180*pi;
		printf(" %d \t\t %.5f \t %.5f \t %.5f\n", i, r, sin(r), 1/sin(r));
	}
	return 0;
}
