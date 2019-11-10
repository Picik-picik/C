#include <stdio.h>
void ShowFiboSeries(int num) {
	int f1 = 0, f2 = 1, f3, i;

	if (num == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);

	for (i = 0; i < num - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	int n;

	printf("문제 09-1 [다양한 함수 정의하기]\n");
	printf("문제 3)\n");

	printf("출력하려는 피보나치 수열의 갯수 : ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("1이상의 값을 입력하세요. \n");
		return -1;
	}

	ShowFiboSeries(n);

	return 0;
}