#include <stdio.h>
int AbsoCompare(int num1, int num2); // ������ ū ���� ��ȯ
int GetAbsoValue(int num);           // ���������� ������ ��ȯ

int main(void) {
	int num1, num2;
	
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ���� : %d \n",
		num1, num2, AbsoCompare(num1, num2));

	return 0;
}

int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(num) {
	if (num < 0)
		return num * (-1);
	else
		return num;
}

/*
���������� ���α׷� ����ڰ� �Է��� �� ���� ���� �߿��� ������ ū ���� ��ȯ�ϴ� �Լ��� �����غ��ڴ�.
�׷��� �� �Լ��� ���ڷ� ���޵� ������ ������ ����ϴ� ������ ���ľ� �ϴµ�,
�̸� ����� �� �ִ� �Լ��� ������ �����ϰ�, �߰��� �̸� ȣ���ϴ� ���·� �����غ��ڴ�.

������ if~else����,

if (GetAbsoValue(num1) > GetAbsoValue(num2))
......

�� ���� GetAbsoValue �Լ�ȣ�� �Ŀ� ��ȯ�Ǵ� ������ ������� ������ ���� �񱳿����� �����ϰ� �ȴ�.

if ( 5 > 9 )
......

�׸��� �� ������ Ư¡�� 'ȣ��� �Լ� ������ �� �ٸ� �Լ��� ȣ���Ѵ�'�� ���̴�.
main �Լ����� ���� �񱳸� ���ؼ� �Լ� AbsoCompare�� ȣ���ߴµ�, �� �Լ��� ��ü �κп��� ������ ��� ���ؼ�
�Լ� GetAbsoValue�� �ٽ� ȣ���Ͽ���. �̷��� main �Լ��� �ƴ� �ٸ� �Լ������� �ʿ信 ����
�󸶵��� �Լ��� ȣ���� �� �ִ�. �� main�� ������ ��� �Լ��� ���� �� ��Ȳ�� ������� �ٸ� �Լ��� ȣ���� �� �ִ�.
*/