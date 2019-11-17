#include <stdio.h>

int main(void) {
	int num = 0, hap = 0, i = 0;
	
	printf("문제 07-2 [while문의 중첩]\n");
	printf("문제 1)\n");

	while (i < 5) {
		while (num <= 0) {
			printf("0보다 큰 수를 5개 입력하세요. %d번째\n", i+1);
			scanf_s("%d", &num);
		}
		hap += num;
		num = 0;
		i++;
	}
	
	printf("총합 : %d\n", hap);
	return 0;
}
