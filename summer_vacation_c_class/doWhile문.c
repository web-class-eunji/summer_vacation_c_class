#include <stdio.h>
main(void)
{
	int do_while = 1;
	do {
		printf("do while�� %d�� �ǽ���!\n",do_while);
		do_while++;
	} while (do_while >= 10);

	return 0;
}