#include <stdio.h>

int main(void) {
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;) {
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("��� : %f\n", total / (num - 1));
	return 0;
}
/*
���ʿ��ϴٸ� �ʱ�İ� �������� ����� �ȴ�.
    for (num = 0 ; input >= 0.0; num++) {
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
	}

for( ; ; ) {

}
for���� �߰��� ��ġ�� '���ǽ�'�� ������� ������ '��'���� �ν��� �Ǿ� ���ѷ����� �����ϰ� �ȴ�.
*/