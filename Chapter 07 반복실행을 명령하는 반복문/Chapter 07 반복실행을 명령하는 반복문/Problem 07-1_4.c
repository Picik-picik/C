#include <stdio.h>

int main(void) {
	int dan = 0, num = 9;
	printf("역순으로 몇 단? : ");
	scanf_s("%d", &dan);

	while (num > 0) {
		printf("%d X %d = %d\n", dan, num, dan*num);
		num--;
	}
	return 0;
}
