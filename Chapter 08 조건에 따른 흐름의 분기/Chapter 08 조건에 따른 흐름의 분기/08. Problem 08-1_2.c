#include <stdio.h>

int main(void) {
	int num1, num2, result;

	printf("문제 08-1 [if~else문의 활용]\n");
	printf("문제 2)\n");
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
		result = num2 - num1;
	else
		result = num1 - num2;

	printf("결과 : %d \n", result);

	return 0;
}