#include <stdio.h>

int main(void) {
	int i = 0, num = 0, avg = 0, hap = 0;
	printf("몇개의 정수를 입력할까요? : ");
	scanf_s("%d", &num);

	while (i < num) {
		printf("개수만큼 정수를 입력해주세요 : ");
		scanf_s("%d", &hap);
		avg += hap;
		i++;
	}

	printf("입력받은 정수들의 평균은 %f입니다.\n", (double)avg / num);
	return 0;
}