#include <stdio.h>
main(void)
{
	// << ���ʽ���Ʈ������ ( 10*2^�ű�� ���� ��)
	// >> �����ʽ���Ʈ������ (10/2^�ű�� ���� �� !��ȣ��Ʈ�� �״�� ������)

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2;
	int shift_right = num2 >> 2;
	printf("%d << 2 = %d\n", num1, shift_left);
	printf("%d >>2  = %d\n", num2, shift_right);


	return 0;
}