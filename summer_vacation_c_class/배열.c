#include <stdio.h>
main(void)
{
	// �迭 �̸� :������ ����
	// �迭�� ���� �ڷ��� �ʿ�
	// �迭�� ���� : �迭�� ���Ե� �������� ����

	int numbers[5] = { 10,20,30,40,50 }; // �ʱ�ȭ����Ʈ
	//int numbers[] = { 1,2,3 };
	numbers[0] = 100;
	
	int max;
	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
		// ���� max�� int i �� ������ �����ͺ��� �۴ٸ� max�� �� ū ���� �����Ѵ�.
	}
	printf("�ִ밪 : %d\n", max);
	
	return 0;
}
