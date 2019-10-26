#include <stdio.h>

int main(void) {
	printf("I like programming \n");
	printf("I love puppy! \n");
	printf("I am so happy \n");

	// printf("앞집 강아지가 말했다. "멍~! 멍~!" 정말 귀엽다."); 에러 발생
	/* "큰 따옴표는 문자열의 시작과 끝으로 해석이 되니, 큰 따옴표 자체의 출력을 원하는 경우에는
	    큰 따옴표 앞에 \ 문자를 붙여주기로 하자." => 특수문자 \"의 탄생 */
	printf("\n앞집 강아지가 말했다. \"멍~! 멍~!\" 정말 귀엽다.\n"); // 특수문자를 사용하여 변경 후

	printf("\n특수문자의 종류\n");
	printf("경고음 \a \n");
	printf("백스페이스(backspace) 가나다라\b \n");
	printf("폼 피드(form feed) \f \n");
	printf("개 행(new line) \n");
	printf("캐리지 리턴(carriage return) \r \n");
	printf("수 \t 평 \t 탭 \n");
	printf("수 \v 직 \v 탭 \n");
	printf("작은 따옴표 출력 \' \n");
	printf("큰 다옴표 출력 \" \n");
	printf("물음표 출력 \? \n");
	printf("역슬래쉬 출력 \\ \n");

	printf("\\f와 \\v는 모니터 출력이 아닌 프린터 출력을 위해 정의된 특수문자이기 때문에 이상한 문자가 출력된다.\n");
	printf("즉, 모니터 출력에서는 별 의미가 없는 특수문자들이다.\n");

	return 0;
}

/*
특수문자의 종류
\a     경고음
\b     백스페이스(backspace)
\f     폼 피드(form feed)
\n     개 행(new line)
\r     캐리지 리턴(carriage return)
\t     수평 탭
\v     수직 탭
\'     작은 따옴표 출력
\"     큰 따옴표 출력
\?     물음표 출력
\\     역슬래쉬 출력
*/
