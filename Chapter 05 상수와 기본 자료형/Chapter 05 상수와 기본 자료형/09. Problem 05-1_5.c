#include <stdio.h>

int main(void){
	char ch;

	printf("문제 05-1 [scanf 함수와 아스키 코드]\n");
	printf("문제 5)\n");
	printf("A~Z / a~z를 입력하세요 : ");
	scanf_s("%c", &ch);
	printf("아스키 코드 값 : %d\n", ch);
	return 0;
}
