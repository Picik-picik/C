#include <stdio.h>
double CelToFah(double cel) {
	return 1.8 * cel + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}

int main(void) {
	int cho;
	double num;

	printf("문제 09-1 [다양한 함수 정의하기]\n");
	printf("문제 2)\n");
	printf("1.섭씨 → 화씨 2.화씨 → 섭씨\n");
	printf("선택하세요 : ");
	scanf_s("%d", &cho);

	if (cho == 1) {
		printf("섭씨를 입력하세요 : ");
		scanf_s("%lf", &num);
		printf("화씨로 변환되었습니다. %.2f \n", CelToFah(num));
	}
	else if (cho == 2) {
		printf("화씨를 입력하세요 : ");
		scanf_s("%lf", &num);
		printf("섭씨로 변환되었습니다. %.2f \n", FahToCel(num));
	}
	else
		printf("1번과 2번 중 선택해주세요.\n");

	return 0;
}