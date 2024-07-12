#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("%3d\n", 1234);
	printf("%f\n", 123.67);
	printf("%.3f\n", 1234.5677);
	printf("%g\n", 1234.5678);
	printf("%g\n\n", 1234567.89);
	
	printf("%c\n", 'M');
	printf("%4c\n", 'M');
	printf("%c\n", 65);
	printf("%s\n","ABCDEF");
	printf("%6.2s\n","ABCDEF");
	
	return 0;
}

/*真的會補空格，寬度設定不足時設定無效，會改為%d (只要寬度設定不足都算設定無效 不管是%d 還是 %f) 
	%f 的預設小數點為 6 個，不足 6 個小數點十會補 0 
	%.2f 若小數位數大於 2 則第三位四捨五入
	%g 為一個總寬度預設為 7 位的轉換字串 若超過 7 位，會將由左而右第八位數四捨五入(只有小數會這樣)
	若 %g 的整數部分超過 7 位時，會以科學記號 (e) 來表示
	
	65對應的 ASCII 碼為 A
	%6.2s 意義為 其有 6 個空間，顯示2位字元*/
	
	
