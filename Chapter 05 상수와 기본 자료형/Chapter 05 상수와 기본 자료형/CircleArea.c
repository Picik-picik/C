#include <stdio.h>

int main(void){
	double red;
	double area;
	printf("���� ������ �Է� : ");
	scanf_s("%lf", &red);

	area = red * red * 3.1415;
	printf("���� ���� : %f\n", area);
	return 0;

	// double�� �����͸� ����� ���� ���Ĺ��� %f, �Է� ���� ���� ���Ĺ��� %lf 

	/*
	�Ǽ� �ڷ����� ���е�
	�Ǽ� �ڷ���			�Ҽ��� ���� ���е�		����Ʈ ��
	float				6�ڸ�					4
	double				15�ڸ�					8
	long double			18�ڸ�					12
	*/

	/*
	unsigned�� �ٿ��� 0�� ���� ������ ǥ���� �� �ִ�.
	- ���� �ڷ����� �̸� �տ��� unsigned�� ���� �� �ִ�.
	- unsigned�� ������, MSB�� �������� ũ�⸦ ǥ���ϴµ� ����� �ȴ�.
	- ���� ǥ���� �� �ִ� ���� 0 �̻��� ������ �� �谡 �ȴ�.
	ex) char = -128�̻� +127����
		unsigned char = 0�̻� +255����
	*/
}