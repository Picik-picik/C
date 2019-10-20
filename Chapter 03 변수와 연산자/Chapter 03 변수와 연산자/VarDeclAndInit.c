#include <stdio.h>

int main(void){
	int num1, num2;			// 변수 num1, num2의 선언 
	int num3 = 30, num4 = 40;	// 변수 num3, num4의 선언 및 초기화 

	// printf("num1 : %d, num2 : %d\n", num1, num2); 교재에서는 실행되는 것 같으나, 실습해보니 초기화되지 않아 실행 시 오류 발생. 쓰레기값이 나옴.
	num1 = 10;	// 변수 num1의 초기화 
	num2 = 20;	// 변수 num2의 초기화 

	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf("num3 : %d, num4 : %d\n", num3, num4);
	return 0;

	/* 변수선언 시 주의할 사항
	(O)
	int num1;
	int num2;
	num1=0;	// 변수선언 이후에 등장한 초기화 문장
	num2=0;	// 변수선언 이후에 등장한 초기화 문장

	(X)
	int num1;
	num1=0;		// 이 문장은 변수의 선언문이 아니다.
	int num2;	// 컴파일 에러가 발생하는 지점
	num2=0;

	유효하지 않은 변수 선언문 예시
	int 7ThVal;		// 변수의 이름이 숫자로 시작
	int phone#;		// 변수의 이름에 #과 같은 특수문자는 올 수 없다.
	int your name; 	// 변수의 이름에는 공백이 올 수 없다.

	int num1=24; 		// num1을 가리켜 int형 변수라 한다.
	double num2=3.14; 	// num2를 가리켜 double형 변수라 한다.
	*/
}