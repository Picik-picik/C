#include <stdio.h>

int main(void){
	double num1, num2;

	printf("문제 05-1 [scanf 함수와 아스키 코드]\n");
	printf("문제 2)\n");
	printf("두 개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("두 수의  덧셈 : %f\n", num1 + num2);
	printf("두 수의 뺄셈 : %f\n", num1 - num2);
	printf("두 수의 곱셈 : %f\n", num1 * num2);
	printf("두 수의 나눗셈 : %f\n", num1 / num2);
	return 0;
}
