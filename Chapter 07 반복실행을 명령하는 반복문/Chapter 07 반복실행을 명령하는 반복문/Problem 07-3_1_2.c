#include <stdio.h>

int main(void) {
	int num = 0, hap = 0;

	printf("���� ���� �Է��ϰų� �ý����� �����Ϸ��� 0�� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	hap += num;

	while (num != 0) {
		printf("���� ���� �Է��ϰų� �ý����� �����Ϸ��� 0�� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		hap += num;
	}

	printf("���� : %d\n", hap);
	return 0;
}