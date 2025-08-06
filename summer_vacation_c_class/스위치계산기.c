#include <stdio.h>
main(void)
{
	/*
	사용자가 입력할 숫자를 담을 변수 2개
	입력받은 숫자를 연산할 연산자를 담은 변수1개 ( char )
	// (+,-,*,/)

	연산자를 먼저 입력받고
	숫자 2개를 이어서 입력받는다.

	switch문을 활용하여 연산자에 + 가 들어왔다면 +case를 작동시키고,
	*가 들어왔다면 *case를 작동시켜 계산기를 만든다. 
	나누기 연산자를 사용하면서 숫자 2번째에 0이 들어왔다면 0으로 나눌 수 없습니다.
	*/
	char operator; //연산자
	int num1, num2; // 숫자 2개

	printf("연산자를 입력하세요(+,-,*,/) : ");
	scanf_s("%c", &operator,1);

	printf("두개의 숫자를 띄어쓰기로 구분하여 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	switch (operator) {
	case '+' : printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;
	case '-' : printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '*' : printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case '/' :
		if (num2 != 0) {
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
		}
		else {
			printf("0으로 나눌 수 없습니다.\n");
		}
		break;
	default: printf("유효하지 않은 값을 입력했습니다. 프로그램을 재실행하세요.\n");
	}


	return 0;
}