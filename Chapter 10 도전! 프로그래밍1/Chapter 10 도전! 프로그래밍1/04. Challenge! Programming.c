#include<stdio.h>
const int CreamBread = 500;
const int SaeWooKkang = 700;
const int Cola = 400;

int main(void) {
	int b, s, c;
	int money;
	printf("현재 당신이 소유하고 있는 금액 : ");
	scanf_s("%d", &money);

	for (b = 1; b < money / CreamBread; b++) {
		for (s = 1; s < money / SaeWooKkang; s++) {
			for (c = 1; c < money / Cola; c++) {
				if (money == CreamBread * b + SaeWooKkang * s + Cola * c) {
					printf("크림빵 %d개, ", b);
					printf("새우깡 %d개, ", s);
					printf("콜라 %d개\n", c);
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까?\n");
	return 0;
}