#include <stdio.h>

int main(void){
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, reuslt2 = 0;

	printf("size of num1 & num2 : %d, %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4 : %d, %d\n", sizeof(num3), sizeof(num4));

	printf("size of char add : %d\n", sizeof(num1 + num2));		// 4 ��� 
	printf("size of short add : %d\n", sizeof(num3 + num4));	// 4 ��� = char�� �����Ϳ� short�� �����Ͱ� int�� �����ͷ� ��ȯ�Ǿ ���� 

	result1 = num1 + num2;
	reuslt2 = num3 + num4;
	printf("size of result1 & result2 : %d, %d\n", sizeof(result1), sizeof(reuslt2));
	return 0;

	/*
	�Ϲ������� CPU�� ó���ϱ⿡ ���� ������ ũ���� ���� �ڷ����� int�� �����Ѵ�.
	���� int�� ������ �ӵ��� �ٸ� �ڷ����� ����ӵ��� ���ؼ� �����ϰų� ������.
	*/
}