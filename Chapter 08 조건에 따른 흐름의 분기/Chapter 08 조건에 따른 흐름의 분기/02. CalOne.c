#include <stdio.h>

int main(void) {
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("결과 : %f \n", result);

	return 0;
}

/*
이 예제에는 한가지 문제점이 존재한다.

"어떠한 숫자가 입력되든, 14, 16, 18, 20행의 조건검사(비교연산)은 모두 실행됩니다.!"

논리적으로, 예제에 존재하는 4개의 if문 중 하나만이 조건을 만족하게 되어있기 때문이다.
다음과 같이 구현 가능하다면 불필요한 연산의 수를 줄일 수 있어서 더 효율적이다.

"조건을 만족하는 if문의 발견되면 나머지 if문은 건너뜁니다."

이러한 형태의 연산을 위해 필요한 것이 바로 if~else문이다.
*/