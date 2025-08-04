#include <stdio.h>
main(void)
{
	// << 왼쪽시프트연산자 ( 10*2^옮기고 싶은 값)
	// >> 오른쪽시프트연산자 (10/2^옮기고 싶은 값 !부호비트를 그대로 가져옴)

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2;
	int shift_right = num2 >> 2;
	printf("%d << 2 = %d\n", num1, shift_left);
	printf("%d >>2  = %d\n", num2, shift_right);


	return 0;
}