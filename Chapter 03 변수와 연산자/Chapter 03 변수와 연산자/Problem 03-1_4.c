#include <stdio.h>

int main(void){
	int num1, num2;

	printf("���� 03-1 [scanf �Լ��� Ȱ��]\n");
	printf("���� 4)\n");
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	printf("�� : %d, ������ : %d\n", num1 / num2, num1 % num2);
	return 0;
}