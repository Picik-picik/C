#include <stdio.h>

int main(void){
	int num1, num2;

	printf("문제 03-1 [scanf 함수의 활용]\n");
	printf("문제 1)\n");
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);		// scanf 오류 발생하므로 scanf_s 사용
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	return 0;
}