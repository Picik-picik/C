#include <stdio.h>

int main(void) {
	int num = 0, hap = 0;

	do {
		hap += num;
		num = num + 2;
	} while (num <= 100);
	printf("0�̻� 100������ ���� �� ¦���� �� : %d\n", hap);
	return 0;
}