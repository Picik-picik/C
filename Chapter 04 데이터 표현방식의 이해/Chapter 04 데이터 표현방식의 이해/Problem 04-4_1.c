#include <stdio.h>

int main(void){
	int num1;

	printf("���� 04-4 [��Ʈ������ ����]\n");
	printf("���� 1)\n");
	printf("���� �Է� : ");
	scanf_s("%d", &num1);
	num1 = ~num1;
	num1 = num1 + 1;
	printf("��ȣ ��ȯ : %d \n", num1);
	return 0;
}