#include <stdio.h>

int main(void) {
	int i, j;

	printf("���� 08-2 [continue & break�� Ȱ��]\n");
	printf("���� 1)\n");
	for (i = 2; i < 10; i++) {
		if (i % 2 != 0)
			continue;
		for (j = 1; j < 10; j++) {
			if (i < j)
				break;
			printf("%d X %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}

	return 0;
}