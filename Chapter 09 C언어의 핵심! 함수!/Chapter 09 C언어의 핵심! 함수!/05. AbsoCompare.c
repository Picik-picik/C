#include <stdio.h>
int AbsoCompare(int num1, int num2); // 절댓값이 큰 정수 반환
int GetAbsoValue(int num);           // 전달인자의 절댓값을 반환

int main(void) {
	int num1, num2;
	
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰 정수 : %d \n",
		num1, num2, AbsoCompare(num1, num2));

	return 0;
}

int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(num) {
	if (num < 0)
		return num * (-1);
	else
		return num;
}

/*
마지막으로 프로그램 사용자가 입력한 두 개의 정수 중에서 절댓값이 큰 수를 반환하는 함수를 정의해보겠다.
그런데 이 함수는 인자로 전달된 정수의 절댓값을 계산하는 과정을 거쳐야 하는데,
이를 대신할 수 있는 함수를 별도로 정의하고, 중간에 이를 호출하는 형태로 정의해보겠다.

다음의 if~else문은,

if (GetAbsoValue(num1) > GetAbsoValue(num2))
......

두 번의 GetAbsoValue 함수호출 후에 반환되는 정수를 대상으로 다음과 같이 비교연산을 진행하게 된다.

if ( 5 > 9 )
......

그리고 위 예제의 특징은 '호출된 함수 내에서 또 다른 함수를 호출한다'는 점이다.
main 함수에서 절댓값 비교를 위해서 함수 AbsoCompare를 호출했는데, 이 함수의 몸체 부분에서 절댓값을 얻기 위해서
함수 GetAbsoValue를 다시 호출하였다. 이렇듯 main 함수가 아닌 다른 함수에서도 필요에 따라서
얼마든지 함수를 호출할 수 있다. 즉 main을 포함한 모든 함수는 조건 및 상황에 관계없이 다른 함수를 호출할 수 있다.
*/