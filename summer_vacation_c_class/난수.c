#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(void)
{
	int rad;
	srand((unsigned int)time(NULL));
	rad = rand() % 100 + 1;
	printf("%d", rad);
	return 0;
}