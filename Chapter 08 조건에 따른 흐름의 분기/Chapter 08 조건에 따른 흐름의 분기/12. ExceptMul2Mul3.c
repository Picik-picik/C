#include <stdio.h>

int main(void) {
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}

	printf("end! \n");

	return 0;
}

/*
반복문 안에서 continue문을 실행하게 되면, 실행중인 위치에 상관없이 반복문의 조건검사 위치로 이동을 한다.
그리고 검사결과 반복조건이 여전히 '참'이라면 반복영역을 다시 실행하게 된다.

"실행된 continue문의 이후를 이어서 실행하는 것 아닌가요?"

아니다! continue문의 이후는 생략을 하고, 다시 실행을 하게 된다.

위 예제에서 num이 6인 경우에는 continue문을 실행하게 되는데,
이 때 건너 뛰고 num의 값이 7로 증가한 상태에서 반복영역을 처음부터 재실행하게 되는 것이다.

break문 - while문 탈출 (아래)
continue문 - 조건검사로 이동 (위)
break문은 무한루프를 빠져나가는 용도로 유용하게 사용된다.
*/