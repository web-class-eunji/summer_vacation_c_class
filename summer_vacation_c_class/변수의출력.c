#include <stdio.h>
main(void)
{
	int number1 = 1;
	//printf(number1); ��� �� ��
	printf("��ȣ : %d \n���� : %d \n", number1,number1);
	// ��ȣ : 1

	// 2 * 3 = 6
	// ���� : ������ 3�� �����ؼ�
	// ��Ʈ : ���ϱ�� *�� ����Ѵ�.

	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d * %d = %d", num1, num2, result);
	return 0;
}