/*
int num;
scanf("%d", &num); // Ű����� �Էµ� ������ ���� num�� �����϶�.
*/
#include <stdio.h>

int main(void){
	int result;
	int num1, num2;

	printf("���� one : "); // ù ��° ���� �Է� 
	scanf_s("%d", &num1);
	printf("���� two : "); // �� ��° ���� �Է� 
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;

	/*
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3); // �� 3���� 10���� ���� �Է�
	*/
}