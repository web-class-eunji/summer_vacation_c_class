#include <stdio.h>
main(void)
{
	char ch1 = 'A';
	printf("%c\n", ch1);

	char ch2 = 65;
	printf("%c\n", ch2);

	printf("���� : %c, ���� : %d\n", ch1, ch1);
	printf("���� : %c, ���� : %d\n", ch2, ch2);

	int n = 'A';
	printf("���� : %c, ���� : %d\n", n, n);
	return 0;
}