#include <stdio.h>

int main(void) {
	int kor, eng, math;
	double avg;

	printf("���� 08-1 [if~else���� Ȱ��]\n");
	printf("���� 3)\n");
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (avg >= 90.0)
		printf("��� %.2f��\n�̹� ������ A�Դϴ�. \n", avg);
	else if (avg >= 80.0)
		printf("��� %.2f��\n�̹� ������ B�Դϴ�. \n", avg);
	else if (avg >= 70.0)
		printf("��� %.2f��\n�̹� ������ C�Դϴ�. \n", avg);
	else if (avg >= 50.0)
		printf("��� %.2f��\n�̹� ������ D�Դϴ�. \n", avg);
	else
		printf("��� %.2f��\n�̹� ������ F�Դϴ�. \n", avg);

	return 0;
}