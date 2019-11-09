#include <stdio.h>

int main(void) {
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);      // e 표기법 기반의 출력
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);  // e 표기법 기반의 출력
	return 0;
}

/*
'e 표기법' => 지수형태의 출력 표현
0.00000000000000000001 => 1.0e-20
1.2e+12, 1.15e-12, 1.7e-15
*/
