#include <stdio.h>
main(void)
{
	//���� : Ǯ��
	// a = b : a�� b�� ����
	// a += b : a = a + b
	// a -= b : a = a - b
	// a *= b : a = a * b
	// a /= b : a = a/b
	// a %= b : a = a%b

	int num1 = 3, num2 = 4;
	num1 += 3;
	printf("num1 += 3 �� ����� : %d\n", num1);

	num2 *= 4;
	printf("num2 *= 4 �� ����� : %d\n", num2);
	return 0;

}