#include <stdio.h>

int main(void){
	char ch;

	printf("���� 05-1 [scanf �Լ��� �ƽ�Ű �ڵ�]\n");
	printf("���� 5)\n");
	printf("A~Z / a~z�� �Է��ϼ��� : ");
	scanf_s("%c", &ch);
	printf("�ƽ�Ű �ڵ� �� : %d\n", ch);
	return 0;
}