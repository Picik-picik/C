#include <stdio.h>

int main(void){
	double num1, num2;

	printf("���� 05-1 [scanf �Լ��� �ƽ�Ű �ڵ�]\n");
	printf("���� 2)\n");
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("�� ����  ���� : %f\n", num1 + num2);
	printf("�� ���� ���� : %f\n", num1 - num2);
	printf("�� ���� ���� : %f\n", num1 * num2);
	printf("�� ���� ������ : %f\n", num1 / num2);
	return 0;
}