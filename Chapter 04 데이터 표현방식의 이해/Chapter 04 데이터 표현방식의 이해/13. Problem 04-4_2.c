#include <stdio.h>

int main(void){
	int num = 3;

	printf("문제 04-4 [비트연산의 이해]\n");
	printf("문제 2)\n");
	// 연산자 사용하지 않고 3 X 8 / 4의 값을 출력
	num = num << 3;	// 8의 곱
	num = num >> 2;	// 4의 제
	printf("결과 : %d \n", num);
	return 0;
}
