#include <stdio.h>
main(void)
{
	/*
		�Է¹��� ������ 90 �̻��̸� A
		80 �̻��̸� B
		70 �̻��̸� C
		60 �̻��̸� D
		�Է¹��� ������ ������ �������� �ʴ´ٸ� ����� ��÷ ���
	*/
	int score;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("%d ���� A�����Դϴ�. �����߾��~~", score);
	}
	else if (score >= 80) {
		printf("%d ���� B�����Դϴ�.", score);
	}
	else if (score >= 70) {
		printf("%d ���� C�����Դϴ�.", score);
	}
	else if (score >= 60) {
		printf("%d ���� D�����Դϴ�.", score);
	}
	else {
		printf("����� ��÷", score);
	}

	return 0;
}