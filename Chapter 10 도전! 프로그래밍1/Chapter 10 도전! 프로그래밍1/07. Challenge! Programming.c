#include<stdio.h>

int main(void) {
	int n, k;
	int inc = 1;

	printf("상수 n 입력 : ");
	scanf_s("%d", &n);

	if (n == 0) {
		printf("만족하는 k 없음 \n");
		return 0;
	}

	for (k = 0; inc * 2 <= n; k++) {
		inc = inc * 2;
	}

	printf("공식을 만족하는 k의 최댓값은 : %d\n", k);

	return 0;
}