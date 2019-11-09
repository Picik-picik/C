#include <stdio.h>

int main(void){
	/*
	int num = 10;
	int sz1 = sizeof(num);	// 변수 num의 크기를 계산하여 sz1을 초기화
	int sz2 = sizeof(int);	// 자료형 int의 크기를 계산하여 sz2을 초기화

	printf("%d %d\n", sz1, sz2);
	* sizeof는 함수가 아닌 연산자이다!
	*/

	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기 : %d\n", sizeof(ch));
	printf("변수 inum의 크기 : %d\n", sizeof(inum));
	printf("변수 dnum의 크기 : %d\n", sizeof(dnum));

	printf("char의 크기 : %d\n", sizeof(char));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("double의 크기 : %d\n", sizeof(double));
	return 0;
}
