#include <stdio.h>

int main(void) {
	int i = 0, num = 0, avg = 0, hap = 0;
	printf("��� ������ �Է��ұ��? : ");
	scanf_s("%d", &num);

	while (i < num) {
		printf("������ŭ ������ �Է����ּ��� : ");
		scanf_s("%d", &hap);
		avg += hap;
		i++;
	}

	printf("�Է¹��� �������� ����� %f�Դϴ�.\n", (double)avg / num);
	return 0;
}