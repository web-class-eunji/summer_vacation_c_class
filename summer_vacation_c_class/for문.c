#include <stdio.h>
main(void)
{
	/*
	for(�ʱⰪ;���ǽ�;������){
		������ ���̶�� �����ų �ڵ�
	}
	*/

	int forNumber; 
	
	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("�ݺ� %d\n", forNumber);
	}

	int i;
	// i�� ������
	// �ݺ�10
	// �ݺ� 9
	// �ݺ� 8
	// �ݺ� 7 
	// .
	// .
	// .
	// �ݺ�1 ���� �����
	for (i = 10; i >= 1; i--) {
		printf("�ݺ� %d\n", i);
	}

	//�������� �����
	//1�� ���� : 1
	// 2��  ���� : 4
	// 3�� ���� : 9
	// 10�� ���� : 100

	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d �� ���� : %d\n", square, square * square);
	}

	for (;;) {
		
	}

	while (1) {
		printf("");
	}
	return 0;
}