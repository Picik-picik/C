#include <stdio.h>

int main(void){
	int num;

	printf("문제 03-1 [scanf 함수의 활용]\n");
	printf("문제 3)\n");
	printf("한 개의 정수 입력 : ");
	scanf_s("%d", &num);
	printf("%d의 제곱 : %d\n", num, num * num);
	return 0;
}