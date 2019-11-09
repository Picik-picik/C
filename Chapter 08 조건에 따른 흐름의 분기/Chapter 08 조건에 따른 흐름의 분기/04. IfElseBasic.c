#include <stdio.h>

int main(void) {
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다. \n");
	else
		printf("입력 값은 0보다 작지 않다. \n");

	return 0;
}

/*
키워드 else는 독립적으로 사용되는 것이 아니라 키워드 if와 더불어 하나의 문장을 구성하는 형태로 사용된다.
반드시 기억하자! if와 else가 만나서 이루는 문장의 수는 둘이 아니라 하나다!

if ( num1 > num2 ) { // num1>num2이 '참'이면 아래의 if 블록을 실행!
   // if 블록
   printf("num1이 num2보다 큽니다. \n);
   printf("%d > %d \n", num1, num2);
}
else { // num1>num2이 '거짓'이면 아래의 else 블록을 실행!
   // else 블록
   printf("num1이 num2보다 크지 않습니다. \n);
   printf("%d <= %d \n", num1, num2);
}

즉, if절의 조건이 '참'이면 중괄호로 묶여있는 if 블록이 실행되고,
조건이 '참'이 아니면 중괄호로 묶여있는 else 블록이 실행되는 구조이다.
*/