#include <stdio.h>

int main(void) {
	int num = 0, hap = 0, i = 0;
	
	printf("1 �̻��� ������ 5�� �Է����ּ��� : \n");
	while (i < 5) {
		while (num <= 0) {
			printf("%d��°\n", i+1);
			scanf_s("%d", &num);
		}
		hap += num;
		num = 0;
		i++;
	}
	printf("���� : %d\n", hap);
	return 0;
}