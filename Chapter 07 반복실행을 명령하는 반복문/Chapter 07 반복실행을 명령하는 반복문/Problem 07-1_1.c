#include <stdio.h>

int main(void) {
	int num1 = 0, num2;
	printf("Hello world!�� �󸶳� �Է��Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &num2);

	while (num1 < num2) {
		printf("Hello world! %d\n", num1);
		num1++;
	}
	return 0;
}