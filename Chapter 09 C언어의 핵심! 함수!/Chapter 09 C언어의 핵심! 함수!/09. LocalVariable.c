#include <stdio.h>
int SimpleFuncOne(void) {
	int num = 10; // 이후부터 SimpleFuncOne의 num 유효
	num++;
	printf("SimpleFuncOne num : %d \n", num);
	return 0;     // SimpleFuncOne의 num이 유효한 마지막 문장
}

int SimpleFuncTwo(void) {
	int num1 = 20; // 이후부터 num1 유효
	int num2 = 30; // 이후부터 num2 유효
	num1++, num2--;
	printf("num1 & num2 : %d %d \n", num1, num2);
	return 0;      // num1, num2 유효한 마지막 문장
}

int main(void) {
	int num = 17; // 이후부터 main의 num 유효

	SimpleFuncOne();
	SimpleFuncTwo();

	printf("main num : %d \n", num);

	return 0;     // main의 num이 유효한 마지막 문장
}

/*
변수는 선언되는 위치에 따라서 크게 '전역변수'와 '지역변수'로 나뉜다. 두 가지에 대해서 차이점을 보인다.

* 메모리상에 존재하는 기간
* 변수에 접근할 수 있는 범위

함수 내에만 존재 및 접근 가능한 지역변수(Local Variable)
'지역변수'에서 말하는 '지역'이란 중괄호에 의해 형성되는 영역을 뜻한다.
따라서 중괄호 내에 선언되는 변수는 모두 지역변수다.
지역변수는 선언된 지역 내에서만 유효하다는 특성을 지닌다.

SimpleFuncOne 함수에서 선언된 변수 num은 중괄호 안에 선언되었으므로 지역변수이다.
따라서 이 변수는 선언된 이후부터 SimpleFuncOne 함수를 빠져나가기 직전까지만 유효하다.
왜냐하면 '지역변수는 해당지역을 벗어나면 자동으로 소멸'되기 때문이다.

"그럼 SimpleFuncOne 함수가 호출될 때마다 변수 num은 새롭게 메모리 공간에 할당되나요?"

그렇다! SimpleFuncOne 함수가 열 번 호출되면, 총 10회에 걸쳐서 변수 num은 할당되고 또 소멸된다.
그리고 지역변수는 선언된 지역 내에서만 유효하기 때문에 선언된 지역이 다르면 이름이 같아도 문제가 되지 않는다.
때문에 위 예제의 main 함수 내에도, 그리고 SimpleFuncOne 함수 내에도 동일한 이름의 변수 num이 선언될 수 있는 것이다.

예제 LocalVariable.c의 흐름에 따른 지역변수의 할당과 소멸
프로그램의 실행에 따른 지역변수의 생성 및 소멸의 과정을 이해하는 것은 지역변수 자체를 이해하는 것이기 때문에 매우 중요하다.
예제의 실행흐름에 따른 지역변수의 할당과 소멸의 과정을 전체적으로 보이겠다.
이후에 Chapter 25에서는 C 프로그램의 메모리 구조에 대해서 자세히 설명한다.
그리고 그 때는 지역변수가 할당되는 메모리의 다음 특징도 언급된다.

* 지역번수는 '스택(stack)'이라는 메모리 영역에 할당된다.
* 지역변수는 접시에 쌓듯이 할당된다.

하지만 여기서는 쉬운 설명을 위해서 스택의 특성을 생략하고 메모리를 단순화시켜서 설명을 진행하겠다.

- 첫 번째 : main 함수의 호출
main 함수가 호출되면 변수 num이 선언된다. 따라서 메모리상에 num이라는 이름의 변수가 할당되고 17로 초기화된다.
변수 num은 main 함수 내에서 선언되었으니, main 함수가 종료될 때까지 메모리상에 존재하게 된다.

- 두 번째 : SimpleFuncOne 함수의 호출과 종료(반환)
이어서 SimpleFuncOne 함수를 호출하게 된다. 따라서 메모리 공간에는 추가로 변수 num이 할당되고 10으로 초기화된다.
그런데 이 상태는 main 함수가 종료된 상황이 아니기 때문에
main 함수 호출 시 할당된 변수 num도 메모리 공간에 함께 존재한다.
그런데 위의 함수 SimpleFuncOne이 return문을 실행하면서 main 함수로 돌아가게 되면,
SimpleFuncOne 함수에세 선언된 변수 num은 메모리 공간에서 사라지게 된다.
즉, 반환 이후에는 main 함수의 변수 num만 남게 된다.

- 세 번째 : SimpleFuncTwo 함수의 호출과 종료(반환)
SimpleFuncOne 함수 반환 이후에 이어서 SimpleFuncTwo 함수를 호출하게 된다.
따라서 메모리 공간에는 변수 num1과 num2가 할당되며, 각각 20과 30으로 초기화된다.
이로써 메모리 공간에는 main 함수의 변수 num과 SimpleFuncTwo 함수의 변수 num1, num2가 함께 존재하게 된다.
이번에도 이어서 SimpleFuncTwo 함수가 반환을 하면, 함수 내에서 선언했던 변수 num1, num2는 소멸되고,
main 함수의 변수 num만 남게 된다.

- 마지막 : main 함수의 종료(반환)
이제 main 함수의 마지막 문장인 return문을 실행할 차례이다. 이 문장이 실행됨으로써
main 함수에서 선언한 변수 num이 마지막으로 소멸된다.

"지역변수는 해당 선언문이 실행될 때 메모리 공간에 할당되었다가, 선언문이 존재하는 함수가 반환을 하면(종료를 하면)
 메모리 공간에서 소멸된다."
*/