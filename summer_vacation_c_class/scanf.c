#include <stdio.h>
main(void)
{
	// 1. �Է��� �������� �ڷ����� �����ϴ� ���Ĺ���.
	// 2. �Է��� �����Ͱ� ����� �޸� ����
	// 3. scanf -> scanf_s

	int num;
	scanf_s("%d", &num);
	printf("\n");

	//scanf_s("�Է� : %d", &num);
	printf("�Է� : ");
	scanf_s("%d", &num);
	return 0;
}