#include <stdio.h>

int main(void) {
	int num = 1, hap = 0;

	while (num != 0) {
		printf("���� ���� �Է��ϰų� �ý����� �����Ϸ��� 0�� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		hap += num;
	}

	printf("���� : %d\n", hap);
	return 0;
}