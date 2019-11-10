#include <stdio.h>

int AddToTotal(int num) {
	static int total = 0;
	total += num;
	return total;
}

int main(void) {
	int num, i;

	printf("문제 09-2 [static 변수의 활용]\n");

	for (i = 0; i < 3; i++) {
		printf("입력 %d : ", i + 1);
		scanf_s("%d", &num);
		printf("누적 : %d \n", AddToTotal(num));
	}

	return 0;
}