#include <stdio.h>
int CompareMax(int num1, int num2, int num3) {
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;
}

int CompareMin(int num1, int num2, int num3) {
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;
}

int main(void) {
	int num1, num2, num3;

	printf("문제 09-1 [다양한 함수 정의하기]\n");
	printf("문제 1)\n");

	printf("세 개의 정수를 입력하세요. : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("가장 작은 수는 %d 입니다.\n", CompareMin(num1, num2, num3));
	printf("가장 큰 수는 %d 입니다.\n", CompareMax(num1, num2, num3));

	return 0;
}