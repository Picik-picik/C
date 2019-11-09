#include <stdio.h>

int main(void) {
	int num1 = 7, num2 = 13;
	printf("%o %#o\n", num1, num1); // 8진수를 8진수답게, 16진수를 16진수답게 출력하고 싶다면 서식문자 사이에 #를 넣어 출력하면 된다.
	printf("%x %#x\n", num2, num2); // 출력된 내용이 16진수 정보임을 알리기 위해서 가급적 서식문자에 #을 포함시켜서 출력하는 것이 좋다.
	return 0;
}
