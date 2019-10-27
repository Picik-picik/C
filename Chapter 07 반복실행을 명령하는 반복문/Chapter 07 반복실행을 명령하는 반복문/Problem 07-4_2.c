#include <stdio.h>

int main(void) {
	int num, i, sum = 1;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
		sum = sum * i;

	printf("%d! = %d\n", num, sum);
	return 0;
}