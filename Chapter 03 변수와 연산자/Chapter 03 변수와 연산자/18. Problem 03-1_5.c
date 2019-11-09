#include <stdio.h>

int main(void){
	int num1, num2, num3, result;

	printf("문제 03-1 [scanf 함수의 활용]\n");
	printf("문제 5)\n");
	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연산결과 : %d\n", result);
	return 0;
}
