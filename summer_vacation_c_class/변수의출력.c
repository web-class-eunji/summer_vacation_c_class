#include <stdio.h>
main(void)
{
	int number1 = 1;
	//printf(number1); 출력 안 됨
	printf("번호 : %d \n나이 : %d \n", number1,number1);
	// 번호 : 1

	// 2 * 3 = 6
	// 조건 : 변수를 3개 선언해서
	// 힌트 : 곱하기는 *을 사용한다.

	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d * %d = %d", num1, num2, result);
	return 0;
}