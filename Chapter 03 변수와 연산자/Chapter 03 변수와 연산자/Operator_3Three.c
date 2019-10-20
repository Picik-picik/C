#include <stdio.h>

int main(void){
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1 : %d \n", num1);
	num2 = -num2;
	printf("num2 : %d \n", num2);
	return 0;

	/*
	num1=-num2; // 부호 연산자의 사용
	num1-=num2; // 복합 대입 연산자의 사용

	공백을 두는 것이 혼란을 최소화할 수 있는 방법이 된다.

	num1 = -num2; // 부호 연산자의 사용
	num1 -= num2; // 복합 대입 연산자의 사용
	*/
}