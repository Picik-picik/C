#include <stdio.h>

int main(void){
	/*
	int num = 30 + 40; // 30�� 40�� ����̴�!
	- 1�ܰ� : ���� 30�� 40�� �޸� ������ ����� ���·� ����ȴ�.
	- 2�ܰ� : �� ����� ������� ������ ����ȴ�.
	- 3�ܰ� : ������ ����� ����� ���� 70�� ���� num�� ����ȴ�.
	������ �޸� �̸��� ���� ����� '���ͷ� ���' �Ǵ� '���ͷ�'�̶� �Ѵ�.

	int inum = 5;			// ������ ���
	double dnum = 7.15;		// �Ǽ��� ���
	*/

	printf("literal int size : %d\n", sizeof(7));
	printf("literal double size : %d\n", sizeof(7.14));
	printf("literal char size : %d\n", sizeof('A'));
	return 0;

	/*
	float num1 = 5.789;		// ��� �޼��� �߻�
	float num2 = 3.24+5.12;	// ��� �޼��� �߻�
	return 0;
	=> float num1 = 5.789f;		// ��� �޼��� �߻� �� ��
	float num2 = 3.24+5.12F; // �ҹ��� f ��� �빮�� F�� �ᵵ �ȴ�!

	*������ ����� ǥ���� ���� ���̻�
	���̻�	�ڷ���				����� ��
	U		unsigned int  		unsigned int n = 1025U
	L		long				long n = 2467L
	UL		unsigned long		unsigned long n = 3456UL
	LL		long long			long long n = 5678LL
	ULL		unsigned long long	unsigned long long n = 8979ULL

	* �Ǽ��� ����� ǥ���� ���� ���̻�
	F		float				float f = 3.15F
	l 		long double			long double f = 5.789L

	��ҹ��ڸ� �������� �����Ƿ� ���� �� �絵�� ��Ȳ�� �°� ��ҹ��ڸ� �����ϸ� �ȴ�.
	*/

	/*
	�̸��� ���ϴ� �ɺ��� ��� : const ���
	�ɺ��� ����� ǥ���ϴ� ��� 2���� : 1) 'const Ű����'�� ����ϴ� ���, 2) ��ũ�θ� �̿��ϴ� ���
	const int MAX = 100;		// MAX�� ���! ���� ���� ���� �Ұ�!
	const double PI = 3.1415; // PI�� ���! ���� ���� ���� �Ұ�!

	const int MAX;	// ������ ������ �ʱ�ȭ �Ǿ����
	MAX = 100; 		// ���� ���� �Ұ�! ���� ������ ���� �߻�!

	������ ����� ������ �����ϰ� �ϴµ� ������ �ִ� �����̴�.
	"����� �̸��� ��� �빮�ڷ� ǥ���ϰ�,
	�� �̻��� �ܾ�� ������ ������ MY_AGE�� ���� ����ٸ� �̿��ؼ� �� �ܾ �����ϴ� ���� �����̴�!"
	*/
}