#include <stdio.h>
main(void)
{
	/*
		if(���ǹ�) {
			���ǹ��� ������ ��� ����
		}
		else if (���ǹ�2) {
			���ǹ��� �������� �ʰ� ���ǹ�2�� �����Ѵٸ� ����
		}
		else if (���ǹ�3) {
			���ǹ��� ���ǹ�2�� �������� �ʰ� ���ǹ�3�� �����Ѵٸ� ����
		}
		else {
			�� ��� ������ �������� ���� ��� ����
		}
	*/

	int number;
	printf("���� �Է� : ");
	scanf_s("%d", &number);
	if (number > 3) {
		printf("�����");
	}
	else if (number == 1) {
		printf("������");
	}
	else { // � ���ϱ�? 
		printf("�ܽ���");
	}
	return 0;

}