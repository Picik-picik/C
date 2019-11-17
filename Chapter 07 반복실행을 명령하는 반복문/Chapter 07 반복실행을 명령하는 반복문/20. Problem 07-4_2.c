#include <stdio.h>

int main(void) {
	int num, i, result = 1;
	
	printf("문제 07-4 [for문의 활용]\n");
	printf("문제 2)\n");
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;

	printf("%d! = %d\n", num, result);
	return 0;
}
