#include <stdio.h>
double CelToFah(double cel) {
	return 1.8 * cel + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}

int main(void) {
	int cho;
	double num;

	printf("���� 09-1 [�پ��� �Լ� �����ϱ�]\n");
	printf("���� 2)\n");
	printf("1.���� �� ȭ�� 2.ȭ�� �� ����\n");
	printf("�����ϼ��� : ");
	scanf_s("%d", &cho);

	if (cho == 1) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%lf", &num);
		printf("ȭ���� ��ȯ�Ǿ����ϴ�. %.2f \n", CelToFah(num));
	}
	else if (cho == 2) {
		printf("ȭ���� �Է��ϼ��� : ");
		scanf_s("%lf", &num);
		printf("������ ��ȯ�Ǿ����ϴ�. %.2f \n", FahToCel(num));
	}
	else
		printf("1���� 2�� �� �������ּ���.\n");

	return 0;
}