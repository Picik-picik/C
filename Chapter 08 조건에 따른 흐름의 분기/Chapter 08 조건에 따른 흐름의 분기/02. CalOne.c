#include <stdio.h>

int main(void) {
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("��� : %f \n", result);

	return 0;
}

/*
�� �������� �Ѱ��� �������� �����Ѵ�.

"��� ���ڰ� �Էµǵ�, 14, 16, 18, 20���� ���ǰ˻�(�񱳿���)�� ��� ����˴ϴ�.!"

��������, ������ �����ϴ� 4���� if�� �� �ϳ����� ������ �����ϰ� �Ǿ��ֱ� �����̴�.
������ ���� ���� �����ϴٸ� ���ʿ��� ������ ���� ���� �� �־ �� ȿ�����̴�.

"������ �����ϴ� if���� �߰ߵǸ� ������ if���� �ǳʶݴϴ�."

�̷��� ������ ������ ���� �ʿ��� ���� �ٷ� if~else���̴�.
*/