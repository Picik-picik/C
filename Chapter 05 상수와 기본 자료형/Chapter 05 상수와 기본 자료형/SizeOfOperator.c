#include <stdio.h>

int main(void){
	/*
	int num = 10;
	int sz1 = sizeof(num);	// ���� num�� ũ�⸦ ����Ͽ� sz1�� �ʱ�ȭ
	int sz2 = sizeof(int);	// �ڷ��� int�� ũ�⸦ ����Ͽ� sz2�� �ʱ�ȭ

	printf("%d %d\n", sz1, sz2);
	* sizeof�� �Լ��� �ƴ� �������̴�!
	*/

	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ�� : %d\n", sizeof(ch));
	printf("���� inum�� ũ�� : %d\n", sizeof(inum));
	printf("���� dnum�� ũ�� : %d\n", sizeof(dnum));

	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("long long�� ũ�� : %d\n", sizeof(long long));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("double�� ũ�� : %d\n", sizeof(double));
	return 0;
}