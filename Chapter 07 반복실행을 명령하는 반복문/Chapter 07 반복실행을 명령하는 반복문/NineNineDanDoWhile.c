#include <stdio.h>

int main(void) {
	int dan = 0, num = 1;
	printf("¸î ´Ü? : ");
	scanf_s("%d", &dan);

	do {
		printf("%d X %d = %d\n", dan, num, dan*num);
		num++;
	} while (num < 10);
	return 0;
}