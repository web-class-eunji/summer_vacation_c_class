#include <stdio.h>
#define PI = 3.14
main(void)
{
	// ���� : int / �Ǽ� : double
	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%d\n", 10);

	const int MYCONST = 55;
	// ����� ���ÿ� �ʱ�ȭ �ؾ���
	return 0;
}