#include <stdio.h>

int Factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void) {
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));

	return 0;
}

/*
재귀함수는 자료구조나 알고리즘의 어려운 문제를 단순화하는데 사용되는 중요한 무기이다.
무엇보다도 재귀함수가 있기에 재귀적인 수학적 수식을 그대로 코드로 옮길 수 있다.
이러한 재귀함수의 특징을 보이기 위해 팩토리얼(factorial) 값을 반환하는 함수를 
재귀적으로 구현해 보겠다.
정수 n의 팩토리얼은 n!로 표시하며, 이는 수식적으로 다음과 같다.

n! = n X (n-1) X (n-2) X (n-3) X .... X 2 X 1

따라서 3!은 3X2X1이며, 5!은 5X4X3X2X1이다.
정수 n 팩토리얼은 정수 n과 n-1 팩토리얼의 곱으로 표현할 수 있다.
f(0) 즉, 0!은 1이므로 이것이 재귀함수의 탈출조건이 된다.(수학적으로 0!과 1!은 모두 그 값이 1로 동일하다)
인자로 전달된 정수의 팩토리얼 값을 반환하는 함수의 이름을 Factorial이라 할 때, n이 1이상인 경우의
수식 nXf(n-1)은 다음과 같이 표현이 된다.

if (n >= 1)
   return n * Factorial(n - 1);

그리고 n이 0인 경우의 결과값 1은 다음과 같이 표현이 된다.

if (n == 0)
   return 1;

따라서 Factorial 함수에 0 이상의 값만 전달된다는 가정을 하면, 위의 if문을 하나의 if~else문으로 묶을 수 있다.

if (n == 0)
   return 1;
else
   return n * Factorial(n - 1);

이로써 팩토리얼 값을 반환하는 Factorial 함수를 완성한 셈이다.
위의 if~else문이 Factorial 함수의 몸체에 해당하니 말이다.

참고로 지금까지 보인 Factorial 함수의 정의과정은 여러분이 앞으로 재귀함수를 구현하는데
있어서 중요한 모델이 된다.
그러니 함수의 코드만 이해하려 하지 말고, 그 과정을 이해하기 바란다.
*/