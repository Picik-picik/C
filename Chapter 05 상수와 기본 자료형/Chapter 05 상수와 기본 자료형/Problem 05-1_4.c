#include <stdio.h>

int main(void){
	int num;

	printf("문제 05-1 [scanf 함수와 아스키 코드]\n");
	printf("문제 4)\n");
	printf("알파벳 대문자 65~90 / 소문자 97~122\n숫자를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("아스키 문자 : %c\n", num);
	return 0;
}