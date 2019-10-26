#include <stdio.h>

int main(void) {
	int myAge = 12;
	printf("�� ���̴� 10������ %d��, 16������ %X���Դϴ�. \n", myAge, myAge);
	// %X�� �����͸� 16������ ����ϵ�, ���ĺ��� �빮�ڷ� ����Ѵٴ� �ǹ�
	// X�� �빮���̹Ƿ�, �ҹ��ڷ� ��ü�ϸ� ���ĺ��� �ҹ��ڷ� ��µȴ�.
	return 0;
}
/*
���Ĺ����� ������ �� �ǹ�
���Ĺ���     ��� ���(�ڷ���)     ��� ����
%d           char, short, int      ��ȣ �ִ� 10���� ����
%ld          long                  ��ȣ �ִ� 10���� ����
%lld         long long             ��ȣ �ִ� 10���� ����
%u           unsigned int          ��ȣ ���� 10���� ����
%o           unsigned int          ��ȣ ���� 8���� ����
%x, %X       unsigned int          ��ȣ ���� 16���� ����
%f           float, double         10���� ����� �ε��Ҽ��� �Ǽ�
%Lf          long double           10���� ����� �ε��Ҽ��� �Ǽ�
%e, %E       float, double         e �Ǵ� E ����� �ε��Ҽ��� �Ǽ�
%g, %G       float, double         ���� ���� %f�� %e ���̿��� ����
%c           char, short, int      ���� �����ϴ� ����
%s           char *                ���ڿ�
%p           void *                �������� �ּ� ��
*/