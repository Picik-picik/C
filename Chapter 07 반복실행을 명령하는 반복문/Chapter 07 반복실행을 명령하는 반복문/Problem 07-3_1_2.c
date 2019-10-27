#include <stdio.h>

int main(void) {
	int num = 0, hap = 0;

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