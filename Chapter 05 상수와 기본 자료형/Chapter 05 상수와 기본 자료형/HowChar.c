#include <stdio.h>

int main(void){
	/*
	char ch1 = 'A';
	char ch2 = 'C'; ���α׷��󿡼��� ����ǥ������ ���� ����ǥ�� ���ǰ� �����Ϸ��� ���� ������ ���� ��ȯ�� �ȴ�.

	char ch1 = 65; // ���� A�� �ƽ�Ű �ڵ� ���� 65
	char ch2 = 67; // ���� C�� �ƽ�Ű �ڵ� ���� 67
	*/

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);
	return 0;

	// char�� �������̴�. ���ڵ� ������ ���·� ǥ���� �ǰ�, ������ char�� ������ ����Ǵ� ���� �����̱� �����̴�. 
}