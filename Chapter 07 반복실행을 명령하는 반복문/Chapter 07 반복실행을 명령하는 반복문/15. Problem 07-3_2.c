#include <stdio.h>

int main(void) {
	int num = 0, hap = 0;

	printf("문제 07-3 [while문과 do~while문에 익숙해지기]\n");
	printf("문제 2)\n");
	do {
		hap += num;
		num = num + 2;
	} while (num <= 100);
	printf("0이상 100이하의 정수 중 짝수의 합 : %d\n", hap);
	return 0;
}
