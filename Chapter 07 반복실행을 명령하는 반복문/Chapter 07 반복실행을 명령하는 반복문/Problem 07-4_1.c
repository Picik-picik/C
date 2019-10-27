#include <stdio.h>

int main(void) {
	int num1, num2, hap;
	
	printf("두 정수를 입력해주세요 : ");
	scanf_s("%d %d", &num1, &num2);
	
	for (hap = 0; num1 <= num2; num1++)
		hap += num1;

	printf("두 정수를 포함하여 그 사이에 존재하는 정수들의 합은 %d입니다.\n", hap);
	return 0;
}