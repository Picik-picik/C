#include <stdio.h>

int main(void){
	int num1;

	printf("���� 04-4 [��Ʈ������ ����]\n");
	printf("���� 2)\n");
	// ������ ������� �ʰ� 3 X 8 / 4�� ���� ���
	int num2 = 3;
	num2 = num2 << 3;	// 8�� ��
	num2 = num2 >> 2;	// 4�� ��
	printf("��� : %d \n", num2);
	return 0;
}