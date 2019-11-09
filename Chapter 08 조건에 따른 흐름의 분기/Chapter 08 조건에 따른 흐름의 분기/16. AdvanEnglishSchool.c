#include <stdio.h>

int main(void) {
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력 : ");
	scanf_s("%c", &sel);

	switch (sel) {
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break; // 사실 불필요한 break문!
	}

	return 0;
}

/*
case 레이블을 한 줄에 표시할 수도 있다.
case 'M': case 'm'

이렇게 한 줄에 표시하니 두 개의 case 레이블이 묶여있다는 생각이 더 강하게 든다.
두 개의 case 레이블을 묶음으로 인해서 M이 입력되건, m이 입력되건 12행이 실행된다.
switch문의 실행특성을 잘 활용해서 대소문자의 입력에 차이를 두지 않도록 하였다.
switch문에서 break문은 선택적으로 입력을 해야 한다.
break문이 삽입되어서 유용한 경우도 있지만,
break문이 삽입되지 않아서 유용한 경우도 있기 때문이다.

어떤 경우에 switch문, if...else if...else를 사용해야 하는가

첫번째 기준 - "분기의 경우 수가 많아지면 가급적 switch문으로 구현을 합니다."

switch문의 장점은 간결해 보인다는 것이다. 분기의 수가 많아지면 switch문을 사용하는 것이 좋다.

필자도 처음 C언어를 공부할 때는 switch문이 더 간결하다고 생각하지 않았다.
그러나 많은 이들이 switch문을 더 선호하므로 분기의 수가 많은 경우에는 switch문을 사용하려고 노력하였고,
정말로 어느 순간부터는 switch문이 더 간결해 보이기 시작했다.
프로그래밍이란 절대로 혼자서 하는 일이 아니다. 따라서 필자가 그랬던 것처럼,
여러분도 다수가 생각하고 느끼는 방향으로 결정하고 따라갈 필요가 있다.

두번째 기준 - "switch문으로 구현할 수 있는 조건의 구성에는 한계가 있습니다. 따라서 switch문으로 표현하기 애매한 상황에서는
               if...else if...else를 사용해야 합니다."

if...else if...else는 '참'과 '거짓'의 연산결과를 이용해서 실행할 영역을 결정하는 방식이기 때문에
이 모든 것을 switch문으로 대신하는 데는 한계가 있다. 따라서 분기의 수가 많다고 해서 switch문만 고집할 필요는 없다.
*/