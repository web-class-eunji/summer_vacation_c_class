#include <stdio.h>
main(void)
{
	int a[3][4];
	a[0][0] = 10;
	printf("%d \n", a[0][0]);

	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	return 0;
}