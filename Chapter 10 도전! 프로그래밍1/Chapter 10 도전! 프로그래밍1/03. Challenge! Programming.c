#include<stdio.h>

int main(void) {
	int num1, num2;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("두 개의 정수의 최대 공약수 : %d\n", GCD(num1, num2));

	return 0;
}

int GCD(int num1, int num2) {
	int result;
	result = num1;

	while (num1 % result != 0 || num2 % result != 0)
		result--;

	return result;
}