#include<stdio.h>
#include<stdlib.h>
int g(int p, int q){
	int rem;
	if(p==0 || q == 0){
		return 0; 
	}else{
		rem = p % q;		//����۰��k�i�H�� % �Ӱ�(�ܻ��P)
		if(rem == 0){
			return q;
		} else 
		return g(q,rem);
	}
}
int main(){
	int n1,n2, GCD;
	n1=72;
	n2=120;
	GCD = g(n2, n1);
	printf("GCD (%d ,%d) = %d", n1, n2, GCD);
	
	return 0;
} 
