#include <stdio.h>

int Add(int num1, int num2) { // 인자전달 (O), 반환 값 (O)
	return num1 + num2;
}

void ShowAddResult(int num) { // 인자전달 (O), 반환 값 (X)
	printf("덧셈 결과 출력 : %d \n", num);
}

int ReadNum(void) {           // 인자전달 (X), 반환 값 (O)
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) { // 인자전달 (X), 반환 값 (X)
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다. \n");
	printf("자! 그럼 두 개 의 정수를 입력하세요. \n");
}

int main(void) {
	int result, num1, num2;
	
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);

	return 0;
}

/*
다양한 형태의 함수 정의 2 : 전달인자나 반환 값이 존재하지 않는 경우
이어서 예제 SimpleAddFunc.c에 몇몇 함수를 추가해서 예제의 완성도를 높여보겠다.
먼저 그 첫 번째 순서로 printf를 대신할 수 있는 함수를 정의하고자 한다.
printf 함수는 서식을 지정해야 하기 때문에 상대적으로 빈번히 호출하기가 번거로운 함수이다.
그래서 서식지정을 매번 하지 않아도 되도록 다음과 같이 함수를 정의하였다.

void ShowAddResult(int num) // 인자전달 (O), 반환 값 (X) {
   printf("덧셈 결과 출력 : %d \n", num);
}
위의 함수 정의에서 반환형이 void로 선언되었다.
여기서 사용된 void에는 '반환하지 않는다.'라는 뜻이 담겨있다.
실제로 함수의 몸체부분을 보면 return문이 없음을 알 수 있다.
이어서 프로그램 사용자로부터 정수를 입력 받을 때 호출하는 함수를 정의하고자 한다.
이 함수는 scanf함수보다 호출하기 편리하도록 다음과 같이 정의하였다.

int ReadNum(void) // 인자전달 (X), 반환 값 (O) {
   int num;
   scanf_s("%d", &num);
   return num;
}
위의 함수에서는 매개변수의 선언 위치에 void 선언이 등장하였다!
여기서 사용된 void는 '인자를 전달하지 않는다.'라는 뜻이 담겨있다.
따라서 함수를 호출할 때 실제로 인자를 전달하면 안 된다.
마지막으로 프로그램의 사용방법을 소개하는 함수를 다음과 같이 정의하고자 한다.
이 함수는 단순히 메시지를 전달하는 함수이기 때문에 인자의 전달도 값의 반환도 불필요하다.
따라서 매개변수도, 그리고 반환형도 void로 선언되었다.

void HowToUseThisProg(void) // 인자전달 (X), 반환 값 (X) {
   printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다. \n");
   printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}
이렇게 해서 반환형의 유무와 매개변수의 유무에 따라서 구분할 수 있는 함수의 유형을 모두 살펴보았다.
*/