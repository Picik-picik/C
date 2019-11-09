#include <stdio.h>

int main(void) {
	int num;
	printf("1이상 5이하의 정수 입력 : ");
	scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2는 TWO \n");
		break;
	case 3:
		printf("3는 THREE \n");
		break;
	case 4:
		printf("4는 FOUR \n");
		break;
	case 5:
		printf("5는 FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}

	return 0;
}

/*
switch문은 if...else if...else와 유사한 측면이 있다. 때문에 경우에 따라서는 이를 대체하기도 한다.
하지만 사용할 수 있는 영역은 if...else if...else에 비해 제한적이다.

switch(n)에서의 n은 switch문으로 전달되는 인자의 정보이다. 이 n은 정수형 변수이어야 하는데,(이 정수형 변수에는 char형도 포함된다.)
대표적으로 int형 변수가 위치하게 된다. 그리고 이 n에 저장된 값에 따라서 실행할 영역이 결정된다.
n에 저장된 값이 1이면 case 1의 영역을 실행하게 되고, n에 저장된 값이 2이면 case 2의 영역을 실행하게 된다.
참고로 case 1과 case 2가 의미하는 바는 각각 다음과 같다.

"n을 통해 전달된 정수의 값이 1인 경우!"
"n을 통해 전달된 정수의 값이 2인 경우!"

따라서 switch문에 1이 전달되면 case 1의 영역이 실행되어 문자열 "A1", "A2"가 출력되고,
switch문에 2가 전달되면 case 2의 영역이 실행되어 문자열 "B1", "B2"가 출력된다.
이렇듯 case문은 위치를 표시하는데 사용되므로 '레이블(label)'이라 한다.
필요에 따라서 case 레이블은 얼마든지 추가할 수 있고, case 레이블의 상수 값을 1부터 시작하지 않아도 된다.
또한 레이블의 끝에는 세미콜론이 아닌 콜론을 붙이도록 되어 잇으니, 세미콜론을 붙이지 않도록 주의해야 한다.
하단부에 위치한 default 레이블은 if...else if...else의 마지막 else와 유사하다. 즉 일치하는 case 레이블이 없을 경우에
실행되는 영역을 표시할 때 사용된다.(불필요하면 생략 가능)

break문은 반복문을 탈출하는 용도로 사용된다. 그런데 switch문을 탈출하는 용도로도 사용된다.
사실 switch문이 영역별로 구분되어 해당 영역만 실행되도록 돕는 것은 break문이다.
switch문에 2가 전달되어 case 2로 이동하여 그 이하를 모두 실행해버린다.
break문이 없다면 default 영역에 있는 문장들도 실행이 된다. 이것이 바로 switch문의 기본 동작방식이다.
switch문에 1이 전달되었다고 가정해보면 case 1의 위치로 이동하여 그 이후를 전부 실행하게 된다.
따라서 문자열 "A1", "A2", "B1", "B2", "default"까지 출력된다.
break문이 필요한 이유는 실행영역을 묶기 위함이다.
*/