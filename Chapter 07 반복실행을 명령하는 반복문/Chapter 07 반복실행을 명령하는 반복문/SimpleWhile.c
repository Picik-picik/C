#include <stdio.h>

int main(void) {
	int num = 0;

	while (num < 5) {
		printf("Hello world! %d \n", num);
		num++; // 주석처리 할 경우 반복의 조건이 무너지지 않아서, '무한루프' 현상이 만들어진다.(빠져나오려면 Ctrl+C 입력)
		       // 반복문의 구성에 있어서 중요한 것 중 하나 => '반복의 조건을 무너뜨리기 위한 최소한의 연산'
		/*
		반복의 대상이 하나의 문장이라면 중괄호는 생략 가능
		while (num < 5)
		    printf("Hello world! %d \n", num++); 또는
		while (num < 5)
		    printf("Hello world! %d \n", num), num++;
		하지만 코드의 라인수가 줄어든다고 무조건 좋은 것은 아니니, 중괄호의 생략을 목적으로, 두 줄에 걸쳐서 표현해야 적절한 코드를
		억지로 한 줄로 줄이는 것은 바람직하지 못하다.
		*/
	}
	return 0;
}