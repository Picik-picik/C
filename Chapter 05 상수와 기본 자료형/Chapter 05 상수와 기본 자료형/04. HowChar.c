#include <stdio.h>

int main(void){
	/*
	char ch1 = 'A';
	char ch2 = 'C'; 프로그램상에서의 문자표현에는 작은 따옴표가 사용되고 컴파일러에 의해 다음과 같이 변환이 된다.

	char ch1 = 65; // 문자 A의 아스키 코드 값은 65
	char ch2 = 67; // 문자 C의 아스키 코드 값은 67
	*/

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);
	return 0;

	// char는 정수형이다. 문자도 정수의 형태로 표현이 되고, 실제로 char형 변수에 저장되는 것은 정수이기 때문이다. 
}
