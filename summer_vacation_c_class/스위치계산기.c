#include <stdio.h>
main(void)
{
	/*
	����ڰ� �Է��� ���ڸ� ���� ���� 2��
	�Է¹��� ���ڸ� ������ �����ڸ� ���� ����1�� ( char )
	// (+,-,*,/)

	�����ڸ� ���� �Է¹ް�
	���� 2���� �̾ �Է¹޴´�.

	switch���� Ȱ���Ͽ� �����ڿ� + �� ���Դٸ� +case�� �۵���Ű��,
	*�� ���Դٸ� *case�� �۵����� ���⸦ �����. 
	������ �����ڸ� ����ϸ鼭 ���� 2��°�� 0�� ���Դٸ� 0���� ���� �� �����ϴ�.
	*/
	char operator; //������
	int num1, num2; // ���� 2��

	printf("�����ڸ� �Է��ϼ���(+,-,*,/) : ");
	scanf_s("%c", &operator,1);

	printf("�ΰ��� ���ڸ� ����� �����Ͽ� �Է��ϼ��� : ");
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
			printf("0���� ���� �� �����ϴ�.\n");
		}
		break;
	default: printf("��ȿ���� ���� ���� �Է��߽��ϴ�. ���α׷��� ������ϼ���.\n");
	}


	return 0;
}