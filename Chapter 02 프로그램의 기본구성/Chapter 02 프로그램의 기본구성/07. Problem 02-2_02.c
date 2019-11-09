#include <stdio.h>

int main(void){
	printf("문제 02-2 [printf 함수의 다양한 활용]\n");
	printf("문제 2)\n");
	printf("%d X %d = %d\n", 4, 5, 20);
	printf("%d X %d = %d\n", 7, 9, 63);
	printf("%d X %d = %d\n", 7, 9, 7 * 9); // 63을 넣어도 되지만, * 기호로 곱셈을 해도 괜찮음.
	return 0;
}
