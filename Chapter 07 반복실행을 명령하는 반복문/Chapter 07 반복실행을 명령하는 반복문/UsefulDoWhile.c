#include <stdio.h>

int main(void) {
	int total = 0, num = 0;

	do {
		printf("���� �Է�(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ� : %d\n", total);
	return 0;
}

/*
do while���� ó������ '�ݺ�����'�� �������� ���ϸ� '�ݺ�����'�� �ѹ��� �������� �ʴ� while���� �޸�,
�ݺ������� �ּ��� �ѹ��� �����ϴ� �����̴�.
do {
    printf("Hello world!\n");
	num++;
} while (num < 3);
"while������ �ݺ������� �˻���ġ�� �ٸ���, �̷� ���ؼ� �ݺ������� �ּ��� 1ȸ �̻� �����Ѵٴ� ���� while������ ������ �������̴�."
���� while��, do~while���� ������ => �ݺ������� ������ �� �� �̻� ����Ǿ�� �� �� do~while���� ����Ѵ�.
*/