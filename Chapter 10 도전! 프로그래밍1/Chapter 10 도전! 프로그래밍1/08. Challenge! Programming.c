#include<stdio.h>

int main(void) {
	int num;

	printf("2�� n���� ���ϰڽ��ϴ�. n�� �Է����ּ��� : ");
	scanf_s("%d", &num);

	printf("2�� %d���� : %d\n", num, twoSquare(num));
}

int twoSquare(int num) {
	if (num == 0)
		return 1;
	return 2 * twoSquare(num - 1);
}