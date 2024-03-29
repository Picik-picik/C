#include <stdio.h>

void SimpleFunc(void) {
	static int num1 = 0; // 초기화하지 않으면 0 초기화
	int num2 = 0;        // 초기화하지 않으면 쓰레기 값 초기화
	num1++, num2++;
	printf("static : %d, local : %d \n", num1, num2);
}

int main(void) {
	int i;

	for (i = 0; i < 3; i++)
		SimpleFunc();

	return 0;
}

/*
전역변수와 지역변수 모두에 static 선언을 추가할 수 있다.
여기서는 지역변수의 static 선언에 대해서 설명하고 전역변수의 static 선언에 대해서는 한참 뒤에서 설명하고자 한다.
지역변수에 static 선언이 붙게 되면, 이는 전역변수의 성격을 지니는 변수가 된다.
지역변수의 특성은 다음 두 가지 아닌가?

* 선언된 함수 내에서만 접근이 가능하다.
* 함수 내에 선언된 지역변수는 해당 함수가 반환하면 소멸된다.

그런데 함수 내에 선언된 지역변수에 static 선언이 붙게 되면, 다음의 특성을 지니게 된다.

* 선언된 함수 내에서만 접근이 가능하다. (지역변수 특성)
* 딱 1회 초기화되고 프로그램 종료 시까지 메모리 공간에 존재한다. (전역변수 특성)

"static으로 선언된 지역변수 num1은 SimpleFunc 함수가 호출되어야 선언이 되는구나!"

이는 잘못된 생각이다. 위의 static 선언이 의미하는 바는 다음과 같다.

"난 사실 전역변수랑 성격이 같아. 초기화하지 않으면 전역변수처럼 0으로 초기화되고, 프로그램 시작
 과 동시에 할당 및 초기화되어서 프로그램이 종료될 때까지 메모리 공간에 남아있지! 그럼 왜 이 위치
 에 선언되었냐고? 그건 접근의 범위를 SimpleFunc로 제한하기 위해서야!"

정리하면, static으로 선언된 지역변수는 전역변수와 동일한 시기에 할당되고 소멸된다.
단, 지역변수와 마찬가지로 선언된 함수 내에서만 접근이 가능하다. 따라서 프로그램이 실행되면
SimpleFunc 함수의 실제 모습은 다음과 같다.

void SimpleFunc(void) {
   static int num1 = 0; // 사실은 존재하지 않아!
   int num2 = 0;
   num1++, num2++;
   printf("static : %d, local : %d \n", num1, num2);
}

static 지역변수는 좀 써도 되나요?
static 지역변수로만 해결이 가능한 문제는 존재하지 않는다.
static 지역변수는 매우 쉽게 전역변수로 대체가 가능하기 때문이다.
하지만 static 지역변수는 전역변수보다 좋다.(안정적이다) 전역변수와 마찬가지로 프로그램이
종료될 때까지 메모리 공간에 남아있지만, 접근할 수 있는 범위를 하나의 함수로 제한했기 때문이다.
즉, 앞서 말한 전역변수의 단점을 static 지역변수가 어느 정도 해결한 셈이다.
다라서 static 지역변수를 전역변수로 대체하는 일은 없어야 한다. 반대로 전역변수를 static 지역변수로
대체할 수 있다면 대체해서 프로그램의 안전성을 높여야 한다.
프로그램이 실행되는 동안에 계속해서 유지해야 할 변수가 있다면 대부분의 경우 전역변수를 떠올린다.
그런데 그 변수에 접근하는 영역이 하나의 함수로 제한된다면, 우리는 static 지역변수의 선언을 고려해야 한다.
이제 static 변수의 성격과 용도를 충분히 이해했을 것이다. 대문에 이름에 '지역변수'가 들어가는 것이
어울리지 않는다는 것도 느꼈을 것이다. 그래서 일반적으로 'static 지역변수'라는 표현 대신
그냥 'static 변수'라는 표현을 사용한다.

지역변수에는 다음과 같이 register라는 선언을 추가할 수 있다.
이렇게 해서 선언된 변수를 가리켜 '레지스터 변수'라 한다.

int SoSimple(void) {
   register int num = 3;
   ......
}

위와 같이 선언이 되면 변수 num은 CPU 내에 존재하는 '레지스터'라는 메모리 공간에 저장될 확률이 높아진다.
왜냐하면 이는 다음과 같은 힌트를 컴파일러에게 전달하는 선언이기 때문이다.

"이 변수는 내가 빈번히 사용하거든, 그래서 접근이 가장 빠른 레지스터에 저장하는 것이 성능향상에
 도움이 될 거야"

레지스터는 CPU내에 존재하는 그 크기가 매우 작은 메모리이다. 하지만 CPU내에 존재하기 때문에
이 메모리에 저장된 데이터를 대상으로 하는 연산은 매우 빠르다. 바로 이러한 레지스터의 활용과
관련해서 컴파일러에게 힌트를 주는 선언이 바로 register 선언이다.
따라서 컴파일러는 이 선언을 힌트로 레지스터의 활용여부를 결정한다.
다시 한번 말하지만 최종결정은 컴파일러가 내린다. 우리가 아무리 register 선언을 추가해도
컴파일러가 합당하지 않다고 판단하면 레지스터에 할당되지 않는다.
반대로 아무런 선언을 하지 않아도 컴파일러가 레지스터에 할당해야겠다고 판단하면
그 변수는 레지스터에 할당된다.

"전역변수에는 register 선언을 추가할 수 없나요?"

레지스터는 하나의 변수가 죽치고 자리하기엔 너무나도 중요하고 비싼 메모리 공간이다.
따라서 전역변수를 레지스터에 할당하는 것은 있을 수 없는 일이다.
따라서 전역변수에는 register 선언을 추가할 수 없다.
혹 컴파일러가 이를 허용한다 해도 이는 의미 없는 선언일 뿐이다.
*/
