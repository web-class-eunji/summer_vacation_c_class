#include <stdio.h>
main(void)
{
	// for�� ���
	// i �� 10���� �þ�� �ݺ��Ѵ�.

	for (int i = 0; i <= 10; i++) { // i�� 10���� �þ��.
		if (i == 6) { //i�� �þ�ٰ� 6�� �������ٸ�
			break; // ��� �극��ũ
		}
		printf("%d \n", i);
	}

	printf("\n");

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d \n", i);
		i++;
	}


	return 0;
}