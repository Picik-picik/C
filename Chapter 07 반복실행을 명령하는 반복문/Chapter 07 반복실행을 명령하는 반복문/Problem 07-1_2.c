#include <stdio.h>

int main(void) {
	int num1 = 0, num2 = 0;
	printf("�Է��� ����ŭ 3�� ��� ��� : ");
	scanf_s("%d", &num1);

	while (num2++ < num1) {
		printf("%d ", 3 * num2);
	}
	return 0;
}