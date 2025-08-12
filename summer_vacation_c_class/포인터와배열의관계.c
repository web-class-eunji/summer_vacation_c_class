#include <stdio.h>
main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;

	int b = 5;
	int* bp = &b;
	//*bp = 10;
	bp[0] = 10;
	printf("%d \n", *bp);
	return 0;
}