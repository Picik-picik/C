#include <stdio.h>

int main(void) {
	int num1, num2, result;

	printf("���� 08-1 [if~else���� Ȱ��]\n");
	printf("���� 4)\n");
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 < num2) ? num2 - num1 : num1 - num2;

	printf("��� : %d \n", result);

	return 0;
}