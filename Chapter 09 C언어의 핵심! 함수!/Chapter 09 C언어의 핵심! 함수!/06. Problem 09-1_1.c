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

	printf("���� 09-1 [�پ��� �Լ� �����ϱ�]\n");
	printf("���� 1)\n");

	printf("�� ���� ������ �Է��ϼ���. : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("���� ���� ���� %d �Դϴ�.\n", CompareMin(num1, num2, num3));
	printf("���� ū ���� %d �Դϴ�.\n", CompareMax(num1, num2, num3));

	return 0;
}