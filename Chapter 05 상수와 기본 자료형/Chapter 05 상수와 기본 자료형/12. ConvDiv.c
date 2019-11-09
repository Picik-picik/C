#include <stdio.h>

int main(void){
	int num1 = 3, num2 = 4;
	double divResult;
	// divResult = num1 / num2; => 0.000000
	divResult = (double)num1 / num2;
	printf("나눗셈 결과 : %f \n", divResult);
	return 0;

	/*
	연산결과의 자료형은 피연산자의 자료형과 일치
	(double)num1은 변수 num1에 저장된 값을 double형으로 변환하라는 뜻이다.
	따라서 이렇게 사용되는 소괄호를 가리켜 '형 변환 연산자'라 한다.
	제일 먼저 진행되는 연산은 형 변환 연산이다.

	divResult = 3.0 / num2;
	산술연산의 형 변환 규칙에 의해 num2에 저장된 값도 double형으로 자동 형 변환된다.
	divResult = 3.0 / 4.0;
	저장되는 값 0.75

	다음과 같이 자동 형 변환이 발생하는 경우에는,
	int num1 = 3;
	double num2 = 2.5 * num1;
	형 변환 연산을 명시해주는 것이 좋다. 이는 형 변환이 발생하는 위치를 표시해서 코드의 분석을 돕는 효과가 있기 때문이다.
	물론 명시적으로 형 변환을 한다고 해서 달라지는 것은 없다.
	int num1 = 3;
	double num2 = 2.5 * (double)num1;
	*/
}
