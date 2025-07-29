#include <stdio.h>
#define PI = 3.14
main(void)
{
	// 정수 : int / 실수 : double
	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%d\n", 10);

	const int MYCONST = 55;
	// 선언과 동시에 초기화 해야함
	return 0;
}