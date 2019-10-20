#include <stdio.h>

int main(void){
	/*
	int num = 30 + 40; // 30과 40은 상수이다!
	- 1단계 : 정수 30과 40이 메모리 공간에 상수의 형태로 저장된다.
	- 2단계 : 두 상수를 기반으로 덧셈이 진행된다.
	- 3단계 : 덧셈의 결과로 얻어진 정수 70이 변수 num에 저장된다.
	변수와 달리 이름이 없는 상수를 '리터럴 상수' 또는 '리터럴'이라 한다.

	int inum = 5;			// 정수형 상수
	double dnum = 7.15;		// 실수형 상수
	*/

	printf("literal int size : %d\n", sizeof(7));
	printf("literal double size : %d\n", sizeof(7.14));
	printf("literal char size : %d\n", sizeof('A'));
	return 0;

	/*
	float num1 = 5.789;		// 경고 메세지 발생
	float num2 = 3.24+5.12;	// 경고 메세지 발생
	return 0;
	=> float num1 = 5.789f;		// 경고 메세지 발생 안 함
	float num2 = 3.24+5.12F; // 소문자 f 대신 대문자 F를 써도 된다!

	*정수형 상수의 표현을 위한 접미사
	접미사          자료형                   사용의 예
	U		unsigned int  		unsigned int n = 1025U
	L		long			long n = 2467L
	UL		unsigned long		unsigned long n = 3456UL
	LL		long long		long long n = 5678LL
	ULL		unsigned long long	unsigned long long n = 8979ULL

	* 실수형 상수의 표현을 위한 접미사
	F		float			float f = 3.15F
	L 		long double		long double f = 5.789L

	대소문자를 구분하지 않으므로 눈에 잘 띄도록 상황에 맞게 대소문자를 선택하면 된다.
	*/

	/*
	이름을 지니는 심볼릭 상수 : const 상수
	심볼릭 상수를 표현하는 방법 2가지 : 1) 'const 키워드'를 사용하는 방법, 2) 매크로를 이용하는 방법
	const int MAX = 100;		// MAX는 상수! 따라서 값의 변경 불가!
	const double PI = 3.1415; // PI는 상수! 따라서 값의 변경 불가!

	const int MAX;	// 쓰레기 값으로 초기화 되어버림
	MAX = 100; 		// 값의 변경 불가! 따라서 컴파일 에러 발생!

	변수와 상수의 구분을 용이하게 하는데 목적이 있는 관례이다.
	"상수의 이름은 모두 대문자로 표시하고,
	둘 이상의 단어로 연결할 때에는 MY_AGE와 같이 언더바를 이용해서 두 단어를 구분하는 것이 관례이다!"
	*/
}
