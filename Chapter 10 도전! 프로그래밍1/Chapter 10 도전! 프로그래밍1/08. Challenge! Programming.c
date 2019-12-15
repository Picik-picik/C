#include<stdio.h>

int main(void) {
	int num;

	printf("2의 n승을 구하겠습니다. n을 입력해주세요 : ");
	scanf_s("%d", &num);

	printf("2의 %d승은 : %d\n", num, twoSquare(num));
}

int twoSquare(int num) {
	if (num == 0)
		return 1;
	return 2 * twoSquare(num - 1);
}