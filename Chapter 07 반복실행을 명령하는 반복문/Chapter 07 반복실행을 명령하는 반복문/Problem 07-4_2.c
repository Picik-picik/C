#include <stdio.h>

int main(void) {
	int num, i, sum = 1;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
		sum = sum * i;

	printf("%d! = %d\n", num, sum);
	return 0;
}