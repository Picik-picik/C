#include <stdio.h>

int main(void) {
	int n;
	
	printf("문제 08-3 [switch문으로 대신하기]\n");
	printf("0이상의 정수를 입력하세요 : ");
	scanf_s("%d", &n);

	switch (n / 10) {
	case 0:
		printf("0 이상 10미만 \n");
		break;
	case 1:
		printf("10이상 20미만 \n");
		break;
	case 2:
		printf("20이상 30미만 \n");
		break;
	default:
		printf("30이상 \n");
	}

	return 0;
}
