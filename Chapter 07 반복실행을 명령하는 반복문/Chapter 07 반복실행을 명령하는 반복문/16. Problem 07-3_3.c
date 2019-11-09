#include <stdio.h>

int main(void) {
	int cur = 2;
	int is = 0;

	printf("문제 07-3 [while문과 do~while문에 익숙해지기]\n");
	printf("문제 3)\n");
	do {
		is = 1;
		do {
			printf("%d X %d = %d\n", cur, is, cur*is);
			is++;
		} while (is < 10);
		cur++;
		printf("\n");
	} while (cur < 10);
	return 0;
}
