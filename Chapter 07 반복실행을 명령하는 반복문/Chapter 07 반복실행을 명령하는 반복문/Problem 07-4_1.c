#include <stdio.h>

int main(void) {
	int num1, num2, hap;
	
	printf("�� ������ �Է����ּ��� : ");
	scanf_s("%d %d", &num1, &num2);
	
	for (hap = 0; num1 <= num2; num1++)
		hap += num1;

	printf("�� ������ �����Ͽ� �� ���̿� �����ϴ� �������� ���� %d�Դϴ�.\n", hap);
	return 0;
}