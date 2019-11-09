#include <stdio.h>

int main(void){
	int num1;

	printf("문제 04-4 [비트연산의 이해]\n");
	printf("문제 1)\n");
	printf("정수 입력 : ");
	scanf_s("%d", &num1);
	num1 = ~num1;
	num1 = num1 + 1;
	printf("부호 변환 : %d \n", num1);
	return 0;
}
