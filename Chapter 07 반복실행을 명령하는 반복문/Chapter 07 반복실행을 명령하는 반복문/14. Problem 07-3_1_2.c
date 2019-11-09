#include <stdio.h>

int main(void) {
	int num = 0, hap = 0;

	printf("문제 07-3 [while문과 do~while문에 익숙해지기]\n");
	printf("문제 1)\n");
	printf("방법 2)\n");
	printf("더할 값을 입력하거나 시스템을 종료하려면 0을 입력하세요 : ");
	scanf_s("%d", &num);
	hap += num;

	while (num != 0) {
		printf("더할 값을 입력하거나 시스템을 종료하려면 0을 입력하세요 : ");
		scanf_s("%d", &num);
		hap += num;
	}

	printf("총합 : %d\n", hap);
	return 0;
}
