#include<stdio.h>

int main(void) {
	int num1, num2;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	printf("�� ���� ������ �ִ� ����� : %d\n", GCD(num1, num2));

	return 0;
}

int GCD(int num1, int num2) {
	int result;
	result = num1;

	while (num1 % result != 0 || num2 % result != 0)
		result--;

	return result;
}