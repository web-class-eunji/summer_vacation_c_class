#include <stdio.h>
main(void)
{
	//char scanf_string[50];
	//printf("scanf_string 문자열을 입력하세요 : ");
	//scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));
	//printf("%s\n", scanf_string);
	//%s : 공백이나 스페이스, 탭 등을 만나면 입력을 멈춘다.

	char getString[50];
	printf("getString문자열을 입력하세요 : ");
	gets_s(getString, sizeof(getString));
	printf("%s\n", getString);

	return 0;
}