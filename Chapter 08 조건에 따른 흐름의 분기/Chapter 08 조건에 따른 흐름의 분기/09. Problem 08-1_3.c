#include <stdio.h>

int main(void) {
	int kor, eng, math;
	double avg;

	printf("문제 08-1 [if~else문의 활용]\n");
	printf("문제 3)\n");
	printf("국어, 영어, 수학 점수를 입력하세요 : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (avg >= 90.0)
		printf("평균 %.2f점\n이번 학점은 A입니다. \n", avg);
	else if (avg >= 80.0)
		printf("평균 %.2f점\n이번 학점은 B입니다. \n", avg);
	else if (avg >= 70.0)
		printf("평균 %.2f점\n이번 학점은 C입니다. \n", avg);
	else if (avg >= 50.0)
		printf("평균 %.2f점\n이번 학점은 D입니다. \n", avg);
	else
		printf("평균 %.2f점\n이번 학점은 F입니다. \n", avg);

	return 0;
}