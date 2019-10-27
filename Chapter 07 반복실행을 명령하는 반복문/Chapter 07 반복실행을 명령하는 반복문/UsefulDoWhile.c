#include <stdio.h>

int main(void) {
	int total = 0, num = 0;

	do {
		printf("정수 입력(0 to quit) : ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계 : %d\n", total);
	return 0;
}

/*
do while문은 처음부터 '반복조건'을 만족하지 못하면 '반복영역'을 한번도 실행하지 않는 while문과 달리,
반복영역을 최소한 한번은 실행하는 구조이다.
do {
    printf("Hello world!\n");
	num++;
} while (num < 3);
"while문과는 반복조건의 검사위치가 다르며, 이로 인해서 반복영역을 최소한 1회 이상 실행한다는 점이 while문과의 유일한 차이점이다."
언제 while문, do~while문을 쓰는지 => 반복영역이 무조건 한 번 이상 실행되어야 할 때 do~while문을 사용한다.
*/