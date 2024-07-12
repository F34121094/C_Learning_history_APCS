#include<stdio.h>
#include<stdlib.h>

void fun1();
int n = 1;
int var1 = 10;

int main(){
	int var1 = 1;
	fun1();
	var1 ++;
	printf("\n After 1st var1++ var1 = %d \n", var1);
	fun1();
	var1 ++;
	printf("\n After 2nd var1++ var1 = %d \n", var1);
	
	printf("\n");
	return 0;
}

void fun1(){
	printf("\n Now, %d -time entering fun1 .... var1 = %d \n", n , var1);
	var1++;
	printf(" Now, %d -time leaving fun1 .... var1 = %d \n", n ,var1);
}
