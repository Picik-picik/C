#include <stdio.h>

int main(void){
	int num1, num2, num3, result;

	printf("문제 03-1 [scanf 함수의 활용]\n");
	printf("문제 2)\n");
	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d X %d + %d = %d\n", num1, num2, num3, result);
	return 0;
}