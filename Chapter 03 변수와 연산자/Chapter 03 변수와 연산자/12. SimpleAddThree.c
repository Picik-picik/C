/*
int num;
scanf("%d", &num); // 키보드로 입력된 정수를 변수 num에 저장하라.
*/
#include <stdio.h>

int main(void){
	int result;
	int num1, num2;

	printf("정수 one : "); // 첫 번째 정수 입력 
	scanf_s("%d", &num1);
	printf("정수 two : "); // 두 번째 정수 입력 
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;

	/*
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3); // 총 3개의 10진수 정수 입력
	*/
}
