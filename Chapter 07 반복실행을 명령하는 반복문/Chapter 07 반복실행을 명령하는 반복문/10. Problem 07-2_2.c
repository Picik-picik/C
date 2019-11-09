#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	printf("문제 07-2 [while문의 중첩]\n");
	printf("문제 2)\n");
	while (i < 5) {
		while (j < i) {
			printf("O ");
			j++;
		}
		j = 0;
		printf("*\n");
		i++;
	}
	return 0;
}
