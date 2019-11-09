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
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("결과 : %f \n", result);

	return 0;
}

/*
if~else문의 경우는 두 개의 블록 중 하나를 선택해서 실행하는 구조였는데,
if...else if...else문은 셋 이상의 블록 중 하나를 선택해서 실행하는 구조이다.
조건을 얼마든지 추가 삽입 할 수 있다.

무엇보다 중요한 것은 하나라도 조건이 만족되어 해당 블록을 실행하고 나면, 마지막에 있는 else까지도 그냥 건너뛴다는 사실이다.

* 조건의 만족여부 검사는 위에서 아래로 진행이 된다.
* 조건이 만족되어서 해당 블록을 실행하고 나면 마지막 else까지도 건너뛴다.

특히 조건이 만족되고 해당 블록을 실행하고 나면 마지막 else까지도 그냥 건너뛴다는 특징 때문에,
앞서 소개한 예제 CalOne.c는 효율적으로 실행되도록 다음과 같이 개선시킬 수 있다.

if...else if...else의 진실
if...else if...else를 하나의 독립된 문장으로 인식하는 경우가 많다. 큰 문제는 없지만,
근본적으로 이해하는 것이 중요하다는 게 필자의 생각이다. 그래서 필자는 다음 사실을 폭로할 생각이다.

"if...else if...else는 if~else문을 중첩시킨 형태에 지나지 않는다!"

if (num < 0)
   printf("입력 값은 0보다 작다. \n);
else if (num > 0)
   printf("입력 값은 0보다 크다. \n);
else
   printf("입력 값은 0이다. \n);

위의 코드는 논리적으로 타당하다. 그런데 if~else는 하나의 문장이니, 이를 다음과 같이 두 개의 if~else문으로 바라보자.

if (num < 0)
   printf("입력 값은 0보다 작다. \n);
else 
     if (num > 0)
   printf("입력 값은 0보다 크다. \n);
else
   printf("입력 값은 0이다. \n);

위의 두 if~else문의 관계 파악을 돕기 위해서 상단에 존재하는 if~else문에 대해서만 중괄호를 삽입해 보겠다.

if (num < 0) {
   printf("입력 값은 0보다 작다. \n);
}
else {
   if (num > 0)
      printf("입력 값은 0보다 크다. \n);
   else
      printf("입력 값은 0이다. \n);
}

if...else if...else는 if~else문을 중첩시키되 else 블록을 대상으로 중첩시킨 결과이다.
그래서 if문에 명시된 하나의 조건이 '참'이 되면 나머지 전부를 건너뛰었던 것이다.
*/