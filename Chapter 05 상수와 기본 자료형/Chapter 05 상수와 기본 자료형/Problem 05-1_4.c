#include <stdio.h>

int main(void){
	int num;

	printf("���� 05-1 [scanf �Լ��� �ƽ�Ű �ڵ�]\n");
	printf("���� 4)\n");
	printf("���ĺ� �빮�� 65~90 / �ҹ��� 97~122\n���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("�ƽ�Ű ���� : %c\n", num);
	return 0;
}