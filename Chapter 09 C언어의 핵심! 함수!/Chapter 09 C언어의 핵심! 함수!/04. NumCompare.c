#include <stdio.h>
int NumberCompare(int num1, int num2);

int main(void) {
	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));

	return 0;
}

int NumberCompare(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

/*
return이 지니는 두 가지 의미 중 한가지 의미만 살리기
키워드 return은 값을 반환하면서 함수를 빠져나갈 때 사용된다. 즉, 두가지 의미가 담겨있다.

* 함수를 빠져나간다!
* 값을 반환한다.

간혹 반환형이 void로 선언된 함수에서는 return문을 사용할 수 없는 것으로 아는 경우가 있는데,
반환형이 void인 함수에서도 다음의 형태로 return문을 삽입할 수 있다.

void NoReturnType(int num) {
   if (num < 0)
      return; // 값을 반환하지 않는 return문!
   ......
}
위의 return문에는 반환할 값이 명시되어 있지 않은데, 이는 return 두 가지 의미 중 다음 한 가지 의미만 담아서 선언했기 때문이다.

"값의 반환 없이 그냥 함수를 빠져나간다!"

이렇듯 값을 반환하지 않고 함수를 빠져나가는 목적으로만 선언이 되었으므로, 반환형이 void형인 함수에도 삽입이 가능하다.
그리고 실제로 반환형이 void인 함수에 이러한 return문이 삽입되는 경우도 간혹 있다.

함수의 정의와 그에 따른 원형의 선언
함수의 위치를 결정할 때에도 주의를 기울어야 한다.

첫 번째 경우 'Increment 함수의 정의'가 'Increment 함수의 호출문'보다 먼저 등장하고 있다.
따라서 컴파일러는 main 함수에 존재하는 Increment 함수의 호출문을 보면서 다음과 같이 판단하고 무리 없이 컴파일 한다.
"아! 앞서 내가 컴파일 했던 Increment 함수를 호출하는구나!"

두 번째 경우 'Increment 함수의 정의'에 앞서 'Increment 함수의 호출문'이 먼저 등장할 경우 문제가 발생한다.
위에서 아래로 컴파일을 진행하는 컴파일러는 Increment 함수의 호출문을 보면서 다음과 같이 불평을 한다.(컴파일 에러를 일으킨다)
"Increment 함수? 난 이런 함수 본적이 없는데"

비록 뒤에 이어서 Increment 함수의 정의가 등장하지만 C 컴파일러는 이를 문제 삼는다.
즉 함수는 호출되기 전에 미리 정의되어야 한다. 하지만 두 번째 경우 구성으로 프로그래밍을 할 수 있는 방법이 있다.
그것은 컴파일러에게 Increment 함수가 뒤에서 나온다고 알려주는 것이다.

"뒤에 가면 반환형이 int이고 int형 정수 하나를 인자로 받는 Increment라는 이름의 함수가 나오거든?
 그러니까 Increment 함수의 호출문을 만나면 그냥 컴파일 해 줘, 에이! 뒤에서 나온다니까!"

그리고 이러한 내용을 담은 선언에 해당하는 것이 다음 문장이다.
이 문장에는 함수의 이름과 반환형 그리고 매개변수 정보가 모두 포함되어 있음에 주목하기 바란다.

int Increment(int n);

따라서 다음과 같이 예제를 작성할 수도 있다.

int Increment(int n);    // 함수의 선언

int main(void) {
   int num = 2;
   num = Increment(num);
   return 0;
}

int Increment(int n) {   // 함수의 정의
   n++;
   return n;
}

이로써 main 함수에서 호출하는 Increment 함수의 정의가 main 함수의 뒤에 올 수 있게 되었다.
참고로 함수의 선언에는 매개변수의 갯수 및 자료형 정보만 포함되면 되기 때문에
다음과 같이 매개변수의 이름을 생략해서 선언하는 것이 가능하다.

int Increment(int);

마찬가지로 예제 SmartAddFunc.c에서 정의한 Add 함수의 선언은 다음 두 가지 모두가 될 수 있다.

int Add(int num1, int num2); // 매개변수의 이름을 포함한 선언
int Add(int, int);           // 매개변수의 이름을 생략한 표현

함수에 대해서 모두 설명하였으나 몇 가지 예를 더 보이고자 한다.
이번에 소개하는 예제는 다음의 상황을 소개하기 위한 것이다.

"하나의 함수 내에 둘 이상의 return문이 존재하는 경우"

그러나 'return문이 실행되면 값을 반환하면서 함수를 빠져나간다'는 기본원칙을 통해서 쉽게 이해할 수 있는 예제이다.

위 예제에서 정의된 함수 NumberCompare는 if의 조건 num1 > num2를 만족하면 다음 문장을 함수의 중간에서 실행한다.

return num1;

이렇듯 함수의 중간에도 얼마든지 return문이 올 수 있다.
그럼 이번에는 5행과 6행을 관찰하자.
이 두 가지 printf 함수 호출문의 두 번째 인자로는 %d에 대응하는 정수가 와야 하는데,
이 위치에 다음과 같이 '함수의 호출'이 대신 자리를 잡고 있다.

printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));

이 경우에는 함수의 반환 값이 전달인자를 대신하게 된다.
즉, NumberCompare 함수가 먼저 호출되어 다음의 형태로 printf 함수의 호출이 진행된다.

printf("3과 4중에서 큰 수는 %d 이다. \n", 4);
printf("7과 2중에서 큰 수는 %d 이다. \n", 7);

참고로 위 예제에서 보인 함수 NumberCompare는 완전하지 못하다. 동일한 값의 두 정수가 전달되었을 때,
값이 동일함을 알리지 못하는 구조로 정의되어 있다. 따라서 이후에 약간의 수정이 불가피하다.
*/
