#include<stdio.h>

int main(void) {
	int num1, num2;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);
	 
	if (num1 < num2) {
		GuGuDan(num1, num2);
	}
	else
		GuGuDan(num2, num1);

	return 0;
}

int GuGuDan(int num1, int num2) {
	int i;

	while (num1 <= num2) {
		for (i = 1; i < 10; i++) {
			printf("%d X %d = %d\n", num1, i, num1 * i);
		}
		printf("\n");
		num1++;
	}
}