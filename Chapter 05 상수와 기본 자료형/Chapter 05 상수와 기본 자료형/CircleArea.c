#include <stdio.h>

int main(void){
	double red;
	double area;
	printf("원의 반지름 입력 : ");
	scanf_s("%lf", &red);

	area = red * red * 3.1415;
	printf("원의 넓이 : %f\n", area);
	return 0;

	// double형 데이터를 출력할 때는 서식문자 %f, 입력 받을 때는 서식문자 %lf 

	/*
	실수 자료형의 정밀도
	실수 자료형                  소수점 이하 정밀도       바이트 수
	float			    6자리	                  4
	double			    15자리                  8
	long double	   	    18자리                  12
	*/

	/*
	unsigned를 붙여서 0과 양의 정수만 표현할 수 있다.
	- 정수 자료형의 이름 앞에만 unsigned를 붙일 수 있다.
	- unsigned가 붙으면, MSB도 데이터의 크기를 표현하는데 사용이 된다.
	- 따라서 표현할 수 있는 값이 0 이상의 범위로 두 배가 된다.
	ex) char = -128이상 +127이하
	    unsigned char = 0이상 +255이하
	*/
}
