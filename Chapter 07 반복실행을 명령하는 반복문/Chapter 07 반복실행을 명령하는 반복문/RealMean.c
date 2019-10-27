#include <stdio.h>

int main(void) {
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;) {
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("평균 : %f\n", total / (num - 1));
	return 0;
}
/*
불필요하다면 초기식과 증감식을 비워도 된다.
    for (num = 0 ; input >= 0.0; num++) {
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
	}

for( ; ; ) {

}
for문의 중간에 위치한 '조건식'이 비워지면 무조건 '참'으로 인식이 되어 무한루프를 형성하게 된다.
*/