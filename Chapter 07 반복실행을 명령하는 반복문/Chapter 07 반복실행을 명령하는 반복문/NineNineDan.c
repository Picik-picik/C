#include <stdio.h>

int main(void) {
	int dan = 0, num = 1;
	printf("몇 단? : ");
	scanf_s("%d", &dan);

	while (num < 10) {
		printf("%d X %d = %d\n", dan, num, dan*num);
		num++;
	}
	return 0;
}
/*
while (1)
    printf("%d X %d = %d \n", dan, num, dan*num);
    num++;
숫자 1은 '참'을 의미하는 대표적인 값이다. 따라서 이 값이 반복의 조건을 대신하면, 그 결과는 항상 '참'이 되어 빠져나가지 못하는 반복문이 구성된다.
실제로 특정 기능을 완성하기 위해서 break문과 함께 위의 형태로 무한루프를 구성하기도 한다.
즉, 무한루프는 프로그래머의 실수로만 만들어지는 것이 아니라, 필요에 의해서 만들어지기도 한다.
*/
