#include <stdio.h>

int main(void){
	int num;

	printf("���� 03-1 [scanf �Լ��� Ȱ��]\n");
	printf("���� 3)\n");
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d", &num);
	printf("%d�� ���� : %d\n", num, num * num);
	return 0;
}