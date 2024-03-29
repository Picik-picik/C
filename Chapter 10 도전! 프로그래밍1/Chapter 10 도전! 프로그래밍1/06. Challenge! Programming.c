#include<stdio.h>

const int H = 60 * 60;
const int M = 60;

void SecondToHMS(int sec);

int main(void) {
	int sec;

	printf("초(second)를 입력하세요 : ");
	scanf_s("%d", &sec);

	SecondToHMS(sec);

	return 0;
}

void SecondToHMS(int sec)
{
	int h, m, s;

	/*시 구하기 */
	h = sec / H;
	sec = sec % H;

	/*분 구하기 */
	m = sec / M;
	sec = sec % M;

	/*초 구하기 */
	s = sec;

	printf("[h:%d, m:%d, s:%d] \n", h, m, s);
}
