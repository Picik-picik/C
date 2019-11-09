#include <stdio.h>

int main(void) {
	int num1 = 0, num2;
	
	printf("문제 07-1 [while문의 활용]\n");
	printf("문제 1)\n");
	printf("Hello world!를 얼마나 입력하시겠습니까? : ");
	scanf_s("%d", &num2);

	while (num1 < num2) {
		printf("Hello world! %d\n", num1);
		num1++;
	}
	return 0;
}
