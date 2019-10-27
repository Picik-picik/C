#include <stdio.h>

int main(void) {
	int num = 0, hap = 0;

	do {
		hap += num;
		num = num + 2;
	} while (num <= 100);
	printf("0이상 100이하의 정수 중 짝수의 합 : %d\n", hap);
	return 0;
}