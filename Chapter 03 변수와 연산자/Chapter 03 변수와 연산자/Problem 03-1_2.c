#include <stdio.h>

int main(void){
	int num1, num2, num3, result;

	printf("���� 03-1 [scanf �Լ��� Ȱ��]\n");
	printf("���� 2)\n");
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d X %d + %d = %d\n", num1, num2, num3, result);
	return 0;
}