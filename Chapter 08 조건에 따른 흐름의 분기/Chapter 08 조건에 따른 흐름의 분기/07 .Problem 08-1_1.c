#include <stdio.h>

int main(void) {
	int num;

	printf("문제 08-1 [if~else문의 활용]\n");
	printf("문제 1)\n");

	for (num = 1; num < 100; num++) {
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d ", num);
	}

	return 0;
}

/*
10행의 if문은 다음과 같이 작성할 수도 있다.
if( !(i%7) || !(i%9) )
   printf("%d ", i);

논리 연산자로 '참'을 '거짓'으로, '거짓'을 '참'으로 변경한다. 따라서 % 연산의 결과로 거짓에 해당하는
0이 반환되어야 if문의 조건은 '참'이 되어, 아래의 printf 함수 호출문을 실행하게 된다.
*/