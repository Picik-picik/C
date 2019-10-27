#include <stdio.h>

int main(void) {
	int num1 = 0, num2 = 0;
	printf("입력한 수만큼 3의 배수 출력 : ");
	scanf_s("%d", &num1);

	while (num2++ < num1) {
		printf("%d ", 3 * num2);
	}
	return 0;
}