// A傳n1 = 12個 $傳15個 A+1傳個n1 + 5個

#include<stdio.h>
#include<stdlib.h>

void output(char ch, int num){
	for(int i = 0; i<num; i++){
		printf("%c",ch);
	}
	printf("\n\n");
	return;		//沒有要回傳東西的時候就寫一個 return 即可(讓程式知道要回去主程式繼續執行) 
}

int main() {
	char ch1 ='A';
	int n1 = 12;
	
	output(ch1,n1);
	output('$',15);
	output(ch1+1,n1+5);
	
	return 0;
}
