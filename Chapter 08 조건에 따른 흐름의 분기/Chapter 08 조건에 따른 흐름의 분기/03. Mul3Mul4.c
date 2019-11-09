#include <stdio.h>

int main(void) {
	int num;

	for (num = 1; num < 100; num++) {
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 또는 4의 배수 : %d \n", num);
	}

	return 0;
}

/*
if (num % 3 == 0 || num % 4 == 0)
이 중에서 || 연산자보다 관계 연산자인 == 연산자의 우선순위가 높기 대문에 이는 다음과 같이 다시 쓸 수 있다.

if ( (num % 3 == 0) || (num % 4 == 0) )
즉, 두 개의 == 연산의 결과를 대상으로 || 연산을 진행하게 된다. for문은 중괄호를 생략하여 다음과 같이 쓸 수 있다.

for (num = 1; num < 100; num++)
   if (num % 3 == 0 || num % 4 == 0)
      printf("3 또는 4의 배수 : %d \n", num);
하나의 if문이기 때문에 가능하다. if문은 몇 줄에 걸쳐서 표현되건 하나의 문장으로 인식된다.
때문에 위의 경우에는 for문에 속하는 중괄호를 생략할 수 있다.
그럼에도 불구하고 중괄호를 삽입한 이유는 코드를 읽기 쉽게 하기 위해서이다.
*/