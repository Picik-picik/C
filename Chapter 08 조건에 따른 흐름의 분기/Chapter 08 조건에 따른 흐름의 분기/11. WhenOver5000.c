#include <stdio.h>

int main(void) {
	int sum = 0, num = 0;

	while (1) {
		sum += num;
		if (sum > 5000)
			break; // break문 실행! 따라서 반복문 탈출
		num++;
	}

	printf("sum : %d \n", sum);
	printf("num : %d \n", num);

	return 0;
}

/*
break문이 실행되면, break문을 가장 가까이서 감싸고 있는 반복문 하나를 빠져 나오게 된다.

while문을 돌다가 sum이 5,000보다 커지면 if문의 조건이 '참'이 되어 break문을 실행하게끔 되어있다.
그런데 여기서 break문이 if문과 함께 쓰였다고 해서 if문을 빠져 나오는 것으로 오해하면 안 된다.
다시 한번 강조하지만 break문은 자신을 감싸는 가장 가까운 위치의 반복문 하나를 빠져나가는데 사용이 된다.
*/