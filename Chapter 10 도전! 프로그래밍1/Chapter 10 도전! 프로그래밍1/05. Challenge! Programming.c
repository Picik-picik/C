#include<stdio.h>

int IsPrime(int n);

int main(void) {
	int num = 2, cnt = 0;

	while (cnt != 10) {
		if (IsPrime(num) == 1) {
			printf("%d ", num);
			cnt++;
		}
		num++;
	}
	return 0;
}

int IsPrime(int n) // �Ҽ��� true(1) ����
{
	int divisors = 0, i;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			divisors++;
	}

	if (divisors == 2)
		return 1;

	return 0;
}
