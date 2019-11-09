#include <stdio.h>

int main(void){
	int num1, num2;

	printf("문제 03-1 [scanf 함수의 활용]\n");
	printf("문제 4)\n");
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	printf("몫 : %d, 나머지 : %d\n", num1 / num2, num1 % num2);
	return 0;
}
