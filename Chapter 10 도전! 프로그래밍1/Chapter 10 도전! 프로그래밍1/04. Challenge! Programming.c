#include<stdio.h>
const int CreamBread = 500;
const int SaeWooKkang = 700;
const int Cola = 400;

int main(void) {
	int b, s, c;
	int money;
	printf("���� ����� �����ϰ� �ִ� �ݾ� : ");
	scanf_s("%d", &money);

	for (b = 1; b < money / CreamBread; b++) {
		for (s = 1; s < money / SaeWooKkang; s++) {
			for (c = 1; c < money / Cola; c++) {
				if (money == CreamBread * b + SaeWooKkang * s + Cola * c) {
					printf("ũ���� %d��, ", b);
					printf("����� %d��, ", s);
					printf("�ݶ� %d��\n", c);
				}
			}
		}
	}

	printf("��� �����Ͻðڽ��ϱ�?\n");
	return 0;
}