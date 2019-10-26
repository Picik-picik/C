#include <stdio.h>

int main(void) {
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로) : ");
	scanf_s("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e 표기법으로) : ");
	scanf_s("%lf", &num2);
	printf("입력된 실수 %f \n", num2);

	printf("실수 입력3(e 표기법으로) : ");
	scanf_s("%Lf", &num3);
	printf("입력된 실수 %f \n", num3);
	return 0;
}
/*
"실수의 입력과정에서 e 표기법을 사용해도 된다."
"float, double, long double의 데이터 출력에 사용되는 서식문자는 각각 %f, %f, %Lf이다."
"float, double, long double의 데이터 입력에 사용되는 서식문자는 각각 %f, %lf, %Lf이다."
문자열의 출력에 사용되는 서식문자 %s는 문자열의 입력에도 사용된다.
*/